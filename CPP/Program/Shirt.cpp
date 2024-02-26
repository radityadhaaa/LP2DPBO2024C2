#include "Clothing.cpp"

class Shirt : public Clothing { // Deklarasi kelas bernama Shirt yang merupakan subkelas dari kelas Product
private:
    string color; // Melakukan deklarasi variabel private string untuk warna
    string sleeve_type; // Melakukan deklarasi variabel private string untuk tipe lengan

public:
    Shirt() { // Deklarasi konstruktor untuk kelas Shirt
        this->color = ""; // Melakukan inisialisasi warna 
        this->sleeve_type = ""; // Melakukan inisialisasi tipe lengan 
    }

    void set_color(string color) { // Deklarasi metode untuk mengatur warna
        this->color = color; // Menetapkan warna dengan nilai yang diberikan
    }

    void set_sleeve_type(string sleeve_type) { // Deklarasi metode untuk mengatur tipe lengan
        this->sleeve_type = sleeve_type; // Menetapkan tipe lengan dengan nilai yang diberikan
    }

    string get_color() { // Deklarasi metode untuk mendapatkan warna
        return this->color; // Mengembalikan warna
    }

    string get_sleeve_type() { // Deklarasi metode untuk mendapatkan tipe lengan
        return this->sleeve_type; // Mengembalikan tipe lengan
    }
};
