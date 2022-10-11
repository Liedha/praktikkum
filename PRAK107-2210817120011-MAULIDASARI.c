#include <stdio.h>

int main() {
    int pjg1=4, pjg2=5, pjg3=7, keliling, harga, total;

    keliling = pjg1 + pjg2 + pjg3;
    harga = 85000;
    total = keliling * harga;
    
    printf("Diketahui :\n\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", pjg1, pjg2, pjg3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter Adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya Yang Diperlukan Pak Dengklek Adalah : Rp %d\n", total);
    
    return 0;
}
