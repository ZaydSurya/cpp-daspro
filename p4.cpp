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
    int pilihan;
    auto soal1P4 = [](){
        double a;
        cout << "Program Nilai Positif (+) dan Negatif (-)" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Konversikan nilai integer atau angka ke dalam Positif\n" << endl;
        cout << "Masukkan nilai : "; cin >> a;
        if (a<0){
            a = a * -1;
            cout << "---JAWABAN---" << endl;
            cout << "Nilai kamu akan dikonversikan ke bilangan positif" << endl;
            cout << "Hasil akhir : " << a << endl;
            cout << '\n' << endl;
        } else if (a>=0){
            cout << "Nilai kamu adalah : " << a << " Bilangin ini adalah bernilai positif" << endl;
        } else {
            cout << "Input tidak valid, coba ulangi kembali.\n" << endl;
        }
    };

    auto soal2P4 = [](){
        double a,b;
        cout << "Program Nilai Variabel" << endl;
        cout << "----------------------" << endl;
        cout << "Masukkan nilai A : "; cin >> a;
        cout << "Masukkan Nilai B : "; cin >> b;

        if(a>b){
            if(a>0){
            cout << "/n------Keterangan------" << endl;
            cout << "Nilai A atau " << a << " lebih besar dari nilai B" << endl;
            cout << "Nilai A adalah Bilangan Positif\n" << endl;
            } else {
                cout << "Nilai A lebih besar dari B yaitu " << a << " akan tetapi bernilai Negatif" << endl;
                a = a*-1;
                cout << "Nilai A sekarang adalah " << a << ". Sekarang nilainya adalah positif\n" << endl;
            }

        } else {
            cout << "/n------Keterangan------" << endl;
            cout << "Nilai B atau " << b << " lebih besar dari nilai A" << endl;
            cout << "Nilai B adalah Bilangan Positif\n" << endl;
        }
    };

    cout << "Program Matematika Sederhana :" << endl;
    cout << "------------------------------" << endl;
    cout << "Studi Kasus Kondisi Matematika Sederhana" << endl;
    cout << "1. Nilai Positif atau Negatif" << endl;
    cout << "2. Nilai dari Dua Variabel" << endl;
    cout << "3. Membalikan Nilai [Belum Ada]" << endl;
    cout << "------------------------------" << endl;
    cout << "0. Kembali\n" << endl;
    cout << "Pilih salah satu program : "; cin >> pilihan;

    switch(pilihan){
    case 1 :
        soal1P4();
        break;
    case 2 :
        soal2P4();
        break;
    default :
        cout << "Input tidak ditemukan atau tidak valid.\n";
    }
}

void kasus2P4(){
    double mtk,ipa,desain,indo,inggris,daspro;
    string nama, nim;
    cout << "Program Nilai Raport" << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Nama Lengkap\t: "; getline(cin,nama);
    cout << "NIM\t\t: "; getline(cin,nim);
    cout << "-----------------------------------" << endl;
    cout << "1. Dasar Pemrograman\t\t: "; cin >> daspro;
    cout << "2. Matematika\t\t\t: "; cin >> mtk;
    cout << "3. Ilmu Pengetahuan Alam\t: "; cin >> ipa;
    cout << "4. Desain Grafis\t\t: "; cin >> desain;
    cout << "5. Bahasa Indonesia\t\t: "; cin >> indo;
    cout << "6. Bahasa Inggris\t\t: "; cin >> inggris;
}

void kasus3P4(){
    int jam,upah,reguler, total;
    double over;
    string nama;
    upah = 20000;

    cout << "Program Upah Karyawan" << endl;
    cout << "---------------------" << endl;
    cout << "PT Indonesia Emas" << endl;
    cout << "Perusahaan yang berfokus dibidang teknologi dan infrastruktur Indonesia\n" << endl;

    cout << "Informasi Karyawan" << endl;
    cout << "------------------" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nama Karyawan\t: "; getline(cin, nama);
    cout << "Jam Kerja\t: "; cin >> jam;

    reguler = upah * jam;

    if(jam >= 30) {
        over = (jam-30) * upah * (30.0/100.0);
    } else {
        over = upah * (20.0/100.0);
    }

    total = reguler+over;

    cout << "\n--------------------------------------------" << endl;
    cout << "Nama Karyawan\t: " << nama << endl;
    cout << "Jam Kerja\t: " << jam << " Jam" << endl;
    cout << "Upah Kerja selama " << jam << " jam, adalah Rp." << total << endl;
    cout << "--------------------------------------------\n" << endl;
}

void sistemP4(){
    int pilihan;
    dataP4();
        do{
            cout << "Program Pertemuan 4 :" << endl;
            cout << "------------------" << endl;
            cout << "1. Kasus 1 : Kondisi Matematika Sederhana" << endl;
            cout << "2. Kasus 2 : Penilaian Raport Siswa" << endl;
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
            case 3:
                kasus3P4();
            case 0:
                return;
            default:
                break;
            }

        } while (pilihan != 0);
}
