<?php
require ('Clothing.php'); // Memanggil Clothing.php
class Product extends Clothing { // Kelas Product yang merupakan subkelas dari kelas Clothing

    private $idProduct; // Deklarasi variabel private string untuk id produk
    private $name; // Deklarasi variabel private string untuk nama
    private $brand; // Deklarasi variabel private string untuk brand
    private $price; // Deklarasi variabel private integer untuk harga

    function __construct() { // Deklarasi konstruktor untuk kelas Product
        $this->idProduct = ""; // Melakukan inisialisai id produk 
        $this->name = ""; // Melakukan inisialisai nama 
        $this->brand = ""; // Melakukan inisialisai brand 
        $this->price = 0; // Melakukan inisialisai harga
    }

    function set_idProduct($idProduct) { // Deklarasi metode untuk mengatur id produk
        $this->idProduct = $idProduct; // Menetapkan id produk dengan nilai yang diberikan
    }

    function set_name($name) { // Deklarasi metode untuk mengatur nama
        $this->name = $name; // Menetapkan nama dengan nilai yang diberikan
    }

    function set_brand($brand) { // Deklarasi metode untuk mengatur brand
        $this->brand = $brand; // Menetapkan brand dengan nilai yang diberikan
    }

    function set_price($price) { // Deklarasi metode untuk mengatur harga
        $this->price = $price; // Menetapkan harga dengan nilai yang diberikan
    }

    function get_idProduct() { // Deklarasi metode untuk mendapatkan id produk
        return $this->idProduct; // Mengembalikan id produk
    }

    function get_name() { // Deklarasi metode untuk mendapatkan nama
        return $this->name; // Mengembalikan nama
    }

    function get_brand() { // Deklarasi metode untuk mendapatkan brand
        return $this->brand; // Mengembalikan brand
    }

    function get_price() { // Deklarasi metode untuk mendapatkan harga
        return $this->price; // Mengembalikan harga
    }
}
?>
