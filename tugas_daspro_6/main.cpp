#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct VehicleRule {
    int hourlyRate;
    int maxHours;
    int maxFee;
};

int main() {
    // Pseudocode
    // =============================================================================
    // Menghitung Biaya Parkir
    // Variablenya:
    //     - jenisKendaraan = ["sepeda", "sepeda_listrik", "tossa", "motor", "mobil", "mini_truck", "truck", "mini_bus", "bus"]
    //     - lamaParkir
    //     - biayaPerJam
    //     - biayaParkir
    //
    // Algoritmanya:
    //     jika jenis kendaraan = sepeda, sepeda_listrik, tossa, atau motor:
    //         biayaParkir = 3000
    //         jika lama parkir > 12 jam:
    //             biayaParkir = 50000
    //     jika jenis kendaraan = mobil:
    //         biayaParkir = 5000
    //         jika lama parkir > 12 jam:
    //             biayaParkir = 75000
    //     jika jenis kendaraan = mini_truck, truck, mini_bus, atau bus:
    //         biayaParkir = 25000
    //         jika lama parkir > 8 jam:
    //             biayaParkir = 250000

    // Daftar kendaraan dan aturan
    vector<string> vehicleList = {
        "motor", "sepeda", "sepeda listrik", "tossa",
        "mobil", "minitruck", "truck", "minibus", "bus"
    };

    map<string, VehicleRule> rules = {
        {"motor", {3000, 12, 50000}},
        {"sepeda", {3000, 12, 50000}},
        {"sepeda listrik", {3000, 12, 50000}},
        {"tossa", {3000, 12, 50000}},
        {"mobil", {5000, 12, 75000}},
        {"minitruck", {25000, 8, 250000}},
        {"truck", {25000, 8, 250000}},
        {"minibus", {25000, 8, 250000}},
        {"bus", {25000, 8, 250000}},
    };

    cout << "=== PROGRAM BIAYA PARKIR ===" << endl;
    cout << "Pilih jenis kendaraan:" << endl;

    // Tampilkan daftar kendaraan
    for (size_t i = 0; i < vehicleList.size(); ++i) {
        cout << i + 1 << ". " << vehicleList[i] << endl;
    }

    int choice;
    cout << "\nMasukkan pilihan (1-" << vehicleList.size() << "): ";
    cin >> choice;

    if (choice < 1 || choice > (int)vehicleList.size()) {
        cout << "Pilihan tidak valid!" << endl;
        return 0;
    }

    string vehicle = vehicleList[choice - 1];
    int hours;

    cout << "Lama parkir (jam): ";
    cin >> hours;

    if (hours <= 0) {
        cout << "Lama parkir tidak valid!" << endl;
        return 0;
    }

    VehicleRule rule = rules[vehicle];
    int totalCost = 0;

    // Perhitungan biaya
    if (hours > rule.maxHours) {
        int extraHours = hours - rule.maxHours;
        totalCost = rule.maxFee + (extraHours * rule.hourlyRate);
    } else {
        totalCost = hours * rule.hourlyRate;
    }

    // Tampilkan hasil
    cout << "\n=== DETAIL PARKIR ===" << endl;
    cout << "Jenis kendaraan : " << vehicle << endl;
    cout << "Durasi parkir   : " << hours << " jam" << endl;
    cout << "Biaya total     : Rp " << totalCost << endl;

    return 0;
}