#include <iostream>
#include "p2.h"
#include "p1.h"
#include <limits>

using namespace std;

void dataP2(){
    string nama;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 2 : Tipe Data" << endl;
    cout << "-------------------------------------\n" << endl;

}

void kasus1P2(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double a,b;
    a = 10;
    b = 5;
    cout << "Nilai a :" << a << endl;
    cout << "Nilai b :" << b << endl;
    cout << "Hasil dari operator ( + - * / ) adalah :" << endl;
    cout << "----------------------------------------" << endl;;
    cout << "Hasil a + b adalah " << a + b << endl;
    cout << "Hasil a - b adalah " << a - b << endl;
    cout << "Hasil a * b adalah " << a * b << endl;
    cout << "Hasil a / b adalah " << a / b << endl;
}

void kasus2P2(){
    cout << "Hello World";
}

void kasus3P2(){
    cout << "Hello World";
}

void sistemP2(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int pilihan;
    string nama;

    dataP2();
    cout << "Masukkan nama kamu : "; getline(cin, nama);
    cout << "Hi, " << nama << '\n' << endl;
    do{
        cout << "Program Python 1" << endl;
        cout << "----------------" << endl;
        cout << "1. Kasus 1 : Aritmatika Variabel Tetap" << endl;
        cout << "2. Kasus 2 : Aritmatika Variabel Input" << endl;
        cout << "3. Kasus 3 : Konversi Suhu Celcius\n" << endl;
        cout << "Pilih salah satu kasus : "; cin >> pilihan;

        switch(pilihan){
            case 1:
                kasus1P2();
                break;
            case 2:
                kasus2P2();
                break;
            case 3:
                kasus3P2();
                break;
            default:
                cout << "Input tidak valid, Program akan diulang\n" << endl;
        }
    }while (pilihan != 0);
}

