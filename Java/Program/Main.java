package Java.Program;

import java.util.ArrayList;
import java.util.Scanner;

public class Main { // Deklarasi kelas publik bernama Main
    public static void main(String[] args) { // Metode utama yang akan dieksekusi saat program dijalankan
        String in_string; // Mendeklarasikan variabel string
        int in_int = 0; // Mendeklarasikan variabel untuk masukan dengan melakukan inisialisasi

        Scanner sc = new Scanner(System.in); // Membuat objek Scanner untuk Membaca masukan
        ArrayList<Shirt> dataKemeja = new ArrayList<>(); // Membuat ArrayList untuk menyimpan objek Shirt

        System.out.println("Selamat Datang"); // Menampilkan pesan selamat datang
        System.out.println("Silahkan masukan Data yang akan dimasukan :"); // Menampilkan pesan untuk memasukkan data
        for (int i = 0; i < 3; i++) { // Loop for untuk memasukkan data sebanyak 3 kali
            Shirt data = new Shirt(); // Membuat objek baru dari kelas Shirt
            System.out.println("Data " + (i + 1)); // Menampilkan nomor data yang sedang dimasukkan
            System.out.println("Masukan Id Produk :"); // Meminta masukan untuk memasukkan id produk
            in_string = sc.nextLine(); // Membaca masukan
            data.set_idProduct(in_string); // Menyimpan id produk ke dalam objek Shirt
            System.out.println("Masukan Nama Kemeja :"); // Meminta masukan untuk memasukkan nama kemeja
            in_string = sc.nextLine(); // Membaca masukan
            data.set_name(in_string); // Menyimpan nama kemeja ke dalam objek Shirt
            System.out.println("Masukan Brand Kemeja :"); // Meminta masukan untuk memasukkan brand kemeja
            in_string = sc.nextLine(); // Membaca masukan
            data.set_brand(in_string); // Menyimpan brand kemeja ke dalam objek Shirt
            System.out.println("Masukan Harga Kemeja :"); // Meminta masukan untuk memasukkan harga kemeja
            in_int = Integer.parseInt(sc.nextLine()); // Membaca masukan dan mengubahnya menjadi integer
            data.set_price(in_int); // Menyimpan harga kemeja ke dalam objek Shirt
            System.out.println("Masukan Ukuran Kemeja:"); // Meminta masukan untuk memasukkan ukuran kemeja
            in_string = sc.nextLine(); // Membaca masukan
            data.set_size(in_string); // Menyimpan ukuran kemeja ke dalam objek Shirt
            System.out.println("Masukan Material / Bahan Kemeja :"); // Meminta masukan untuk memasukkan material kemeja
            in_string = sc.nextLine(); // Membaca masukan
            data.set_material(in_string); // Menyimpan material kemeja ke dalam objek Shirt
            System.out.println("Masukan Gender :"); // Meminta masukan untuk memasukkan gender
            in_string = sc.nextLine(); // Membaca masukan
            data.set_gender(in_string); // Menyimpan gender ke dalam objek Shirt
            System.out.println("Masukan Warna :"); // Meminta masukan untuk memasukkan warna
            in_string = sc.nextLine(); // Membaca masukan
            data.set_color(in_string); // Menyimpan warna ke dalam objek Shirt
            System.out.println("Masukan Tipe Lengan :"); // Meminta masukan untuk memasukkan tipe lengan
            in_string = sc.nextLine(); // Membaca masukan
            data.set_sleeve_type(in_string); // Menyimpan tipe lengan ke dalam objek Shirt
            dataKemeja.add(data); // Menambahkan objek Shirt ke dalam ArrayList
        }
        
        
        System.out.println("Data Kemeja :"); // Menampilkan Data Kameja
        System.out.println("-------------------------------------------------------------------------------------------------------------"); // Menampilkan garis pembatas
        String[] columnNames = { "No", "Id Produk", "Nama", "Brand", "Harga", "Ukuran", "Material", "Gender", "Warna","Tipe Lengan" }; // Deklarasi nama kolom untuk tabel
        System.out.println(String.format("| %-2s | %-10s | %-10s | %-10s | %-10s | %-6s | %-8s | %-6s | %-5s | %-11s |", (Object[]) columnNames)); // Menampilkan nama kolom
        System.out.println("-------------------------------------------------------------------------------------------------------------"); // Menampilkan garis pembatas
        for (int j = 0; j < 3; j++) { // Loop for untuk menampilkan data sebanyak 3 kali
            System.out.printf("| %-2d | %-10s | %-10s | %-10s | %-10d | %-6s | %-8s | %-6s | %-5s | %-11s |\n", j + 1, dataKemeja.get(j).get_idProduct(), dataKemeja.get(j).get_name(), dataKemeja.get(j).get_brand(), dataKemeja.get(j).get_price(), dataKemeja.get(j).get_size(), dataKemeja.get(j).get_material(), dataKemeja.get(j).get_gender(), dataKemeja.get(j).get_color(), dataKemeja.get(j).get_sleeve_type()); // Menampilkan data kemeja
        }
        System.out.println("-------------------------------------------------------------------------------------------------------------"); // Menampilkan garis pembatas
        
    }
}
