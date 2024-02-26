#include <string>
using namespace std;

class Product
{ // Kelas Product yang merupakan subkelas dari kelas Clothing

private:
    string idProduct; // Deklarasi variabel private string untuk id produk
    string name;      // Deklarasi variabel private string untuk nama
    string brand;     // Deklarasi variabel private string untuk brand
    int price;        // Deklarasi variabel private integer untuk harga

public:
    Product()
    {                   // Deklarasi konstruktor untuk kelas Product
        idProduct = ""; // Melakukan inisialisai id produk
        name = "";      // Melakukan inisialisai nama
        brand = "";     // Melakukan inisialisai brand
        price = 0;      // Melakukan inisialisai harga
    }

    void set_idProduct(string idProduct)
    {                                // Deklarasi metode untuk mengatur id produk
        this->idProduct = idProduct; // Menetapkan id produk dengan nilai yang diberikan
    }

    void set_name(string name)
    {                      // Deklarasi metode untuk mengatur nama
        this->name = name; // Menetapkan nama dengan nilai yang diberikan
    }

    void set_brand(string brand)
    {                        // Deklarasi metode untuk mengatur brand
        this->brand = brand; // Menetapkan brand dengan nilai yang diberikan
    }

    void set_price(int price)
    {                        // Deklarasi metode untuk mengatur harga
        this->price = price; // Menetapkan harga dengan nilai yang diberikan
    }

    string get_idProduct()
    {                           // Deklarasi metode untuk mendapatkan id produk
        return this->idProduct; // Mengembalikan id produk
    }

    string get_name()
    {                      // Deklarasi metode untuk mendapatkan nama
        return this->name; // Mengembalikan nama
    }

    string get_brand()
    {                       // Deklarasi metode untuk mendapatkan brand
        return this->brand; // Mengembalikan brand
    }

    int get_price()
    {                       // Deklarasi metode untuk mendapatkan harga
        return this->price; // Mengembalikan harga
    }

    ~Product()
    {                  
        
    }

};
