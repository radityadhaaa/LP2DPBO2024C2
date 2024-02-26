# Mengimpor kelas Product
from Product import Product

# Mendefinisikan kelas Shirt yang merupakan turunan dari kelas Product
class Shirt(Product):
    # Konstruktor untuk kelas Shirt
    def __init__(self):
        # Memanggil konstruktor dari kelas induk (Product)
        super().__init__()
        # Menambahkan atribut color dengan nilai awal string kosong
        self.color = ""
        # Menambahkan atribut sleeve_type dengan nilai awal string kosong
        self.sleeve_type = ""

    # Metode untuk mengatur nilai dari atribut color
    def set_color(self, color):
        self.color = color

    # Metode untuk mengatur nilai dari atribut sleeve_type
    def set_sleeve_type(self, sleeve_type):
        self.sleeve_type = sleeve_type

    # Metode untuk mendapatkan nilai dari atribut color
    def get_color(self):
        return self.color

    # Metode untuk mendapatkan nilai dari atribut sleeve_type
    def get_sleeve_type(self):
        return self.sleeve_type
