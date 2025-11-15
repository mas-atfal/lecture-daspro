#include <iostream>
#include <iomanip>

using namespace std;

struct Mobil {
    string namaMobil;
    int tahunProduksi;
    int jumlahUnit;
    float hargaSewa;
    int lamaSewa;
    float totalSewa;
    float diskonLangganan;
    float diskonSyarat;
    float totalSetelahDiskon;
};

string getJenisMobile(string namaMobil) {
    if (namaMobil == "Avanza" || namaMobil == "Xenia" || namaMobil == "Eritga") {
        return "MPV";
    } else if (namaMobil == "Altis" || namaMobil == "Civic" || namaMobil == "Camry") {
        return "Sedan";
    } else if (namaMobil == "Pajero" || namaMobil == "Fortuner") {
        return "SUV";
    } else {
        return "Jenis Lainnya";
    }
}

int main() {
    int jumlahMobil;
    string namaPenyewa;
    char langganan;
    float totalKeseluruhan = 0;
    int totalUnit = 0;
    int maxHari = 0;
    string bonus = "Tissue Kabin";
    float totalAkhir = 0;
    float pajak10 = 0;

    cout << "PROGRAM PENYEWAAN/RENTAL MOBIL" << endl;
    cout << "==============================" << endl;

    // mulai program
    cout << "Jumlah Mobil yang disewa : ";
    cin >> jumlahMobil;

    cin.ignore();
    cout << "Nama Penyewa : ";
    getline(cin, namaPenyewa);

    cout << "Apakah Pembeli Langganan [Y/T] : ";
    cin >> langganan;

    // Set variable array mobil
    Mobil mobil[jumlahMobil];

    for (int i = 0; i < jumlahMobil; i++) {
        cout << "---------------------------" << endl;
        cout << "Mobil ke-" << i + 1 << endl;

        cin.ignore();
        cout << "Nama Mobil : ";
        getline(cin, mobil[i].namaMobil);

        cout << "Jenis Mobil : ";
        cout << getJenisMobile(mobil[i].namaMobil) << endl;

        cout << "Tahun Produksi : ";
        cin >> mobil[i].tahunProduksi;

        cout << "Jumlah Unit : ";
        cin >> mobil[i].jumlahUnit;

        // Perhari
        cout << "Harga Sewa : ";
        cin >> mobil[i].hargaSewa;

        // Hari
        cout << "Lama Sewa : ";
        cin >> mobil[i].lamaSewa;

        // Set Total Sewa Mobil
        mobil[i].totalSewa = mobil[i].hargaSewa * mobil[i].lamaSewa;

        // Set Diskon Langganan
        mobil[i].diskonLangganan = ((langganan == 'Y' || langganan == 'y') ? mobil[i].totalSewa * 0.10 : 0);

        // Set Diskon Syarat
        if (mobil[i].jumlahUnit > 2 && mobil[i].lamaSewa > 10) {
            mobil[i].diskonSyarat = mobil[i].totalSewa * 0.10;
        } else {
            mobil[i].diskonSyarat = 0;
        }

        // Set Total setelah diskon
        mobil[i].totalSetelahDiskon = mobil[i].totalSewa - mobil[i].diskonLangganan - mobil[i].diskonSyarat;

        totalKeseluruhan += mobil[i].totalSetelahDiskon;

        // Set Total Unit
        totalUnit += mobil[i].jumlahUnit;

        // Set Max hari
        maxHari += mobil[i].lamaSewa;
    }

    if (totalKeseluruhan > 2500000) {
        bonus = "Sarung Cover Mobil";
    }

    pajak10 = totalKeseluruhan * 0.10;

    totalAkhir = totalKeseluruhan + pajak10;

    cout << fixed << setprecision(2) << showpoint;
    // OUTPUT
    for (int i = 0; i < jumlahMobil; ++i) {
        cout << "Mobil ke-" << i + 1 << endl;
        cout << "Nama Mobil             : " << mobil[i].namaMobil << endl;
        cout << "Tahun Produksi         : " << mobil[i].tahunProduksi << endl;
        cout << "Jumlah Unit            : " << mobil[i].jumlahUnit << endl;
        cout << "Harga Sewa             : " << mobil[i].hargaSewa << endl;
        cout << "Lama Sewa              : " << mobil[i].lamaSewa << endl;
        cout << "Total Harga Sewa       : " << mobil[i].totalSewa << endl;

        if (mobil[i].diskonLangganan > 0) {
            cout << "diskon 10%             : " << mobil[i].diskonLangganan << endl;
        }

        if (mobil[i].diskonSyarat > 0) {
            cout << "diskon Syarat          : " << mobil[i].diskonSyarat << endl;
        }

        cout << "Total Setelah Diskon   : " << mobil[i].totalSetelahDiskon << endl;

        cout << "-------------------------------" << endl;
    }

    cout << "=============================" << endl;
    cout << "Nama Peminjam      : " << namaPenyewa << endl;
    cout << "Langganan          : " << langganan << endl;
    cout << "Jumlah Mobil       : " << jumlahMobil << endl;
    cout << "TotalSewa Mobil    : " << totalKeseluruhan << endl;
    cout << "Pajak 10%          : " << pajak10 << endl;
    cout << "Total Akhir        : " << totalAkhir << endl;
    cout << "Bonus              : " << bonus << endl;
    cout << "=============================" << endl;

    return 0;
}