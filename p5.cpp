#include <iostream>
#include "p5.h"
#include <limits>

using namespace std;

void kasus1P5(){
    int pilihan;

    auto soal1P5 = [](){
        int nilai;
        char pilihan;
        cout << "/nProgram Konversi Nilai" << endl;
        cout << "------------------------" << endl;
        do{
            cout << "Tabel Ranking Nilai" << endl;
            cout << "-------------------------------" << endl;
            cout << "| Range Nilai  |  Nilai Huruf |" << endl;
            cout << "-------------------------------" << endl;
            cout << "|     =>85     |      A       |" << endl;
            cout << "|  =>80 - <85  |      AB      |" << endl;
            cout << "|  =>70 - <80  |      B       |" << endl;
            cout << "|  =>65 - <70  |      BC      |" << endl;
            cout << "|  =>60 - <65  |      C       |" << endl;
            cout << "|  =>50 - <60  |      D       |" << endl;
            cout << "|  =>0 - <50   |      E       |" << endl;
            cout << "-------------------------------" << endl;

            cout << "Masukkan Nilai anda : "; cin >> nilai;
            if(nilai>=85){
                cout << "Nilai anda adalah A, Pertahankan Nilaimu!\n" << endl;
            } else if((nilai<85)&&(nilai>=80)){
                cout << "Nilai anda adalah AB, Luar biasa!\n" << endl;
            } else if((nilai<80)&&(nilai>=70)){
                cout << "Nilai anda adalah B, Tetap Semangat!\n" << endl;
            } else if((nilai<70)&&(nilai>=65)){
                cout << "Nilai anda adalah BC, Bisa Naik kok!\n" << endl;
            } else if((nilai<65)&&(nilai>=60)){
                cout << "Nilai anda adalah C, Kok turun sih!\n" << endl;
            } else if((nilai<60)&&(nilai>=50)){
                cout << "Nilai anda adalah D, Sayang sekali!\n" << endl;
            } else {
                cout << "Nilai anda adalah E, Anda gagal :(\n" << endl;
            }
            cout << "Apakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
        } while ((pilihan == 'y')|| (pilihan == 'Y'));
    };

    auto soal2P5 = [](){
        char pilihan;
        int nilai,temp;
        cout << "\nProgram Must be 10" << endl;
        cout << "--------------------" << endl;
        do {
            cout << "Masukkan Nilai Anda\t: "; cin >> nilai;
            cout << "-----------------------" << endl;
            if(nilai>10){
                cout << " ---- KETERANGAN ---- " << endl;
                cout << "Nilai\t\t: LEBIH DARI 10" << endl;
                temp = nilai - 10;
                cout << "Aksi\t\t: KURANGI " << temp << "!" << endl;
                cout << "Tindakan\t: "; cin >> temp;
                nilai = nilai - temp;
                cout << "Hasil\t\t: NILAI " << nilai << endl;
            } else if(nilai<10){
                cout << " ---- KETERANGAN ---- " << endl;
                cout << "Nilai\t\t: KURANG DARI 10" << endl;
                temp = 10 - nilai;
                cout << "Aksi\t\t: KURANGI " << temp << "!" << endl;
                cout << "Tindakan\t: "; cin >> temp;
                nilai = nilai + temp;
                cout << "Hasil\t\t: " << nilai << endl;
            } else {
                cout << "Nilai anda sudah 10/n" << endl;
            }
            cout << "\nApakah ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
            cout << '\n';
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    auto soal3P5 = [](){
        int nilai;
        char pilihan;
        do {
            cout << "\nProgram Positive, Negative, Odd or Even" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Masukkan Nilai anda : "; cin >> nilai;
            if((nilai%2) == 0){
                if(nilai<0){
                    cout << "\nNilai anda " << nilai << " adalah Negatif," << endl << "Nilai anda Genap\n";
                } else {
                     cout << "\nNilai anda " << nilai << " adalah Positif," << endl << "Nilai anda Genap\n";
                }
            } else {
                if(nilai<0){
                    cout << "\nNilai anda " << nilai << " adalah Negatif," << endl << "Nilai anda Ganjil\n";
                } else {
                     cout << "\nNilai anda " << nilai << " adalah Positif," << endl << "Nilai anda Ganjil\n";
                }
            }
            cout << "Apakah kamu ingin mengulanginya? [y/n] : "; cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    cout << "\nProgram Nilai" << endl;
    cout << "-------------" << endl;
    cout << "1. Konversi Nilai" << endl;
    cout << "2. Must be 10" << endl;
    cout << "3. Nilai Genap & Ganjil\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;
    switch (pilihan){
        case 1 :
            soal1P5();
            break;
        case 2 :
            soal2P5();
            break;
        case 3 :
            soal3P5();
            break;
        default :
            break;
    }
}


void sistemP5(){
    int pilihan;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 5 : Analisis Kondisi Advanced" << endl;
    cout << "-------------------------------------" << endl;
        do{
            cout << "\nProgram Pertemuan 5 :" << endl;
            cout << "------------------" << endl;
            cout << "1. Kasus 1 : Konversi & Keterangan Nilai" << endl;
            cout << "2. Kasus 2 : Biaya Parkir" << endl;
            cout << "3. Kasus 3 : Diskon Produk" << endl;
            cout << "------------------" << endl;
            cout << "0. Kembali\n " << endl;
            cout << "Pilih salah satu program : "; cin >> pilihan;
            cout << '\n';

            switch (pilihan)
            {
            case 1:
                kasus1P5();
                break;
            /* case 2:
                kasus2P5();
                break;
            case 3:
                kasus3P5(); */
            default:
                break;
            }

        } while (pilihan != 0);
}
