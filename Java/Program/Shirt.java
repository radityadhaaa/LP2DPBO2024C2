package Java.Program; 

class Shirt extends Product { // Deklarasi kelas bernama Shirt yang merupakan subkelas dari kelas Product
    private String color; // Melakukan deklarasi variabel private string untuk warna
    private String sleeve_type; // Melakukan deklarasi variabel private string untuk tipe lengan

    void Shirt() { // Deklarasi konstruktor untuk kelas Shirt
        this.color = ""; // Melakukan inisialisasi warna 
        this.sleeve_type = ""; // Melakukan inisialisasi tipe lengan 
    }

    void set_color(String color) { // Deklarasi metode untuk mengatur warna
        this.color = color; // Menetapkan warna dengan nilai yang diberikan
    }

    void set_sleeve_type(String sleeve_type) { // Deklarasi metode untuk mengatur tipe lengan
        this.sleeve_type = sleeve_type; // Menetapkan tipe lengan dengan nilai yang diberikan
    }

    String get_color() { // Deklarasi metode untuk mendapatkan warna
        return this.color; // Mengembalikan warna
    }

    String get_sleeve_type() { // Deklarasi metode untuk mendapatkan tipe lengan
        return this.sleeve_type; // Mengembalikan tipe lengan
    }
}
