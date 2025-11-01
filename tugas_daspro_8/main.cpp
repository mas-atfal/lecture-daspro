#include <iostream>

using namespace std;

int main() {
    // Kasus 1
    // cout << "KASUS 1" << endl;
    //
    // for (int i = 1; i <= 5; ++i) {
    //     cout << "Hello, World!" << endl;
    // }
    //
    // cout << endl;
    // int i = 1;
    // while (i <= 5) {
    //     cout << "Hello, World!" << endl;
    //     i++;
    // }

    // Kasus 2
    // cout << "KASUS 2" << endl;
    // //
    // for (int i = 0; i < 10; ++i) {
    //     cout << i << " ";
    // }
    // //
    // cout << endl;
    //
    // int i = 1;
    // while (i <= 10) {
    //     cout << i << " ";
    //     i++;
    // }

    // Kasus 2A
    // cout << "KASUS 2A" << endl;
    // int a, N;
    // cout << "Masukan nilai N: ";
    // cin >> N;
    //
    // cout << "Masukan nilai a: ";
    // cin >> a;

    // for (int i = a; i <= N; ++i) {
    //     cout << i << " ";
    // }
    // //
    // cout << endl;
    //
    // while (a <= N) {
    //     cout << a << " ";
    //     a++;
    // }

    // Kasus 3
    // cout << "KASUS 3" << endl;
    // //
    // for (int i = 10; i >= 0; --i) {
    //     cout << i << " ";
    // }
    // //
    // cout << endl;
    //
    // int i = 9;
    // while (i >= 1) {
    //     cout << i << " ";
    //     --i;
    // }

    // Kasus 3A
    // cout << "KASUS 3A" << endl;
    // //
    // int a, b;
    //
    // cout << "Masukan bilangan a: ";
    // cin >> a;
    // cout << "Masukan bilangan b: ";
    // cin >> b;
    //
    // if (b < a) {
    //     cout << "Nilai a tidak boleh lebih besar dari b";
    // }

    // for (int i = b; i >= a; --i) {
    //     cout << i << " ";
    // }
    // //
    // cout << endl;
    //
    // while (b >= a) {
    //     cout << b << " ";
    //     --b;
    // }

    // Kasus 4
    cout << "KASUS 4" << endl;
    // //
    int a, b, inc;
    //
    cout << "Masukan bilangan a: ";
    cin >> a;
    cout << "Masukan bilangan b: ";
    cin >> b;
    cout << "Masukan bilangan increment: ";
    cin >> inc;
    //
    if (a < b) {
        for (int i = a; i <= b; i += inc) {
            cout << i << " ";
        }
    } else {
        for (int i = a; i >= b; i -= inc) {
            cout << i << " ";
        }
    }

    // for (int i = a; i <= b; i += inc) {
    //     cout << i << " ";
    // }
    // //
    // cout << endl;
    // while (a < b) {
    //     cout << a << " ";
    //     a += inc;
    // }

    return 0;
}