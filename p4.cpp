#include <iostream>
#include "p4.h"
#include <limits>

using namespace std;

void dataP4(){
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 4 : Analisis Kondisi IF ELSE" << endl;
    cout << "-------------------------------------" << endl;
}

void kasus1P4(){

    cout << "Hello World" << endl;

}

void kasus2P4(){

    auto soal1P4[](){

    }

    int
    cout << "Program Python 4 :" << endl;
    cout << "------------------" << endl;
    cout << "Studi Kasus Kondisi Matematika Sederhana" << endl;
    cout << "1. Nilai Positif atau Negatif ?" << endl;
    cout << "2. Nilai dari Dua Variabel" << endl;


}


void sistemP4(){
    int pilihan;
    dataP4();
        do{
            cout << "Program Python 4 :" << endl;
            cout << "------------------" << endl;
            cout << "1. Kasus 1 : Penilaian Raport Siswa" << endl;
            cout << "2. Kasus 2 : Kondisi Matematika Sederhana" << endl;
            cout << "3. Kasus 3 : Upah Lembur Kayawan" << endl;
            cout << "0. Kembali\n " << endl;
            cout << "Pilih salah satu program : "; cin >> pilihan;
            cout << '\n';

            switch (pilihan)
            {
            case 1:
                kasus1P4();
                break;
            case 0:
                return;
            default:
                break;
            }

        } while (pilihan != 0);
}
