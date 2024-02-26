<?php
    require ('Shirt.php'); // Memanggil Shirt.php

    // Melakukan Input Data Sebanyak 3 Data
    $data[] = new Shirt();
    $data[0]->set_idProduct("1");
    $data[0]->set_name("Aku");
    $data[0]->set_brand("Prada");
    $data[0]->set_price(1000000);
    $data[0]->set_size("L");
    $data[0]->set_material("Katun");
    $data[0]->set_gender("Pria");
    $data[0]->set_color("Biru");
    $data[0]->set_sleeve_type("Panjang");

    $data[] = new Shirt();
    $data[1]->set_idProduct("2");
    $data[1]->set_name("Kamu");
    $data[1]->set_brand("Converse");
    $data[1]->set_price(1200000);
    $data[1]->set_size("L");
    $data[1]->set_material("Katun");
    $data[1]->set_gender("Pria");
    $data[1]->set_color("Hitam");
    $data[1]->set_sleeve_type("Pendek");

    $data[] = new Shirt();
    $data[2]->set_idProduct("3");
    $data[2]->set_name("Beliau");
    $data[2]->set_brand("Gucci");
    $data[2]->set_price(1300000);
    $data[2]->set_size("M");
    $data[2]->set_material("Katun");
    $data[2]->set_gender("Pria");
    $data[2]->set_color("Putih");
    $data[2]->set_sleeve_type("Pendek");

    // Menampilkan Tabel
    echo "<table border='1'>";
    echo "<tr>
            <th>ID Produk</th>
            <th>Nama</th>
            <th>Merek</th>
            <th>Harga</th>
            <th>Ukuran</th>
            <th>Bahan</th>
            <th>Jenis Kelamin</th>
            <th>Warna</th>
            <th>Jenis Lengan</th>
        </tr>";

    foreach ($data as $shirt) { //Menampilkan sebanyak banyaknya data
        echo "<tr>";
        echo "<td>" . $shirt->get_idProduct() . "</td>";
        echo "<td>" . $shirt->get_name() . "</td>";
        echo "<td>" . $shirt->get_brand() . "</td>";
        echo "<td>" . $shirt->get_price() . "</td>";
        echo "<td>" . $shirt->get_size() . "</td>";
        echo "<td>" . $shirt->get_material() . "</td>";
        echo "<td>" . $shirt->get_gender() . "</td>";
        echo "<td>" . $shirt->get_color() . "</td>";
        echo "<td>" . $shirt->get_sleeve_type() . "</td>";
        echo "</tr>";
    }
    echo "</table>";


?>