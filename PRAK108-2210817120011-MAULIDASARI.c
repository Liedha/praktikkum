#include <stdio.h>

int main() {
    float kel=5, jarak=14, phi=3.14, r;
    r = (jarak/kel)/(2*phi);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengellingi taman = %.0f Putaran\n",kel);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n",jarak);

    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek Adalah %.2f Kilometer\n",r);
    
    return 0;
}
