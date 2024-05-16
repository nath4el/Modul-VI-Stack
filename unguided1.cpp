#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>

using namespace std;

bool adalahPalindrom(const string &kalimat)
{
    stack<char> tumpukanKarakter;
    string kalimatNormal;

    // Normalisasi string: hapus karakter non-alfanumerik dan ubah menjadi huruf kecil
    for (char ch : kalimat)
    {
        if (isalnum(ch))
        {
            kalimatNormal += tolower(ch);
        }
    }

    // Dorong semua karakter ke dalam stack
    for (char ch : kalimatNormal)
    {
        tumpukanKarakter.push(ch);
    }

    // Buat versi terbalik dari string menggunakan stack
    string kalimatTerbalik;
    while (!tumpukanKarakter.empty())
    {
        kalimatTerbalik += tumpukanKarakter.top();
        tumpukanKarakter.pop();
    }

    // Bandingkan string input yang dinormalisasi dengan string terbalik
    return kalimatNormal == kalimatTerbalik;
}

int main()
{
    string kalimat;
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    if (adalahPalindrom(kalimat))
    {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    }
    else
    {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
