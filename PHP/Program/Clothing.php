<?php
class Clothing { // Kelas Clothing
    private $size; // Deklarasi variabel private untuk ukuran
    private $material; // Deklarasi variabel private untuk material
    private $gender; // Deklarasi variabel private untuk gender

    function __construct() { // Deklarasi konstruktor untuk kelas Clothing
        $this->size = ""; // Melakukan inisialisasi ukuran
        $this->material = ""; // Melakukan inisialisasi material
        $this->gender = ""; // Melakukan inisialisasi gender
    }

    function set_size($size) { // Deklarasi metode untuk mengatur ukuran
        $this->size = $size; // Menetapkan ukuran dengan nilai yang diberikan
    }

    function set_material($material) { // Deklarasi metode untuk mengatur material
        $this->material = $material; // Menetapkan material dengan nilai yang diberikan
    }

    function set_gender($gender) { // Deklarasi metode untuk mengatur gender
        $this->gender = $gender; // Menetapkan gender dengan nilai yang diberikan
    }

    function get_size() { // Deklarasi metode untuk mendapatkan ukuran
        return $this->size; // Mengembalikan ukuran
    }

    function get_material() { // Deklarasi metode untuk mendapatkan material
        return $this->material; // Mengembalikan material
    }

    function get_gender() { // Deklarasi metode untuk mendapatkan gender
        return $this->gender; // Mengembalikan gender
    }
}
?>
