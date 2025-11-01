//
//  main.cpp
//  Tugas DASPRO - 1
//
//  Created by Mas Atfal on 19/09/25.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    //    cout<<"Hello World\n";

    string nama = "MUCHAMMAD ATHFAL";
    string nim = "A18.2025.00213";
    int umur = 20;
    int penghasilan = 1000000000;

    double ipk = 3.90;
    float penghasilanPerBulan = (float)penghasilan / 12;
    bool statusPenghasilan = penghasilan >= 100000000;

    cout << "Data Diri Saya \n \n"
         << "Nama: " << nama << "\n"
         << "Nim: " << nim << "\n"
         << "Umur: " << umur << "\n"
         << "IPK: " << ipk << "\n"
         << "Penghasilan: " << penghasilan << "\n"
         << "Penghasilan Perbulan: " << penghasilanPerBulan << "\n"
         << "Status Penghasilan: "
         << (statusPenghasilan ? "Penghasilan Cukup" : "Penghasilan Tidak Cukup") << "\n \n";

    return 0;
}