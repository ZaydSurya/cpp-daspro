#include <iostream>
#include "p2.h"
#include "p1.h"
#include <limits>

using namespace std;

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
        char pilihan;
        do {
            cout << "\n------------" << endl;
            cout << "Soal Nomor 1" << endl;
            cout << "------------" << endl;
            cout << "y = a^3 + 7\n" << endl;
            cout << "Masukkan nilai a : "; cin >> a;
            y = (a*a*a) + 7;
            cout << "------------------------------" << endl;
            cout << "Hasil nilai Y adalah : " << y << endl;
            cout << "------------------------------\n" << endl;
            cout << "Apakah kamu ingin mengulanginya lagi ? [y/n] ";cin >> pilihan;
            cout << '\n';
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    auto soal2P2 = [](){
        int y,a,b,c,x;
        char pilihan;
        do {
            cout << "\n------------" << endl;
            cout << "Soal Nomor 2" << endl;
            cout << "------------" << endl;
            cout << "y = ax^2 + bx + c\n" << endl;
            cout << "Masukkan nilai x : "; cin >> x;
            cout << "Masukkan nilai a : "; cin >> a;
            cout << "Masukkan nilai b : "; cin >> b;
            cout << "Masukkan nilai c : "; cin >> c;
            y = a*(x*x) + b*x + c;
            cout << "------------------------------" << endl;
            cout << "Hasil nilai Y adalah : " << y << endl;
            cout << "------------------------------\n" << endl;
            cout << "Apakah kamu ingin mengulanginya lagi ? [y/n] ";cin >> pilihan;
            cout << '\n';
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    int pilihan;
    cout << "Program mencari nilai Y dari Persamaan" << endl;
    cout << "--------------------" << endl;
    cout << "1. y = a^3 + 7" << endl;
    cout << "2. y = ax^2 + bx + c" << endl;
    cout << "--------------------" << endl;
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
            cout << "Tidak Valid\n" << endl;
    }

}

void kasus3P2(){
    double c,f,k,r;
    int pilihan;
    char coba;
    do {
        cout << "---------------------" << endl;
        cout << "Program Konversi Suhu" << endl;
        cout << "---------------------" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cout << "4. Reamur" << endl;
        cout << "------------------" << endl;
        cout << "0. Kembali\n" << endl;
        cout << "Pilih salah satu suhu awal : "; cin >> pilihan;
        cout << '\n';

        if(pilihan == 1){
            cout << "Masukkan nilai Celcius : "; cin >> c;
            cout << "-------------------------" << endl;
            f = (9.0/5.0)*c + 32;
            k = c + 273.15;
            r = (4.0/5.0)*c;

            cout << "Konversi suhu ke Fahrenheit adalah\t: " << f << endl;
            cout << "Konversi suhu ke Kelvin adalah\t\t: " << k << endl;
            cout << "Konversi suhu ke Reamur adalah\t\t: " << r << endl << '\n';
        } else if(pilihan == 2){
            cout << "Masukkan nilai Fahrenheit : "; cin >> f;
            cout << "-------------------------" << endl;
            c = 5.0/9.0*(f-32);
            k = 5.0/9.0*(f-32)+273.15;
            r = 4.0/9.0*(f-32);

            cout << "Konversi suhu ke Celcius adalah\t: " << c << endl;
            cout << "Konversi suhu ke Kelvin adalah\t: " << k << endl;
            cout << "Konversi suhu ke Reamur adalah\t: " << r << endl << '\n';
        } else if(pilihan == 3){
            cout << "Masukkan nilai Kelvin : "; cin >> k;
            cout << "-------------------------" << endl;
            c = k-273.15;
            f = 5.0/9.0*(k-273.15)+32;
            r = 4.0/9.0*(k-273.15);

            cout << "Konversi suhu ke Celcius adalah\t\t: " << c << endl;
            cout << "Konversi suhu ke Fahrenheit adalah\t: " << f << endl;
            cout << "Konversi suhu ke Reamur adalah\t\t: " << r << endl << '\n';
        } else if(pilihan == 4){
            cout << "Masukkan nilai Reamur : "; cin >> r;
            cout << "-------------------------" << endl;
            c = (5.0/4.0)*r;
            f = (9.0/4.0)*r+32;
            k = 5.0/4.0*r+273.15;

            cout << "Konversi suhu ke Celcius adalah\t\t: " << c << endl;
            cout << "Konversi suhu ke Fahrenheit adalah\t: " << f << endl;
            cout << "Konversi suhu ke Kelvin adalah\t\t: " << k << endl << '\n';
        } else {
            cout << "Kamu akan kembali\n" << endl;
        }
        cout << "Apakah ingin melanjutkannya? [y/n] : "; cin >> coba;
        cout << '\n';
    } while ((coba == 'y') || (coba == 'Y'));

}

void sistemP2(){
    int pilihan;
    string nama;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 2 : Tipe Data" << endl;
    cout << "-------------------------------------" << endl;
    do{
        cout << "Program Pertemuan 2" << endl;
        cout << "---------------------------------" << endl;
        cout << "1. Aritmatika dengan Operator" << endl;
        cout << "2. Mencari Nilai Y dari Persamaan" << endl;
        cout << "3. Konversi Suhu Celcius" << endl;
        cout << "---------------------------------" << endl;
        cout << "0. Kembali\n " << endl;
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

