package Java.Program;

class Clothing { // Deklarasi kelas bernama Clothing
    private String size; // Deklarasi variabel private string untuk ukuran
    private String material; // Deklarasi variabel private string untuk material
    private String gender; // Deklarasi variabel private string untuk gender

    void Clothing() { // Deklarasi konstruktor untuk kelas Clothing
        size = ""; // Melakukan inisialisasi ukuran 
        material = ""; // Melakukan inisialisasi material 
        gender = ""; // Melakukan inisialisasi gender 
    }

    void set_size(String size) { // Deklarasi metode untuk mengatur ukuran
        this.size = size; // Menetapkan ukuran dengan nilai yang diberikan
    }

    void set_material(String material) { // Deklarasi metode untuk mengatur material
        this.material = material; // Menetapkan material dengan nilai yang diberikan
    }

    void set_gender(String gender) { // Deklarasi metode untuk mengatur gender
        this.gender = gender; // Menetapkan gender dengan nilai yang diberikan
    }

    String get_size() { // Deklarasi metode untuk mendapatkan ukuran
        return this.size; // Mengembalikan ukuran
    }

    String get_material() { // Deklarasi metode untuk mendapatkan material
        return this.material; // Mengembalikan material
    }

    String get_gender() { // Deklarasi metode untuk mendapatkan gender
        return this.gender; // Mengembalikan gender
    }
}
