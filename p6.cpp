#include <iostream>
#include "p6.h"
#include <limits>

using namespace std;

void kasus1P6(){
    int a;
    char pilihan;
    string kalimat;
    do {
        cout << "\nProgram Perulangan atau Looping" << endl;
        cout << "-------------------------------" << endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Silahkan tulis apapun disini\t: "; getline(cin,kalimat);
        cout << "Mau Looping berapa kali?\t: "; cin >> a;
        cout << "-------------LOOPING-------------" << endl;
        for(int i = 1; i<=a; i++){
            cout << kalimat << " | Loop ke - " << i << endl;
        }
        cout << "---------------------------------\n" << endl;
        cout << "Apakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
    } while ((pilihan == 'y') || (pilihan == 'Y'));

};

void kasus2P6(){
    char pilihan;
    int a,b,c;
    do {
        cout << "\nProgram Perulangan Deeret Matematika" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Masukkan nilai a (Nilai Awal)\t: "; cin >> a;
        cout << "Masukkan nilai b (Nilai Akhir)\t: "; cin >> b;
        cout << "Masukkan nilai c (Increment)\t: "; cin >> c;
        cout << '\n';
        cout << "Deret Matamatika Naik" << endl;
        cout << "---------------------" << endl;
        for(int i=a; i<=b; i+=c){
            cout << i << " ";
        }
        cout << '\n' << endl;
        cout << "Deret Matamatika Menurun" << endl;
        cout << "------------------------" << endl;
        for (int i=b; i>=a; i-=c){
            cout << i << " ";
        }

        cout << "\nApakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
    } while((pilihan == 'y') || (pilihan == 'Y'));
}

void kasus3P6(){
    char pilihan;
    int maxx=0,minn=10000,a,angka;
    double avg, sum=0;
    do{
        cout << "\nProgram Perulangan Deret Modifikasi" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Mau berapa kali Looping? : "; cin >> a;
        if (a>20){
            cout << "Terlalu kebanyakan looping " << a << " kali\n" << endl;
        } else {
            for (int i = 1; i<=a; i++){
                cout << "Masukkan nilai ke-" << i << " : "; cin >> angka;
                if(angka<minn){
                    minn = angka;
                }
                if(angka>maxx){
                    maxx = angka;
                }
                sum = sum + angka;
            }
            cout << "--------------------------------------" << endl;
            cout << "Bilangan Terkecil adalah\t: " << minn << endl;
            cout << "Bilangan Terbesar adalah\t: " << maxx << endl;
            cout << "Penjumlahan\t\t\t: " << sum << endl;
            avg = sum/a;
            cout << "Rata-rata\t\t\t: " << avg << endl;
            cout << '\n';
        }
        cout << "Apakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
        cout << '\n';
    } while((pilihan == 'y')||(pilihan == 'Y'));
}

void sistemP6(){
    int pilihan;
    cout << "\n----------------------------------" << endl;
    cout << "Pertemuan 6 : Looping For While Do" << endl;
    cout << "----------------------------------" << endl;
        do{
            cout << "Program Pertemuan 6 :" << endl;
            cout << "------------------------------------------" << endl;
            cout << "1. Kasus 1 : Perulangan atau Looping Dasar" << endl;
            cout << "2. Kasus 2 : Perulangan Deret" << endl;
            cout << "3. Kasus 3 : Perulangan Deret Modifikasi" << endl;
            cout << "------------------------------------------" << endl;
            cout << "0. Kembali\n " << endl;
            cout << "Pilih salah satu program : "; cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                kasus1P6();
                break;
            case 2:
                kasus2P6();
                break;
            case 3:
                kasus3P6();
                break;
            default:
                break;
            }

        } while (pilihan != 0);
}
