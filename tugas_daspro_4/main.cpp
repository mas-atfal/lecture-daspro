#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // 1. buatlah Program untuk mengetahui angka terakhir dari sebuah angka interger
    
    // 2. buatlah program untuk menampil jumlah uang, Ribuan,Ratusan dan puluhan dalam sebuah lumpulan uang.
    
    while(true) {
        int angka;
        cout << "Masukan Angka: ";
        cin >> angka;
        
        // angka % 10
        
        int angkaTerakhir = angka % 10;
        cout << "Angka terakhir dari " << angka << " adalah: " << angkaTerakhir << endl;
        
        int ribuan = angka / 1000;
        int ratusan = (angka % 1000) / 100;
        int puluhan = (angka % 100) / 10;
        
        cout << "Jumlah Uang: " << angka << "\n"
            << "Ribuan: " << ribuan << "\n"
            << "Ratusan: " << ratusan << "\n"
            << "Puluhan: " << puluhan << "\n";
    }
    
    return EXIT_SUCCESS;
}
