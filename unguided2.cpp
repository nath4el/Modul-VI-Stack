#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Fungsi untuk membalikkan kalimat menggunakan stack
string balikkanKalimat(const string &kalimat)
{
    stack<char> tumpukanKarakter;
    string kalimatTerbalik;

    // Dorong setiap karakter ke dalam stack
    for (char ch : kalimat)
    {
        tumpukanKarakter.push(ch);
    }

    // Ambil karakter dari stack dan bentuk kalimat terbalik
    while (!tumpukanKarakter.empty())
    {
        kalimatTerbalik += tumpukanKarakter.top();
        tumpukanKarakter.pop();
    }

    return kalimatTerbalik;
}

int main()
{
    string kalimat;

    // Meminta pengguna untuk memasukkan kalimat
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    // Membalikkan kalimat
    string hasil = balikkanKalimat(kalimat);

    // Menampilkan hasil pembalikan
    cout << "Data stack Array : " << endl;
    cout << "Data :  " << hasil << endl;

    return 0;
}
