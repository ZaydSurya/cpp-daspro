#include <iostream>
#include "p3.h"
#include <limits>

using namespace std;

void kasus1P3(){
    int rib,rat,pul,sat, madRat, madRib, data, rb, rt, pl;
    char pilihan;
    do {
        cout << "\nKonversi Nilai Ribuan" << endl;
        cout << "--------------------------------" << endl;
        cout << "Memberikan keterangan pada nilai" << endl;
        cout << "--------------------------------" << endl;
        cout << "Silahkan masukan nilainya : "; cin >> data;

        cout << '\n';

        rib = data / 1000; // Yang ini 1,234 -> karena integer jadinya 1
        madRib = data % 1000; // Nantikan dapetnya sisa, 234
        rat = madRib / 100; // Ketemunya 2,34
        madRat = madRib % 100; // ketemunya 34
        pul = madRat / 10; // ketemunya 3,4
        sat = madRat % 10; // ketemunya 4

        rb = data - madRib;
        rt = madRib - madRat;
        pl = madRat - sat;

        cout << "Output Keterangan\t: " << rib << " Ribuan, " << rat << " Ratusan, " << pul << " Puluhan, " << sat << " Satuan." << endl;
        cout << "Output Nilai\t\t: " << rb << ", " << rt << ", " << pl << ", " << sat << ".\n" << endl;
        cout << "Apakah ingin mengulangi lagi? [y/n] : "; cin >> pilihan;
    } while (pilihan == 'y');

}


void kasus2P3(){
    char pilihan;
    int nilai;
    do {
        cout << "Program Kondisi Operator Logika" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Operator logika sederhana AND, OR, XOR" << endl;
        cout << "--------------------------------------" << endl;

        cout << "Studi Kasus Penemuan Paus dan Hiu\n" << endl;
        cout << "Diketahui bahwasanya :" << endl;
        cout << "* Hiu dapat ditemukan di kedalaman 200 - 1000 meter di bawah permukaan laut." << endl;
        cout << "* Paus dapat ditemukan di kedalaman 1500 - 3000 meter di bawah permukaan laut.\n" << endl;
        cout << "Silahkan memasukkan nilai kedalaman untuk bertemu salah satunya." << endl;
        cout << "Masukkan nilai : "; cin >> nilai;
        cout << '\n';

        if (nilai >= 200 && nilai <= 1000){
            cout << "Kamu bertemu dengan Hiu di kedalaman " << nilai << "m.\n" << endl;
        } else if (nilai >= 1500 && nilai <= 3000){
            cout << "Kamu bertemu dengan Paus di kedalaman " << nilai << "m.\n" << endl;
        } else {
            cout << "Kamu tidak menemukan apa apa :(\n" << endl;
        }

        cout << "Apakah kamu ingin mengulangi nya lagi? [y/n] : "; cin >> pilihan;
        cout << '\n';
        if (pilihan == 'y'){
            cout << "Kamu akan menjalankan ulang.\n" << endl;
        } else if (pilihan == 'n'){
            cout << "Kamu akan kembali ke pemilihan program.\n" << endl;
        } else {
            cout << "Input tidak valid atau tidak ditemukan.\n" << endl;
        }
    } while (pilihan == 'y');
}


void kasus3P3(){

    bool a1=1, a2=1, a3=0, a4=0;
    bool b1=1, b2=0, b3=1, b4=0;

    cout << "Program Tabel Operator Logika Bool" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Menampilkan Tabel Operator Logika True & False" << endl;
    cout << "----------------------------------------------\n" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "| a | b | a and b | a or b | not a | not b | a eq b | a neq b |" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "| " << a1 << " | " << b1 << " |    " << (a1&&b1) << "    |    " << (a1||b1) << "   |   " << (!a1) << "   |   " << (!b1) << "   |    "  << (a1==b1) << "   |    " << (!a1==b1) << "    |" << endl;
    cout << "| " << a2 << " | " << b2 << " |    " << (a2&&b2) << "    |    " << (a2||b2) << "   |   " << (!a2) << "   |   " << (!b2) << "   |    "  << (a2==b2) << "   |    " << (!a2==b2) << "    |" << endl;
    cout << "| " << a3 << " | " << b3 << " |    " << (a3&&b3) << "    |    " << (a3||b3) << "   |   " << (!a3) << "   |   " << (!b3) << "   |    "  << (a3==b3) << "   |    " << (!a3==b3) << "    |" << endl;
    cout << "| " << a4 << " | " << b4 << " |    " << (a4&&b4) << "    |    " << (a4||b4) << "   |   " << (!a4) << "   |   " << (!b4) << "   |    "  << (a4==b4) << "   |    " << (!a4==b4) << "    |" << endl;
    cout << "---------------------------------------------------------------\n" << endl;
}


void sistemP3(){
    int pilihan;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 3 : Variabel dan Logika C++" << endl;
    cout << "-------------------------------------" << endl;
    do {
        cout << "Program Pertemuan 3 :" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Kasus 1 : Konversi Nilai Ribuan" << endl;
        cout << "2. Kasus 2 : Operator logika Sederhana" << endl;
        cout << "3. Kasus 3 : Tabel Operator Logika" << endl;
        cout << "--------------------------------------" << endl;
        cout << "0. Kembali\n " << endl;
        cout << "Pilih salah satu program : "; cin >> pilihan;
        switch (pilihan){
        case 1 :
            kasus1P3();
            break;
        case 2 :
            kasus2P3();
            break;
        case 3 :
            kasus3P3();
            break;
        default :
            cout << "Tidak Valid input anda.\n" << endl;
        }

    } while (pilihan != 0);
}


