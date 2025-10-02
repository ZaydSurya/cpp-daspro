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
    int pilihan;
    auto soal1P4 = [](){
        float a,hasil;
        cout << "Program Nilai Positif (+) dan Negatif (-)" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Konversikan nilai integer atau angka ke dalam Positif\n" << endl;
        cout << "Masukkan nilai : "; cin >> a;
        if (a<0){
            hasil = a * -1;
            cout << "---JAWABAN---" << endl;
            cout << "Nilai kamu akan dikonversikan ke bilangan positif" << endl;
            cout << "Hasil akhir : " << hasil << endl;
            cout << '\n' << endl;
        } else if (a>=0){
            cout << "Nilai kamu adalah : " << a << " Bilangin ini adalah bernilai positif" << endl;
        } else {
            cout << "Input tidak valid, coba ulangi kembali.\n" << endl;
        }


    };
    cout << "Program Matematika Sederhana :" << endl;
    cout << "------------------------------" << endl;
    cout << "Studi Kasus Kondisi Matematika Sederhana" << endl;
    cout << "1. Nilai Positif atau Negatif" << endl;
    cout << "2. Nilai dari Dua Variabel" << endl;
    cout << "------------------------------" << endl;
    cout << "0. Kembali\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;

    switch(pilihan){
    case 1 :
        soal1P4();
        break;
    default :
        cout << "Input tidak ditemukan atau tidak valid.\n";
    }


}


void sistemP4(){
    int pilihan;
    dataP4();
        do{
            cout << "Program Pertemuan 4 :" << endl;
            cout << "------------------" << endl;
            cout << "1. Kasus 1 : Penilaian Raport Siswa" << endl;
            cout << "2. Kasus 2 : Kondisi Matematika Sederhana" << endl;
            cout << "3. Kasus 3 : Upah Lembur Kayawan" << endl;
            cout << "------------------" << endl;
            cout << "0. Kembali\n " << endl;
            cout << "Pilih salah satu program : "; cin >> pilihan;
            cout << '\n';

            switch (pilihan)
            {
            case 1:
                kasus1P4();
                break;
            case 2:
                kasus2P4();
                break;
            /*case 3:
                kasus3P4();*/
            case 0:
                return;
            default:
                break;
            }

        } while (pilihan != 0);
}
