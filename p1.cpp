#include <iostream>
#include "p1.h"
#include "p2.h"
#include <limits>

using namespace std;

void dataP1(){
    string nama,prodi,nim;

    cout << "----------------------------" << endl;
    cout << "Pertemuan 1 : Pengenalan C++" << endl;
    cout << "----------------------------" << endl;
    cout << "Mari kita kenalan dulu yuk." << endl;

    cout << "Nama Lengkap\t\t : ";
    getline(cin, nama);
    cout << "Nomor Induk Mahasiswa\t : ";
    getline(cin, nim);
    cout << "Program Studi\t\t : ";
    getline(cin, prodi);
    cout << '\n' << endl;

    cout << "---------------KARTU MAHASISWA---------------" << endl;
    cout << "Nama\t: " << nama << endl;
    cout << "NIM\t: " << nim << endl;
    cout << "Prodi\t: " << prodi << endl;
    cout << "----------------------------------------------\n" << endl;
}


void sistemP1(){
    char pilihan;
    do {
        dataP1();
        cout << "Apakah kamu ingin mencoba kembali ? [y/n] "; cin >> pilihan;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (pilihan == 'y');
}
