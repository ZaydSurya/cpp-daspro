#include <iostream>
#include <limits>
#include "simulasi.h"

using namespace std;

void soal1(){
    char merk, motor, eksekusi, restart;
    int total, kembalian, nominal;
    int harga;
    do{
        cout << "\nStudi Kasus 1 | Dealer Motor Indonesia" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Cari motor baru dengan harga terbaik? Di Motor Gemilang, semua bisa! Mulai dari motor irit sampai yang penuh gaya — semua siap jalan bersama Anda!\n" << endl;
        cout << "Mau cari motor apa nih, Yamaha? atau Honda? [Y/y | H/h] : "; cin >> motor;
        if((motor == 'H') || (motor == 'h')){
            cout << "\nList Motor Honda di Motor Gemilang" << endl;
            cout << "1. Supra X 125 [S/s]" << endl;
            cout << "2. Megapro [M/m]" << endl;
            cout << "3. Tiger [T/t]\n" << endl;
            cout << "Apa yang kamu ingin lihat : "; cin >> merk;
            if((merk == 'S') || (merk == 's')){
                total = 15000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Supra X 125" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Supra X 125]\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else if((merk == 'M') || (merk == 'm')){
                total = 18000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Megapro" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Megapro]\t\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else if ((merk == 'T') || (merk == 't')){
                total = 25000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Tiger" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Tiger]\t\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else {
                total = 0;
                cout << "-----------------------------" << endl;
                cout << "Tidak ada di daftar" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                cout << endl;
                cout << "Harga [Tidak ada]\t: Rp. " << total << endl;
                cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                cout << "--------------------------------------------" << endl;
                cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                do{
                    cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                    if(nominal<total){
                        cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                    } else {
                        cout << "Kembalian\t: Rp. " << (kembalian = nominal-total) << endl;
                    }
                }while(nominal<total);
            }
        } else if((motor == 'Y') || (motor == 'y')){
            cout << "List Motor Yamaha di Motor Gemilang" << endl;
            cout << "1. Jupiter [J/j]" << endl;
            cout << "2. Mio [M/m]" << endl;
            cout << "3. Vixion [V/v]\n" << endl;
            cout << "Apa yang kamu ingin lihat : "; cin >> merk;
           if((merk == 'J') || (merk == 'j')){
                total = 17000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Jupiter" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Jupiter]\t\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else if((merk == 'M') || (merk == 'm')){
                total = 13000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Mio" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Mio]\t\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else if ((merk == 'V') || (merk == 'v')){
                total = 22000000;
                cout << "-----------------------------" << endl;
                cout << "Motor Vixion" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                if(eksekusi == 'n'){
                    continue;
                } else {
                    cout << endl;
                    cout << "Harga [Vixion]\t\t: Rp. " << total << endl;
                    cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                    cout << "--------------------------------------------" << endl;
                    cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                    do{
                        cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                        if(nominal<total){
                            cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                        } else {
                            cout << "Kembalian\t\t: Rp. " << (kembalian = nominal-total) << endl;
                        }
                    }while(nominal<total);
                }
            } else {
                total = 0;
                cout << "-----------------------------" << endl;
                cout << "Tidak ada di daftar" << endl;
                cout << "Rp. " << total << endl;
                cout << "-----------------------------" << endl;
                cout << "Apakah kamu tertarik [y/n] : "; cin >> eksekusi;
                cout << endl;
                cout << "Harga [Tidak ada]\t: Rp. " << total << endl;
                cout << "Pajak 10%\t\t: Rp. " << (harga = total * (10.0/100.0)) << endl;
                cout << "--------------------------------------------" << endl;
                cout << "Total Pembayaran\t: Rp. " << (total = total + harga) << endl;
                do{
                    cout << "\nMasukkan nominal kamu\t: Rp. "; cin >> nominal;
                    if(nominal<total){
                        cout << "Uang tidak cukup!\t: Rp. " << (total-nominal) << endl;
                    } else {
                        cout << "Kembalian\t: Rp. " << (kembalian = nominal-total) << endl;
                    }
                }while(nominal<total);
            }
        } else {
            cout << "Inputan Salah" << endl;
        }
        cout << "Apakah kamu ingin membeli motor lain [y/n] : "; cin >> restart;
    }while((restart == 'y') || (restart == 'Y'));
}


void soal2(){
    cout << "Studi Kasus 2 | Piramida Menurun" << endl;
    cout << "--------------------------------" << endl;
    cout << "Piramida 1" << endl;
    cout << "-------------------" << endl;
    for(int i=5; i>=1; i--){
        for(int j=5; j>=i; j--){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Piramida 2" << endl;
    cout << "-------------------" << endl;
    for(int i=3; i>=1; i--){
        for(int j=3; j>=i; j--){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Piramida 3" << endl;
    cout << "-------------------" << endl;
    for(int i=2; i>=1; i--){
        for(int j=2; j>=i; j--){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void simulasi(){
    int pilihan;
    cout << "Latihan UTS - Simulasi UTS Daspro C++" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Program Dealer Motor Indonesia" << endl;
    cout << "2. Program Piramida Menurun\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;
    switch(pilihan){
        case 1:
        soal1();
        break;
        case 2 :
        soal2();
        break;
        default :
        break;
    }
}
