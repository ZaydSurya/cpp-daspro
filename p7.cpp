#include <iostream>
#include <limits>
#include "p7.h"

using namespace std;

void kasus1P7(){
    int a,b,angka,minn = 1000000, maxx=0;
    int pilihan;
    auto soal1P7 = [&](){
        cout << "\nKasus 1 Deret Faktorial" << endl;
        cout << "-----------------------" << endl;
        cout << "Masukkan nilai : "; cin >> a;
        angka = 1;
        for(int i=1; i<=a; i++){
            angka = angka * i;
        }
        cout << "Hasil dari faktorial " << a << " adalah " << angka << endl;
    };

     auto soal2P7 = [&](){
        cout << "\nKasus 2 Find the Smallest / Largest" << endl;
        cout << "--------------------------------------" << endl;
        for(int i=1; i<=6; i++){
            cout << "Nilai ke-" << i << " : "; cin >> angka;
            if(angka < minn){
                minn = angka;
            }
            if(angka>maxx){
                maxx = angka;
            }
        }
        cout << "--------------------------------------" << endl;
        cout << "Bilangan terbesar adalah : " << maxx << endl;
        cout << "Bilangan terkecil adalah : " << minn << endl;
        cout << "--------------------------------------" << endl;
    };

    auto soal3P7 = [&](){
        cout << "\nKasus 2 Deret Ganjil Genap" << endl;
        cout << "-----------------------------" << endl;
        cout << "Input A : "; cin >> a;
        cout << "Input B : "; cin >> b;
        cout << "-----------------------------" << endl;
        cout << "Deret Bilangan Genap\t: ";
        for(int i=1+a; i<=b; i++){
            if((i%2)==0){
                cout << i << " ";
            }
        }
        cout << "\nDeret Bilangan Ganjil\t: ";
        for(int i=1+a; i<=b; i++){
            if((i%2)!=0){
                cout << i << " ";
            }
        }
        cout << "\n-----------------------------\n" << endl;
    };

    cout << "\nDeret Matematika Advanced" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Deret Faktorial" << endl;
    cout << "2. Find The Smallest / Largest" << endl;
    cout << "3. Deret Ganjil & Genap\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;
    switch(pilihan){
        case 1:
            soal1P7();
            break;
        case 2:
            soal2P7();
            break;
        case 3:
            soal3P7();
            break;
        default:
            break;
    }
}

void kasus2P7(){
    auto soal1P7 = [](){
        cout << "\nDeret Modifikasi 5" << endl;
        cout << "------------------" << endl;
        cout << "Deret 1-50 habis dibagi oleh 5 adalah : ";
        for(int i=1; i<=50; i++){
            if((i%5)==0){
                cout << i << " ";
            }
        }
        cout << '\n';
    };

    auto soal2P7 = [](){
        cout << "\nModifikasi Kasus 4" << endl;
        cout << "--------------------" << endl;
        cout << "Deret 50-101 habis dibagi oleh 5 atau 7 adalah\n";
        for(int i=50; i<=101; i++){
            if(((i%5)==0) || ((i%7)==0)){
                cout << i << " ";
            }
        }
        cout << '\n';
    };
    soal1P7();
    soal2P7();
}

void kasus3P7(){
    auto soal1P7 = [](){
        cout << "\nNested For" << endl;
        cout << "------------" << endl;
        for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++){
                cout << j << " ";
            }
            cout << endl;
        }
    };

    auto soal2P7 = [](){
        cout << "\nNested For - Menurun" << endl;
        cout << "----------------------" << endl;
        for(int i=5; i>=1; i--){
            for(int j=5; j>=i; j--){
                cout << j << " ";
            }
            cout << endl;
        }
    };

    auto soal3P7 = [](){
        cout << "\nNested Loop Star" << endl;
        cout << "------------------" << endl;
        for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            cout << endl;
        }
    };

    auto soal4P7 = [](){
        cout << "\nNested Loop Star" << endl;
        cout << "------------------" << endl;
        for(int i=1; i<=5; i++){
            for(int j=i; j<=5; j++){
                cout << "* ";
            }
            cout << endl;
        }
    };

    auto soal5P7 = [](){
        cout << "\nNested Loop Star - V2" << endl;
        cout << "-----------------------" << endl;
        for(int i=1; i<=5; i++){
            for(int j=i; j<=5; j++){
                cout << "  ";
            }
            for(int j=1; j<i; j++){
                cout << "* ";
            }
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            cout << endl;
        }
    };
    soal1P7();
    soal2P7();
    soal3P7();
    soal4P7();
    soal5P7();
}

void sistemP7(){
    int pilihan;
    cout << "Program Nested Looping" << endl;
    cout << "----------------------" << endl;
    cout << "1. Deret Matematika Advanced" << endl;
    cout << "2. Deret Matematika Modifikasi" << endl;
    cout << "3. Nested Looping Matematika\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;
    switch(pilihan){
        case 1:
            kasus1P7();
            break;
        case 2:
            kasus2P7();
            break;
        case 3:
            kasus3P7();
            break;
        default:
            break;
    }
}
