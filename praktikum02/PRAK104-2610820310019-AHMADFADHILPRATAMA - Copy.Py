harga_a = 400000
harga_b = 350000
diskon_a = 13
diskon_b = 21

harga_a_diskon = int(harga_a - (harga_a * diskon_a / 100))
harga_b_diskon = int(harga_b - (harga_b * diskon_b / 100))

print(f"Harga sepatu A adalah {harga_a}")
print(f"Harga sepatu B adalah {harga_b}")
print(f"Sepatu A mendapat diskon {diskon_a}% sehingga harganya menjadi {harga_a_diskon}")
print(f"Sepatu B mendapat diskon {diskon_b}% sehingga harganya menjadi {harga_b_diskon}")