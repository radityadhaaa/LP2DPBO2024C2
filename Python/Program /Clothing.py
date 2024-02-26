# Mendefinisikan kelas Clothing
class Clothing:
    # Konstruktor untuk kelas Clothing
    def __init__(self):
        # Menambahkan atribut size dengan nilai awal string kosong
        self.size = ""
        # Menambahkan atribut material dengan nilai awal string kosong
        self.material = ""
        # Menambahkan atribut gender dengan nilai awal string kosong
        self.gender = ""

    # Metode untuk mengatur nilai dari atribut size
    def set_size(self, size):
        self.size = size

    # Metode untuk mengatur nilai dari atribut material
    def set_material(self, material):
        self.material = material

    # Metode untuk mengatur nilai dari atribut gender
    def set_gender(self, gender):
        self.gender = gender

    # Metode untuk mendapatkan nilai dari atribut size
    def get_size(self):
        return self.size

    # Metode untuk mendapatkan nilai dari atribut material
    def get_material(self):
        return self.material

    # Metode untuk mendapatkan nilai dari atribut gender
    def get_gender(self):
        return self.gender
