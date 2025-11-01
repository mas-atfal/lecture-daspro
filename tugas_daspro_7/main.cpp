#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Notasi Algoritma
    // 1. Input jenis barang, status member, jumlah belanja, dan metode pembayaran.
    // 2. Tentukan diskon dasar berdasarkan jenis barang.
    // 3. Tambahkan diskon tambahan sesuai kondisi:
    //     - Jika member
    //     - Jika jumlah belanja > 10
    //     - Jika bayar cash
    // 4. Hitung total diskon (total persentase)
    // 5. Hitung harga akhir = harga awal - (diskon * harga awal)
    // 6. Output hasil

    string jenisBarang, paymentMethod;
    char isMember;
    int jumlahBelanja;
    double hargaPerItem, totalHarga, totalDiskon = 0.0;

    cout << "====== Program Menghitung Total Diskon ======" << endl;
    cout << "Masukan Jenis Barang (Elektronik/Pakaian/Makanan): ";
    cin >> jenisBarang;
    cout << "Apakah anda member ? (y/n): ";
    cin >> isMember;
    cout << "Masukan jumlah Belanja ? ";
    cin >> jumlahBelanja;
    cout << "Masukan Harga Per Barang ? ";
    cin >> hargaPerItem;
    cout << "Masukan Metode Pembayaran (cash/noncash): ";
    cin >> paymentMethod;

    if (jenisBarang == "Elektronik" || jenisBarang == "elektronik") {
        totalDiskon += 5; // 5%
        if (isMember == 'Y' || isMember == 'y')
            totalDiskon += 5; // 5%
        if (jumlahBelanja > 10)
            totalDiskon += 3; // 3%
        if (paymentMethod == "cash" || paymentMethod == "Cash")
            totalDiskon += 2; // 2%

    } else if (jenisBarang == "Pakaian" || jenisBarang == "pakaian") {
        totalDiskon += 3;
        if (isMember == 'Y' || isMember == 'y')
            totalDiskon += 3; // 3%
        if (jumlahBelanja > 10)
            totalDiskon += 2; // 2%
        if (paymentMethod == "cash" || paymentMethod == "Cash")
            totalDiskon += 2; // 2%

    } else if (jenisBarang == "Makanan" || jenisBarang == "makanan") {
        totalDiskon += 2;
    } else {
        cout << "Jenis Barang Tidak Dikenali";
        return 0;
    }

    totalHarga = hargaPerItem * jumlahBelanja;

    double potongan = totalHarga * (totalDiskon / 100);
    double hargaAkhir = totalHarga - potongan;

    cout << fixed << setprecision(0);
    cout << "\n ===== Rincian Pembelian ======" << endl;
    cout << "Jenis Barang: " << jenisBarang << endl;
    cout << "Jumlah Barang: " << jumlahBelanja << endl;
    cout << "Harga Per Barang: " << hargaPerItem << endl;
    cout << "Total Harga: " << totalHarga << endl;
    cout << "Total Diskon: " << totalDiskon << endl;
    cout << "Potongan Harga: " << potongan << endl;
    cout << "Harga Akhir: " << hargaAkhir << endl;

    return 0;
}