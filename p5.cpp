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
                cout << "------ KETERANGAN ------" << endl;
                cout << "Nilai\t\t: LEBIH DARI 10" << endl;
                temp = nilai - 10;
                cout << "Aksi\t\t: KURANGI " << temp << "!" << endl;
                cout << "Tindakan\t: "; cin >> temp;
                nilai = nilai - temp;
                cout << "Hasil\t\t: NILAI " << nilai << endl;
            } else if(nilai<10){
                cout << "------ KETERANGAN ------" << endl;
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
            } else if (nilai == 0) {
                cout << "\nNilai anda " << nilai << "ZERO\n" << endl;
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
    cout << "-----------------------" << endl;
    cout << "1. Konversi Nilai" << endl;
    cout << "2. Must be 10" << endl;
    cout << "3. Nilai Genap & Ganjil" << endl;
    cout << "-----------------------\n" << endl;
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

void kasus2P5(){
    double jam, total;
    int kendaraan;
    char pilihan;
    cout << "\n--------------------" << endl;
    cout << "Program Biaya Parkir" << endl;
    cout << "--------------------" << endl;
    do {
        cout << "List Biaya Parkir" << endl;
        cout << "1. Motor/Sepeda/Tossa\t: Rp. 3.000/Jam" << endl;
        cout << "2. Mobil\t\t: Rp. 5.000/Jam" << endl;
        cout << "3. Mini Truck/Truck/Bus\t: Rp. 15.000/Jam" << endl;
        cout << "\nKendaraan yang digunakan? [1/2/3] "; cin >> kendaraan;
        cout << "Durasi Parkir? [Jam] "; cin >> jam;
        cout << "\n-----------------------------------" << endl;
        if(kendaraan == 1){
            if(jam>12){
                total = 50000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Menginap\n";
            } else {
                total = jam*3000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Reguler\n";
            }
        } else if (kendaraan == 2){
            if(jam>12){
                total = 120000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Menginap\n";
            } else {
                total = jam*5000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Reguler\n";
            }
        } else if (kendaraan == 3){
            if(jam>8){
                total = 250000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Menginap\n";
            } else {
                total = jam*25000;
                cout << "Biaya parkir kendaraan anda adalah " << total << endl << "Kelompok Biaya\t: Reguler\n";
            }
        }
        cout << "Apakah ingin mengulanginya lagi? [y/n] : "; cin >> pilihan;
    } while ((pilihan == 'y') || (pilihan == 'Y'));
}

void kasus3P5(){
    int qty,beli,total,potongan,harga,diskon;
    char lagi;
    string nama;

    auto soal1P5 = [&](){
        do{
            cout << "\nToko Baba Slamet | Toko Peralatan Komputer" << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "~. Motherboard AsRock H370m\t\t: Rp. 805.000" << endl;
            cout << "~. Processor Intel Core i3 10100f\t: Rp. 790.000" << endl;
            cout << "~. Mau cari barang sendiri? Bisaa . . ." << endl;
            cout << "------------------------------------------------------" << endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Mau beli apa\t: "; getline(cin, nama);
            if((nama == "Motherboard AsRock H370m") || (nama == "motherboard asrock h370m") || (nama == "Motherboard Asrock H370m") || (nama == "Motherboard Asrock h370m")){
            cout << "Beli berapa\t: "; cin >> qty;
                if((qty>=3) && (qty<=5)){
                    total = 805000*qty;
                    diskon = total * (2.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 2% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "805000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=6) && (qty<=10)){
                    total = 805000*qty;
                    diskon = total * (5.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 5% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "805000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=11) && (qty<=17)){
                    total = 805000*qty;
                    diskon = total * (10.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 10% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "805000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if (qty>=18){
                    total = 805000*qty;
                    diskon = total * (20.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 20% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "805000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else {
                    total = 805000*qty;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "805000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                }
            } else if ((nama == "Processor Intel Core i3 10100f") || (nama == "processor intel core i3 10100f") || (nama == "Intel core i3 10100f") || (nama == "Intel Core i3 10100f")){
                cout << "Beli berapa\t: "; cin >> qty;
                if((qty>=3) && (qty<=5)){
                    total = 790000*qty;
                    diskon = total * (2.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 2% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "790000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=6) && (qty<=10)){
                    total = 790000*qty;
                    diskon = total * (5.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 5% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "790000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=11) && (qty<=17)){
                    total = 790000*qty;
                    diskon = total * (10.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 10% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "790000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if (qty>=18){
                    total = 790000*qty;
                    diskon = total * (20.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 20% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "790000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else {
                    total = 790000*qty;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << "790000" << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                }
            } else {
                cout << "Harga berapa\t: "; cin >> harga;
                cout << "Beli berapa\t: "; cin >> qty;
                if((qty>=3) && (qty<=5)){
                    total = harga*qty;
                    diskon = total * (2.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 2% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << harga << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=6) && (qty<=10)){
                    total = harga*qty;
                    diskon = total * (5.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 5% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << harga << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=11) && (qty<=17)){
                    total = harga*qty;
                    diskon = total * (10.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 10% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << harga << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if (qty>=18){
                    total = harga*qty;
                    diskon = total * (20.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 20% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << harga << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else {
                    total = harga*qty;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: " << nama << endl;
                    cout << "Harga Normal\t: " << harga << endl;
                    cout << "Pembelian\t: " << qty << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                }
            }
            cout << "\nApakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> lagi;
            cout << '\n';
        } while ((lagi == 'y') || (lagi == 'Y'));
    };
    auto soal2P5 = [&](){
        do {
            cout << "\nToko Baba Slamet | Toko Peralatan Alat Tulis" << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "1. Kertas PAPER A4 80gram\t\t: Rp. 55.000" << endl;
            cout << "2. Tinta Warna Printer EPSON INKQ\t: Rp. 125.0000" << endl;
            cout << "3. Flashdisk 64GB FLASHDRIVE\t\t: Rp. 180.000" << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "Mau beli apa [1/2/3]\t: "; cin >> beli;
            cout << "Beli berapa pcs\t\t: "; cin >> qty;
            if(beli == 1){
                if((qty>=3) && (qty<=5)){
                    total = 55000*qty;
                    diskon = total * (5.0/100.0);
                    cout << "\n------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 5% |" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Nama Barang\t: Kertas PAPER A4 80gram" << endl;
                    cout << "Harga Normal\t: " << "55000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=6) && (qty<=10)){
                    total = 55000*qty;
                    diskon = total * (10.0/100.0);
                    cout << "\n-------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 10% |" << endl;
                    cout << "-------------------------------" << endl;
                    cout << "Nama Barang\t: Kertas PAPER A4 80gram" << endl;
                    cout << "Harga Normal\t: " << "55000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if ((qty>=11) && (qty<=15)){
                    total = 55000*qty;
                    diskon = total * (15.0/100.0);
                    cout << "\n-------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 15% |" << endl;
                    cout << "-------------------------------" << endl;
                    cout << "Nama Barang\t: Kertas PAPER A4 80gram" << endl;
                    cout << "Harga Normal\t: " << "55000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if (qty>15){
                    total = 55000*qty;
                    diskon = total * (20.0/100.0);
                    cout << "\n-------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 20% |" << endl;
                    cout << "-------------------------------" << endl;
                    cout << "Nama Barang\t: Kertas PAPER A4 80gram" << endl;
                    cout << "Harga Normal\t: " << "55000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << ". SELAMAT! kamu juga mendapatkan BOBA MILK TEA secara gratiss!!!\n" << endl;
                } else {
                    total = 55000*qty;
                    cout << "\n---------------------------------------" << endl;
                    cout << "Nama Barang\t: Kertas PAPER A4 80gram" << endl;
                    cout << "Harga Normal\t: 55000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                }
            } else if (beli == 2){
                if((qty>=3) && (qty<=10)){
                    total = 125000*qty;
                    diskon = total * (10.0/100.0);
                    cout << "\n-------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 10% |" << endl;
                    cout << "-------------------------------" << endl;
                    cout << "Nama Barang\t: Tinta Warna Printer EPSON INKQ" << endl;
                    cout << "Harga Normal\t: 125000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << '\n' << endl;
                } else if (qty>10){
                    total = 125000 - 2000;
                    total = total*qty;
                    diskon = total * (20.0/100.0);
                    cout << "\n----------------------------------------------------" << endl;
                    cout << "| Kamu mendapatkan diskon 20% & Potongan Rp. 2.000 |" << endl;
                    cout << "----------------------------------------------------" << endl;
                    cout << "Nama Barang\t: Tinta Warna Printer EPSON INKQ" << endl;
                    cout << "Harga Normal\t: 123000" << endl;
                    cout << "Pembelian\t: BONUS +1PCS | " << qty+1 << " Pack" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: " << diskon << endl;
                    total = total - diskon;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << endl;
                    cout << '\n';
                } else {
                    total = 125000*qty;
                    cout << "\n---------------------------------------" << endl;
                    cout << "Nama Barang\t: Tinta Warna Printer EPSON INKQ" << endl;
                    cout << "Harga Normal\t: 125000" << endl;
                    cout << "Pembelian\t: " << qty << " Rim" << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << endl;
                    cout << '\n';
                }
            } else if (beli == 3){
                total = 180000*qty;
                cout << "Total\t: " << total << endl;
                if((total>1800000) && (total<5000000)){
                    potongan = total - 250000;
                    cout << "\n-----------------------------------------------" << endl;
                    cout << "| Kamu mendapatkan Potongan Harga Rp. 250.000 |" << endl;
                    cout << "-----------------------------------------------" << endl;
                    cout << "Nama Barang\t: Flashdisk 64GB FLASHDRIVE" << endl;
                    cout << "Harga Normal\t: 180000" << endl;
                    cout << "Pembelian\t: "<< qty << " Pcs" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: 250000" << endl;
                    cout << "Hasil Akhir\t: " << potongan << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << potongan << ". SELAMAT!! kamu juga mendapatkan 1 MINI BAG secara gratiss!!!\n"<< endl;
                } else if (total>=5000000){
                    potongan = total - 750000;
                    cout << "\n-----------------------------------------------" << endl;
                    cout << "| Kamu mendapatkan Potongan Harga Rp. 750.000 |" << endl;
                    cout << "-----------------------------------------------" << endl;
                    cout << "Nama Barang\t: Flashdisk 64GB FLASHDRIVE" << endl;
                    cout << "Harga Normal\t: 180000" << endl;
                    cout << "Pembelian\t: "<< qty << " Pcs" << endl;
                    cout << "Total Harga\t: " << total << endl;
                    cout << "Dapat Potongan\t: 750000" << endl;
                    cout << "Hasil Akhir\t: " << potongan << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << potongan << ". SELAMAT!! kamu juga mendapatkan 1 REGULER BAG & GANTUNGAN KUNCI secara gratiss!!!\n"<< endl;
                } else {
                    total = 180000*qty;
                    cout << "\n---------------------------------------" << endl;
                    cout << "Nama Barang\t: Flashdisk 64GB FLASHDRIVE" << endl;
                    cout << "Harga Normal\t: 180000" << endl;
                    cout << "Pembelian\t: " << qty << " Pcs" << endl;
                    cout << "Hasil Akhir\t: " << total << endl;
                    cout << "---------------------------------------" << endl;
                    cout << "Total Belanja kamu adalah " << total << endl;
                    cout << '\n';
                }
            }
            cout << "Apakah kamu ingin mengulanginya lagi? [y/n] : "; cin >> lagi;
            cout << '\n';
        } while ((lagi == 'y') || (lagi == 'Y'));

    };

    int pilihan;
    cout << "\n------------------" << endl;
    cout << "Program Great Sale" << endl;
    cout << "----------------------" << endl;
    cout << "1. Great Sale Simple" << endl;
    cout << "2. Great Sale Advanced" << endl;
    cout << "----------------------\n" << endl;
    cout << "Pilih Salah satu program Great Sale Tingkatan : "; cin >> pilihan;
    switch (pilihan){
        case 1 :
            soal1P5();
            break;
        case 2 :
            soal2P5();
            break;
        default :
            cout << "Input data tidak valid\n" << endl;
    }
}

void sistemP5(){
    int pilihan;
    cout << "---------------------------------------" << endl;
    cout << "Pertemuan 5 : Analisis Kondisi Advanced" << endl;
    cout << "---------------------------------------" << endl;
        do{
            cout << "Program Pertemuan 5 :" << endl;
            cout << "----------------------------------------" << endl;
            cout << "1. Kasus 1 : Konversi & Keterangan Nilai" << endl;
            cout << "2. Kasus 2 : Biaya Parkir" << endl;
            cout << "3. Kasus 3 : Diskon Produk" << endl;
            cout << "----------------------------------------" << endl;
            cout << "0. Kembali\n " << endl;
            cout << "Pilih salah satu program : "; cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                kasus1P5();
                break;
            case 2:
                kasus2P5();
                break;
            case 3:
                kasus3P5();
                break;
            default:
                break;
            }

        } while (pilihan != 0);
}
