#include <iostream>

using namespace std;

int main() {
    // Buatlah Program sederhana untuk mengetahui bilangan terbesar dari sebuah deretan angka :
    // Contoh tampilan :
    // Masukkan Jumlah angka : 5
    // Angka 1: 34
    // Angka 2 : 50
    // Angka 3 : 66
    // Angka 4 : 23
    // Angka 5 :90
    //
    // Angka terbesar adalah : 100

    int n, angka, nilaiTerbesar = 0;

    cout << "Masukan Jumlah angka : ";
    cin >> n;

    // for (int i = 1; i <= n; ++i) {
    //     cout << "Angka " << i << ": ";
    //     cin >> angka;
    //
    //     if (angka > nilaiTerbesar) {
    //         nilaiTerbesar = angka;
    //     }
    // }

    int i = 1;
    while (i <= n) {
        cout << "Angka " << i << ": ";
        cin >> angka;

        if (angka > nilaiTerbesar) {
            nilaiTerbesar = angka;
        }
        i++;
    }

    cout << "\nAngka terbesar adalah: " << nilaiTerbesar << endl;

    return 0;
}