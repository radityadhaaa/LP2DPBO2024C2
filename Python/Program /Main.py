# Mengimpor modul sys
import sys

# Mengimpor kelas Shirt
from Shirt import Shirt

# Mendefinisikan variabel string dan integer
in_string = ""
in_int = 0

# Mendefinisikan list untuk menyimpan data kemeja
dataKemeja = []

# Menampilkan pesan selamat datang dan instruksi
print("Selamat Datang")
print("Silahkan masukan Data yang akan dimasukan :")

# Melakukan iterasi sebanyak 3 kali untuk memasukkan data kemeja
for i in range(3):
    # Membuat objek baru dari kelas Shirt
    data = Shirt()
    print("Data " + str(i + 1))
    print("Masukan Id Produk :")
    # Menerima input dari pengguna dan mengatur id produk
    in_string = input()
    data.set_idProduct(in_string)
    print("Masukan Nama Kemeja :")
    # Menerima input dari pengguna dan mengatur nama kemeja
    in_string = input()
    data.set_name(in_string)
    print("Masukan Brand Kemeja :")
    # Menerima input dari pengguna dan mengatur brand kemeja
    in_string = input()
    data.set_brand(in_string)
    print("Masukan Harga Kemeja :")
    # Menerima input dari pengguna dan mengatur harga kemeja
    in_int = int(input())
    data.set_price(in_int)
    print("Masukan Ukuran Kemeja:")
    # Menerima input dari pengguna dan mengatur ukuran kemeja
    in_string = input()
    data.set_size(in_string)
    print("Masukan Material / Bahan Kemeja :")
    # Menerima input dari pengguna dan mengatur material kemeja
    in_string = input()
    data.set_material(in_string)
    print("Masukan Gender :")
    # Menerima input dari pengguna dan mengatur gender kemeja
    in_string = input()
    data.set_gender(in_string)
    print("Masukan Warna :")
    # Menerima input dari pengguna dan mengatur warna kemeja
    in_string = input()
    data.set_color(in_string)
    print("Masukan Tipe Lengan :")
    # Menerima input dari pengguna dan mengatur tipe lengan kemeja
    in_string = input()
    data.set_sleeve_type(in_string)
    # Menambahkan objek kemeja ke dalam list
    dataKemeja.append(data)

# Menampilkan data kemeja
print("Data Kemeja :")
print("-------------------------------------------------------------------------------------------------------------")
# Menampilkan nama kolom
print(f"| {'No':<2} | {'Id Produk':<10} | {'Nama':<10} | {'Brand':<10} | {'Harga':<10} | {'Ukuran':<6} | {'Material':<8} | {'Gender':<6} | {'Warna':<5} | {'Tipe Lengan':<11} |")
print("-------------------------------------------------------------------------------------------------------------")
# Melakukan iterasi sebanyak jumlah data kemeja dan menampilkan setiap data
for j in range(3):
    print(f"| {j + 1:<2} | {dataKemeja[j].get_idProduct():<10} | {dataKemeja[j].get_name():<10} | {dataKemeja[j].get_brand():<10} | {dataKemeja[j].get_price():<10} | {dataKemeja[j].get_size():<6} | {dataKemeja[j].get_material():<8} | {dataKemeja[j].get_gender():<6} | {dataKemeja[j].get_color():<5} | {dataKemeja[j].get_sleeve_type():<11} |")
# Menampilkan garis pembatas
print("-------------------------------------------------------------------------------------------------------------")
