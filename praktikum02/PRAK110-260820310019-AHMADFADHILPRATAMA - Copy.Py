import math

alas = 5
tinggi = 12

sisi_a = tinggi
sisi_c = alas
sisi_b = int(math.sqrt((sisi_a ** 2) + (sisi_c ** 2)))

keliling = sisi_a + sisi_b + sisi_c
luas = int(0.5 * sisi_c * sisi_a)

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")

print("Jawab :")
print(f"Sisi A = {sisi_a} cm")
print(f"Sisi B = {sisi_b} cm")
print(f"Sisi C = {sisi_c} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")