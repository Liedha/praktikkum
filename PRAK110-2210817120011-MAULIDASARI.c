#include <stdio.h>
#include <math.h>

int main() {
    int alas=5, tinggi=12, sA, sB, sC, keliling, luas, axt;
   
    sA       = tinggi;
    sC       = alas;
    axt      = (alas*alas)+(tinggi*tinggi);
    sB       = sqrt(axt);
    keliling = sA+sB+sC;
    luas     = (sC*sA)/2;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sA);
    printf("Sisi B = %d cm\n", sB);
    printf("Sisi C = %d cm\n", sC);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
    
    return 0;
}
