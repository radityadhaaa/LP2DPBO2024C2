#include "Product.cpp"

class Clothing : public Product{
private:
    string size; // Deklarasi string privat untuk ukuran
    string material; // Deklarasi string privat untuk material
    string gender; // Deklarasi string privat untuk gender

public:
    Clothing() { // Deklarasi konstruktor untuk kelas Clothing
        size = ""; // Melakukan inisialisasi ukuran
        material = ""; // Melakukan inisialisasi material
        gender = ""; // Melakukan inisialisasi gender
    }

    void set_size(string size) { // Deklarasi metode untuk mengatur ukuran
        this->size = size; // Menetapkan ukuran dengan nilai yang diberikan
    }

    void set_material(string material) { // Deklarasi metode untuk mengatur material
        this->material = material; // Menetapkan material dengan nilai yang diberikan
    }

    void set_gender(string gender) { // Deklarasi metode untuk mengatur gender
        this->gender = gender; // Menetapkan gender dengan nilai yang diberikan
    }

    string get_size() { // Deklarasi metode untuk mendapatkan ukuran
        return this->size; // Mengembalikan ukuran
    }

    string get_material() { // Deklarasi metode untuk mendapatkan material
        return this->material; // Mengembalikan material
    }

    string get_gender() { // Deklarasi metode untuk mendapatkan gender
        return this->gender; // Mengembalikan gender
    }
};
