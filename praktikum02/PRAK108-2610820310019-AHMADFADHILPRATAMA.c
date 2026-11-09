#include <stdio.h>

int main() {
    int putaran = 5;
    float jarak_km = 14.0;
    float pi = 3.141592653589793;
    
    float keliling = jarak_km / putaran;
    float r = keliling / (2 * pi);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak_km);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}