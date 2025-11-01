#include <iomanip>
#include <iostream>

using namespace std;

struct Mobil {
    string nama;
    string jenisMobil;
    int tahunProduksi;
    string satuanJual;
    double hargaJual;
    int jumlahJual;
    double totalJual;
    double diskon10; // Jika customer langganan
    double diskon15; // Pembelian lebih dari 2 unit
    double totalSetelahDiskon;
};

int main() {
    string nama, bonus;
    char langganan;
    int jumlahJual;
    double totalKeseluruhan = 0;
    double pajak10;

    cout << "PROGRAM PENJUALAN MOBIL" << endl;
    cout << "========================" << endl;

    cout << "Jumlah Mobil yang dijual: ";
    cin >> jumlahJual;

    cout << "Nama Pembeli: ";
    cin >> nama;

    cout << "Apakah Pembeli Langganan [Y/T]: ";
    cin >> langganan;

    cout << "----------------------------------" << endl;

    Mobil mobil[jumlahJual];

    for (int i = 0; i < jumlahJual; ++i) {
        cout << "Mobil Ke-" << i + 1<< endl;
        // Menghilangkan Newline/espace
        cin.ignore();

        cout << "Nama Mobil     : ";
        // getline untuk menggabungkan dua kata yang dipisah dengan spasi
        getline(cin, mobil[i].nama);

        cout << "Jenis Mobil     : ";
        getline(cin, mobil[i].jenisMobil);

        cout << "Tahun Produksi     : ";
        cin >> mobil[i].tahunProduksi;

        cout << "Satuan Jual        : ";
        cin >> mobil[i].satuanJual;

        cout << "Harga Jual        : ";
        cin >> mobil[i].hargaJual;

        cout << "Jumlah Jual       : ";
        cin >> mobil[i].jumlahJual;

        // Menghitung Total Jual
        mobil[i].totalJual = mobil[i].hargaJual * mobil[i].jumlahJual;

        // Menghitung Diskon Unit 15%
        mobil[i].diskon15 = (mobil[i].jumlahJual > 2) ? mobil[i].totalJual * 0.15 : 0;

        // Menghitung Diskon Langganan 10%
        mobil[i].diskon10 = ((langganan == 'y' || langganan == 'Y') ? mobil[i].totalJual * 0.10 : 0);

        // Menghitung Total Setelah Diskon
        mobil[i].totalSetelahDiskon = mobil[i].totalJual - mobil[i].diskon15 - mobil[i].diskon10;

        // Menghitung Total Keseluruhan
        totalKeseluruhan += mobil[i].totalSetelahDiskon;

        cout << "-------------------------------" << endl;
    }

    if (totalKeseluruhan > 200000000) {
        bonus = "Sarung Cover Mobil";
    } else {
        bonus = "Tisue Kabin";
    }

    // Output hasil
    cout << fixed << setprecision(2) << showpoint;
    for (int i = 0; i < jumlahJual; ++i) {
        cout << "Mobil Ke-" << i + 1<< endl;
        cout << "Nama Mobil         : " << mobil[i].nama << endl;
        cout << "Jenis Mobil        : " << mobil[i].jenisMobil << endl;
        cout << "Tahun Produksi     : " << mobil[i].tahunProduksi << endl;
        cout << "Satuan Jual        : " << mobil[i].satuanJual << endl;
        cout << "Harga Jual         : " << mobil[i].hargaJual << endl;
        cout << "Jumlah Jual        : " << mobil[i].jumlahJual << endl;
        cout << "Total jual         : " << mobil[i].totalJual << endl;

        if (mobil[i].diskon10 > 0) {
            cout << "Diskon 10%     : " << mobil[i].diskon10 << endl;
        }

        if (mobil[i].diskon15 > 0) {
            cout << "Diskon 15%     : " << mobil[i].diskon15 << endl;
        }

        cout << "Total Setelah Diskon: " << mobil[i].totalSetelahDiskon << endl;
        cout << "-------------------------------" << endl;
    }

    pajak10 = totalKeseluruhan * 0.10;

    cout << "=========================" << endl;
    cout << "Nama Pembeli       :" << nama << endl;
    cout << "Langganan          :" << langganan << endl;
    cout << "Jumlah Mobil       :" << jumlahJual << endl;
    cout << "Total Harga Mobil  :" << totalKeseluruhan << endl;
    cout << "Pajak 10%          :" << pajak10 << endl;
    cout << "Total Akhir        :" << totalKeseluruhan - pajak10 << endl;
    cout << "Bonus              :" << bonus << endl;

    return 0;
}