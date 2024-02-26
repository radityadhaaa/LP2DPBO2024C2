// Mengimpor Library
#include <iostream> 
#include <vector> 
#include <iomanip>
#include "Shirt.cpp" // Mengimpor file Shirt.cpp yang berisi definisi kelas Shirt
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap fungsi atau objek standar

int main() { // Fungsi utama program
    string in_string; // Deklarasi variabel string untuk input
    int in_int = 0; // Deklarasi dan inisialisasi variabel integer untuk input

    vector<Shirt> dataKemeja; // Membuat vector yang berisi objek dari kelas Shirt

    cout << "Selamat Datang" << endl; // Menampilkan pesan selamat datang
    cout << "Silahkan masukan Data yang akan dimasukan :" << endl; // Meminta user untuk memasukkan data
    for (int i = 0; i < 3; i++) { // Looping untuk memasukkan data sebanyak 3 kali
        Shirt data; // Membuat objek baru dari kelas Shirt
        cout << "Data " << (i + 1) << endl; // Menampilkan nomor data yang sedang dimasukkan
        cout << "Masukan Id Produk :" << endl; // Meminta user untuk memasukkan id produk
        getline(cin, in_string); // Menerima input string dari user
        data.set_idProduct(in_string); // Menyimpan id produk ke dalam objek Shirt
        cout << "Masukan Nama Kemeja :" << endl; // Meminta user untuk memasukkan nama kemeja
        getline(cin, in_string); // Menerima input string dari user
        data.set_name(in_string); // Menyimpan nama kemeja ke dalam objek Shirt
        cout << "Masukan Brand Kemeja :" << endl; // Meminta user untuk memasukkan brand kemeja
        getline(cin, in_string); // Menerima input string dari user
        data.set_brand(in_string); // Menyimpan brand kemeja ke dalam objek Shirt
        cout << "Masukan Harga Kemeja :" << endl; // Meminta user untuk memasukkan harga kemeja
        cin >> in_int; // Menerima input integer dari user
        cin.ignore(); // Mengabaikan karakter newline di buffer
        data.set_price(in_int); // Menyimpan harga kemeja ke dalam objek Shirt
        cout << "Masukan Ukuran Kemeja:" << endl; // Meminta user untuk memasukkan ukuran kemeja
        getline(cin, in_string); // Menerima input string dari user
        data.set_size(in_string); // Menyimpan ukuran kemeja ke dalam objek Shirt
        cout << "Masukan Material / Bahan Kemeja :" << endl; // Meminta user untuk memasukkan material kemeja
        getline(cin, in_string); // Menerima input string dari user
        data.set_material(in_string); // Menyimpan material kemeja ke dalam objek Shirt
        cout << "Masukan Gender :" << endl; // Meminta user untuk memasukkan gender
        getline(cin, in_string); // Menerima input string dari user
        data.set_gender(in_string); // Menyimpan gender ke dalam objek Shirt
        cout << "Masukan Warna :" << endl; // Meminta user untuk memasukkan warna
        getline(cin, in_string); // Menerima input string dari user
        data.set_color(in_string); // Menyimpan warna ke dalam objek Shirt
        cout << "Masukan Tipe Lengan :" << endl; // Meminta user untuk memasukkan tipe lengan
        getline(cin, in_string); // Menerima input string dari user
        data.set_sleeve_type(in_string); // Menyimpan tipe lengan ke dalam objek Shirt
        dataKemeja.push_back(data); // Menambahkan objek Shirt ke dalam vector
    }

    cout << "Data Kemeja :" << endl; // Menampilkan pesan bahwa data kemeja akan ditampilkan
    cout << "-------------------------------------------------------------------------------------------------------------" << endl; // Menampilkan garis pembatas
    cout << "| " << setw(2) << "No" << " | " << setw(10) << "Id Produk" << " | " << setw(10) << "Nama" << " | " << setw(10) << "Brand" << " | " << setw(10) << "Harga" << " | " << setw(6) << "Ukuran" << " | " << setw(8) << "Material" << " | " << setw(6) << "Gender" << " | " << setw(5) << "Warna" << " | " << setw(11) << "Tipe Lengan" << " |" << endl; // Menampilkan header tabel
    cout << "-------------------------------------------------------------------------------------------------------------" << endl; // Menampilkan garis pembatas
    for (int j = 0; j < 3; j++) { // Looping untuk menampilkan data sebanyak 3 kali
        cout << "| " << setw(2) << j + 1 << " | " << setw(10) << dataKemeja[j].get_idProduct() << " | " << setw(10) << dataKemeja[j].get_name() << " | " << setw(10) << dataKemeja[j].get_brand() << " | " << setw(10) << dataKemeja[j].get_price() << " | " << setw(6) << dataKemeja[j].get_size() << " | " << setw(8) << dataKemeja[j].get_material() << " | " << setw(6) << dataKemeja[j].get_gender() << " | " << setw(5) << dataKemeja[j].get_color() << " | " << setw(11) << dataKemeja[j].get_sleeve_type() << " |" << endl; // Menampilkan data kemeja
    }
    cout << "-------------------------------------------------------------------------------------------------------------" << endl; // Menampilkan garis pembatas

    return 0; // Mengakhiri program
}
