#include <iostream>
#include "p1.h"
#include "p2.h"

using namespace std;

int main(){
    int pilihan;
    do {
        cout << "--------------------------------------" << endl;
        cout << "PROGRAM PEMBELAJARAN C++ | UDINUS 2025" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Pertemuan 1 : Pengenalan C++" << endl;
        cout << "2. Pertemuan 2 : Variabel dan Logika\n" << endl;

        cout << "Pilih salah satu pembelajaran C++ : "; cin >> pilihan;
        switch(pilihan) {
            case 1 :
                sistemP1();
                break;
            case 2 :
                sistemP2();
                break;
            default :
                cout << "Input Tidak Valid, Program dihentikan";
                break;
        }
    } while (pilihan != 0);
    return 0;
}
