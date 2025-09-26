#include <iostream>
#include "p1.h"
#include "p2.h"
#include <limits>

using namespace std;

void dataP1(){
    string nama;
    string jurusan;
    string univ;
    cout << "----------------------------" << endl;
    cout << "Pertemuan 1 : Pengenalan C++" << endl;
    cout << "----------------------------" << endl;
    cout << "Mari kita kenalan dulu yuk.\n" << endl;

    cout << "Nama kamu siapa\t :";
    getline(cin, nama);
    cout << "Jurusan apa\t :";
    getline(cin, jurusan);
    cout << "Kuliah dimana\t :";
    getline(cin, univ);
    cout << '\n' << endl;

    cout << "-----------------DATA DIRI-----------------" << endl;
    cout << "Nama" << '\t' << '\t' << ":" << nama << endl;
    cout << "Jurusan" << '\t' << '\t' << ":" << jurusan << endl;
    cout << "Universitas" << '\t' << ":" << univ << endl;
    cout << "-------------------------------------------\n" << endl;
}


void sistemP1(){
    char pilihan;

    do {
        dataP1();
        cout << "Apakah kamu ingin mencoba kembali ? [y/n] "; cin >> pilihan;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (pilihan == 'y'){
            continue;
        } else if (pilihan == 'n') {
            cout << "Apabila akan kembali ke program sebelumnya. Terimakasih :)\n" << endl;
        } else {
            cout << "Pilihan tidak valid, Program dihentikan\n" << endl;
            pilihan = 'x';
        }
    } while (pilihan == 'y');
}
