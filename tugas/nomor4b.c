#include <stdio.h>
int main()
{

    float A, B;
    int C;
    printf("Masukkan nilai A \t: ");
    scanf("%f", &A);
    printf("Masukkan nilai B \t: ");
    scanf("%f", &B);
    C = !(A == B) && (A > B);
    printf("--------------------------------\n");
    printf("Hasil perhitungan adalah %i\n", C);
    return 0;
}