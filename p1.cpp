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

    cout << "Nama kamu siapa ? ";
    getline(cin, nama);
    cout << "Jurusan apa ? ";
    getline(cin, jurusan);
    cout << "Kamu Kuliah dimana ? ";
    getline(cin, univ);

    cout << "-----------------DATA DIRI-----------------" << endl;
    cout << "Nama" << '\t' << '\t' << ":" << nama << endl;
    cout << "Jurusan" << '\t' << '\t' << ":" << jurusan << endl;
    cout << "Universitas" << '\t' << ":" << univ << endl;
    cout << "-------------------------------------------\n" << endl;

}

void sistemP1(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char pilihan;

    do {
        dataP1();
        cout << "Apakah kamu ingin mencoba kembali ? [y/n] "; cin >> pilihan;
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
