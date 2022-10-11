#include <stdio.h>

int main() {
    float a, b, diskonA, diskonB, hargaA, hargaB;
    char x = '%';
         a = 400000;
         b = 350000;
   
    diskonA = a * 13 / 100;
    diskonB = b * 21 / 100;
    hargaA = a - diskonA;
    hargaB = b - diskonB;
    
    printf("Harga sepatu A adalah %.0f\n", a);
    printf("Harga sepatu B adalah %.0f\n", b);
    printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.0f\n", x, hargaA);
    printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.0f\n", x, hargaB);
   
    return 0;
}