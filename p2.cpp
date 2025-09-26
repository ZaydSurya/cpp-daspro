#include <iostream>
#include "p2.h"
#include "p1.h"
#include <limits>

using namespace std;

void dataP2(){
    string nama;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 2 : Tipe Data" << endl;
    cout << "-------------------------------------" << endl;

}

void kasus1P2(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double a,b;
    char pilihan;
    string operasi;

    do {
        cout << "Program Aritmatika Sederhana" << endl;
        cout << "Masukkan bilangan pertama (a)\t: "; cin >> a;
        cout << "Masukkan Operator [ + - * / ]\t: "; cin >> operasi;
        cout << "Masukkan bilangan pertama (b)\t: "; cin >> b;

        if (operasi == "+"){
            cout << "Hasil dari " << a << " + " << b << " adalah\t: " << a + b << endl << '\n';
        } else if(operasi == "-"){
            cout << "Hasil dari " << a << " - " << b << " adalah\t: " << a - b << endl << '\n';
        } else if(operasi == "*"){
            cout << "Hasil dari " << a << " * " << b << " adalah\t: " << a * b << endl << '\n';
        } else if (operasi == "/"){
            if (b != 0){
                cout << "Hasil dari " << a << " / " << b << " adalah\t: " << a / b << endl << '\n';
            } else {
                cout << "Dilarang menggunakan Operasi Pembagian 0" << endl;
            }
        } else {
            cout << "Input tidak valid. Coba ulangi\n" << endl;
            continue;
        }
        cout << "Apakah ingin mengulangi program? [y/n] : "; cin >> pilihan;
    } while (pilihan == 'y');



}

void kasus2P2(){

    auto soal1P2 = [](){
        int y, a;
        cout << "Menyelesaikan soal Nomor 1" << endl;
        cout << "y = a^3 + 7" << endl << '\n';
        cout << "Masukkan nilai a : "; cin >> a;
        cout << '\n';

        y = (a*a*a) + 7;

        cout << "Hasil dari soal nomor 1 adalah : " << y << endl << '\n';
    };

    auto soal2P2 = [](){
        int y,a,b,c,x;
        cout << "Menyelesaikan soal Nomor 2" << endl;
        cout << "y = ax^2 + bx + c" << endl;
        cout << "Masukkan nilai x : "; cin >> x;
        cout << "Masukkan nilai a : "; cin >> a;
        cout << "Masukkan nilai b : "; cin >> b;
        cout << "Masukkan nilai c : "; cin >> c;
        cout << '\n';

        y = a*(x*x) + b*x + c;

        cout << "Hasil dari soal nomor 2 adalah : " << y << endl << '\n';
    };

    int pilihan;
    cout << "Program mencari nilai Y dari Persamaan" << endl;
    cout << "1. y = a^3 + 7" << endl;
    cout << "2. y = ax^2 + bx + c" << endl;
    cout << "Pilih salah satu soal untuk diselesaikan : "; cin >> pilihan;
    cout << '\n';

    switch (pilihan){
    case 1:
        soal1P2();
        break;
    case 2 :
        soal2P2();
        break;
    default :
        cout << "Tidak Valid";
    }

}

void kasus3P2(){
    cout << "Hello World";
}

void sistemP2(){
    int pilihan;
    string nama;
    dataP2();
    do{
        cout << "Program Pertemuan 2" << endl;
        cout << "-------------------" << endl;
        cout << "1. Kasus 1 : Aritmatika dengan Operator" << endl;
        cout << "2. Kasus 2 : Mencari Nilai Y dari Persamaan" << endl;
        cout << "3. Kasus 3 : Konversi Suhu Celcius\n" << endl;
        cout << "Pilih salah satu kasus : "; cin >> pilihan;
        cout << '\n';

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

