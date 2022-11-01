#include <stdio.h>
main()
{
    int A, B;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%d", &B);
        A = B;
    printf("New value\n");
    printf("%d\n", A);
    printf("%d", B);
}