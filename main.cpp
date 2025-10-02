#include <iostream>
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include <limits>

using namespace std;

int main(){
    int pilihan;
    do {
        cout << "--------------------------------------" << endl;
        cout << "PROGRAM PEMBELAJARAN C++ | UDINUS 2025" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Pertemuan 1 : Pengenalan C++" << endl;
        cout << "2. Pertemuan 2 : Tipe Data" << endl;
        cout << "3. Pertemuan 3 : Variabel dan Logika" << endl;
        cout << "4. Pertemuan 4 : Analisis If Else\n" << endl;
        cout << "Pilih salah satu pembelajaran C++ : "; cin >> pilihan;
        cout << '\n';
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch(pilihan) {
            case 1 :
                sistemP1();
                break;
            case 2 :
                sistemP2();
                break;
            case 3 :
                sistemP3();
                break;
            case 4 :
                sistemP4();
                break;
            default :
                cout << "Input Tidak Valid, Program dihentikan";
                break;
        }
    } while (pilihan != 0);
    return 0;
}
