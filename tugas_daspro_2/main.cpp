#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

// Kuis 1
// y = a^3 + 7
void quizOne() {
    double a;
    cout << "Masukan Nilai a: ";
    cin >> a;
    
    double y = pow(a, 3) + 7;
    cout << "Hasil y = " << y << "\n";
}

// Kuis 2
// y = ax^2 + bx + c
void quizTwo() {
    double a, b, c, x;
    
    cout << "Masukan Nilai a, b, c, dan x (dipisah dengan spasi): ";
    cin >> a >> b >> c >> x;
    
    double y = a * x * x + b * x + c;
    cout << "Hasil dari y = " << y << "\n";
}

// Kuis 3
// Input 5 Bilangan: Jumlah dan rata - rata
void quizThree() {
    vector<double> v(5);
    cout << "Masukan 5 Bilangan (pisahkan dengan spasi): ";
    for(double &t : v) cin >> t;
    double jumlah = accumulate(v.begin(), v.end(), 0.0);
    double rata = jumlah / v.size();
    
    cout << "Jumlah = " << jumlah << "\n";
    cout << "Rata - Rata = " << rata << "\n";
}

// Kuis 4
// Konversi suhu dari celcius ke F, K, R
void quizFour() {
    double C;
    
    cout << "Masukan suhu dalam Celcius: ";
    cin >> C;
    
    double F = (9.0/5.0) * C + 32;
    double K = C + 273.0;
    double R = (4.0/5.0) * C;
    
    cout << "Fahrenheit = " << F << "\n";
    cout << "Kelvin = " << K << "\n";
    cout << "Reamur = " << R << "\n";
}

int main() {
    while (true) {
        cout << "===== Menu Pilihan ===== \n"
            << "1. y = a^3 + 7 \n"
            << "2. y = ax^2 + bx + c \n"
            << "3. Jumlah dan rata - rata Input 5 Bilangan \n"
            << "4. Konversi suhu dari celcius ke F, K, R \n"
            << "0. Keluar \n"
            << "Silahkan Pilih: ";
        
        int pilihan;
        
        if(!(cin >> pilihan)) return 0;
        
        switch (pilihan) {
            case 1: quizOne(); break;
            case 2: quizTwo(); break;
            case 3: quizThree(); break;
            case 4: quizFour(); break;
            case 0: cout << "Selesai. \n"; break;
                
            default: cout << "Pilihan Tidak Valid. \n \n"; break;
        }
    }
}
