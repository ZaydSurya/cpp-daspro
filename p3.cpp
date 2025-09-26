#include <iostream>
#include "p3.h"
#include <limits>

using namespace std;

void dataP3(){
    string nama;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 3 : Variabel dan Logika C++" << endl;
    cout << "-------------------------------------" << endl;
}


void kasus1P3(){
    int rib,rat,pul,sat, madRat, madRib, data, rb, rt, pl;

    cout << "Konversi Nilai dari Ribuan" << endl;
    cout << "------------------------------" << endl;
    cout << "Input\t: 5214 || 1234 || 5123\n" << "Output\t: 5 Ribuan, 2 Ratusan, 1 Puluhan, 4 Satuan\n" << "\t: 5000, 200, 10, 4" << endl;
    cout << "------------------------------" << endl;
    cout << "Silahkan masukan nilainya : "; cin >> data;

    cout << '\n';

    rib = data / 1000; // Yang ini 1,234 -> karena integer jadinya 1
    madRib = data % 1000; // Nantikan dapetnya sisa, 234
    rat = madRib / 100; // Ketemunya 2,34
    madRat = madRib % 100; // ketemunya 34
    pul = madRat / 10; // ketemunya 3,4
    sat = madRat % 10;

    rb = data - madRib;
    rt = madRib - madRat;
    pl = madRat - sat;

    cout << rib << " Ribuan, " << rat << " Ratusan, " << pul << " Puluhan, " << sat << " Satuan." << endl;
    cout << rb << ", " << rt << ", " << pl << ", " << sat << ".\n" << endl;
}

void sistemP3(){
    int pilihan;
    dataP3();
    do {
        cout << "Program Python 3 :" << endl;
        cout << "------------------" << endl;
        cout << "1. Nominal Angka\n" << endl;
        cout << "Pilih salah satu program : ";
        cin >> pilihan;
        cout << '\n';

        switch(pilihan){
            case 1 :
                kasus1P3();
                break;
            default :
                cout << "Porgram yang dimasukkan tidak valid" << endl;
        }
    } while (pilihan != 0);
}


