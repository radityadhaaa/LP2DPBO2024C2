<?php
require ('Product.php'); // Memanggil Product.php
class Shirt extends Product { // Deklarasi kelas bernama Shirt yang merupakan subkelas dari kelas Product
    private $color; // Melakukan deklarasi variabel private string untuk warna
    private $sleeve_type; // Melakukan deklarasi variabel private string untuk tipe lengan

    function __construct() { // Deklarasi konstruktor untuk kelas Shirt
        $this->color = ""; // Melakukan inisialisasi warna 
        $this->sleeve_type = ""; // Melakukan inisialisasi tipe lengan 
    }

    function set_color($color) { // Deklarasi metode untuk mengatur warna
        $this->color = $color; // Menetapkan warna dengan nilai yang diberikan
    }

    function set_sleeve_type($sleeve_type) { // Deklarasi metode untuk mengatur tipe lengan
        $this->sleeve_type = $sleeve_type; // Menetapkan tipe lengan dengan nilai yang diberikan
    }

    function get_color() { // Deklarasi metode untuk mendapatkan warna
        return $this->color; // Mengembalikan warna
    }

    function get_sleeve_type() { // Deklarasi metode untuk mendapatkan tipe lengan
        return $this->sleeve_type; // Mengembalikan tipe lengan
    }
}
?>
