#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;

    int sisi_a = tinggi;
    int sisi_c = alas;
    int sisi_b = (int)sqrt((sisi_a * sisi_a) + (sisi_c * sisi_c));

    int keliling = sisi_a + sisi_b + sisi_c;
    int luas = 0.5 * sisi_c * sisi_a;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);

    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %d cm\n", sisi_c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}