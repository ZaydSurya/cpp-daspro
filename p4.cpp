#include <iostream>
#include "p4.h"
#include <limits>

using namespace std;

void kasus1P4(){
    int pilihan;
    auto soal1P4 = [](){
        char pilihan;
        double a;
        do {
            cout << "\nProgram Nilai Positif (+) dan Negatif (-)" << endl;
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
            cout << "Apakah kamu ingin mengulangi kembali? [y/n] : "; cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));

    };

    auto soal2P4 = [](){
        double a,b;
        char pilihan;
        do {
            cout << "\nProgram Nilai Variabel" << endl;
            cout << "----------------------" << endl;
            cout << "Masukkan nilai A : "; cin >> a;
            cout << "Masukkan Nilai B : "; cin >> b;

            if(a>b){
                if(a>0){
                cout << "\n------Keterangan------" << endl;
                cout << "Nilai A yaitu " << a << " lebih besar dari nilai B " << b << endl;
                cout << "Nilai A adalah Bilangan Positif\n" << endl;
                } else {
                    cout << "Nilai A lebih besar dari B yaitu " << a << " > " << b << " akan tetapi bernilai Negatif" << endl;
                    a = a*-1;
                    cout << "Nilai A sekarang adalah " << a << ". Sekarang nilainya adalah positif\n" << endl;
                }

            } else if(a<b){
                cout << "\n------Keterangan------" << endl;
                cout << "Nilai B yaitu " << b << " lebih besar dari nilai A " << a << endl;
                cout << "Nilai B adalah Bilangan Positif\n" << endl;
                if (b>0){
                    cout << "Nilai B lebih besar dari A yaitu " << b << " > " << a << " akan tetapi bernilai negatif" << endl;
                    b = b*-1;
                    cout << "Nilai B sekarang adalah " << b << ". Sekarang nilainya adalah positif\n" << endl;
                } else if ((b>0) && (a>0)){
                    cout << "Nilai B lebih besar dari A yaitu " << b << " akan tetapi semua nilai adalah negatif" << endl;
                 }
            } else {
                cout << "Input yang dimasukkan tidak valid\n" << endl;
            }
            cout << "Apakah kamu ingin mengulangi lagi? [y/n] : "; cin >> pilihan;
        } while ((pilihan == 'y') || (pilihan == 'Y'));
    };

    auto soal3P4 = [](){
        string a,b,c,d,e,f,g;
        cout << "\nProgram Relasional Ekspresi" << endl;
        cout << "---------------------------" << endl;
        cout << "Mendeskripsikan hasil Ekspresi" << endl;
        cout << "* 3 < 4" << endl;
        cout << "* 12.5 < 7.5" << endl;
        cout << "* 5 <= 3.14" << endl;
        cout << "* 3 < False" << endl;
        cout << "* True == False" << endl;
        cout << "* True != False" << endl;
        cout << "* 65 != 'A'\n" << endl;

        a = (3<4)?"BENAR":"SALAH";
        cout << "Hasil dari 3 < 4 adalah\t\t: " << a << endl;
        b = (12.5<7.5)?"BENAR":"SALAH";
        cout << "Hasil dari 12.5 < 7.5 adalah\t: " << b << endl;
        c = (5<=3.14)?"BENAR":"SALAH";
        cout << "Hasil dari 5 <= 3.14 adalah\t: " << c << endl;
        d = (3<false)?"BENAR":"SALAH";
        cout << "Hasil dari 3 < False adalah\t: " << d << endl;
        e = (true==false)?"BENAR":"SALAH";
        cout << "Hasil dari True == False adalah\t: " << e << endl;
        f = (true!=false)?"BENAR":"SALAH";
        cout << "Hasil dari True != False adalah\t: " << f << endl;
        g = (65!='A')?"BENAR":"SALAH";
        cout << "Hasil dari 65 != 'A' adalah\t: " << g << endl;

        cout << ""
    };

    cout << "\nProgram Matematika Sederhana :" << endl;
    cout << "------------------------------" << endl;
    cout << "1. Nilai Positif atau Negatif" << endl;
    cout << "2. Nilai dari Dua Variabel" << endl;
    cout << "3. Relasional Ekspresi" << endl;
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
    case 3 :
        soal3P4();
        break;
    default :
        cout << "Input tidak ditemukan atau tidak valid.\n";
        break;
    }
}

void kasus2P4(){
    double nilai;
    char pilihan;
    string nama, nim;
    do {
        cout << "\nProgram Nilai Raport" << endl;
        cout << "--------------------" << endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Nama Lengkap\t: "; getline(cin,nama);
        cout << "NIM\t\t: "; getline(cin,nim);
        cout << "-----------------------------------" << endl;
        cout << "Nilai Akhir\t: "; cin >> nilai;
        if(nilai>60){
            cout << "\n------------------------------------------------------" << endl;
            cout << "Selamat ananda " << nama << " | " << nim << " LULUS, dengan nilai " << nilai << endl;
            cout << "------------------------------------------------------\n" << endl;
        } else if (nilai<=60){
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "Mohon maaf ananda " << nama << " | " << nim << " TIDAK LULUS, dengan nilai " << nilai << endl;
            cout << "------------------------------------------------------------------------------------\n" << endl;
        }
        cout << "Apakah kamu ingin mengulangi nya lagi? [y/n] : "; cin >> pilihan;
    } while ((pilihan == 'y') || (pilihan == 'Y'));

}

void kasus3P4(){
    int jam,upah,reguler, total;
    double over;
    string nama;
    upah = 20000;
    char pilihan;
    do{
        cout << "Program Upah Karyawan" << endl;
        cout << "---------------------" << endl;
        cout << "Informasi Karyawan" << endl;
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
        cout << "Apakah kamu ingin mengulangi nya lagi? [y/n] : "; cin >> pilihan;
    } while ((pilihan == 'y') || (pilihan == 'Y'));
}

void sistemP4(){
    int pilihan;
    cout << "-------------------------------------" << endl;
    cout << "Pertemuan 4 : Analisis Kondisi IF ELSE" << endl;
    cout << "-------------------------------------" << endl;
        do{
            cout << "\nProgram Pertemuan 4 :" << endl;
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
            default:
                break;
            }

        } while (pilihan != 0);
}
