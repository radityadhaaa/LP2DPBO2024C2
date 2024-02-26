# Mengimpor kelas Clothing
from Clothing import Clothing

# Mendefinisikan kelas Product yang merupakan turunan dari kelas Clothing
class Product(Clothing):
    # Konstruktor untuk kelas Product
    def __init__(self):
        # Memanggil konstruktor dari kelas induk (Clothing)
        super().__init__()
        # Menambahkan atribut idProduct dengan nilai awal string kosong
        self.idProduct = ""
        # Menambahkan atribut name dengan nilai awal string kosong
        self.name = ""
        # Menambahkan atribut brand dengan nilai awal string kosong
        self.brand = ""
        # Menambahkan atribut price dengan nilai awal 0
        self.price = 0

    # Metode untuk mengatur nilai dari atribut idProduct
    def set_idProduct(self, idProduct):
        self.idProduct = idProduct

    # Metode untuk mengatur nilai dari atribut name
    def set_name(self, name):
        self.name = name

    # Metode untuk mengatur nilai dari atribut brand
    def set_brand(self, brand):
        self.brand = brand

    # Metode untuk mengatur nilai dari atribut price
    def set_price(self, price):
        self.price = price

    # Metode untuk mendapatkan nilai dari atribut idProduct
    def get_idProduct(self):
        return self.idProduct

    # Metode untuk mendapatkan nilai dari atribut name
    def get_name(self):
        return self.name

    # Metode untuk mendapatkan nilai dari atribut brand
    def get_brand(self):
        return self.brand

    # Metode untuk mendapatkan nilai dari atribut price
    def get_price(self):
        return self.price
