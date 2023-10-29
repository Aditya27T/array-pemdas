#include <stdio.h>
#include <conio.h>

int main()
{
    int index1, nilai[10];

    for (index1 = 0; index1 < 10; index1++)
    {
        printf("Masukkan nilai ke-%d : ", index1 + 1);
        scanf("%d", &nilai[index1]);
    }

    printf("\n");

    for (index1 = 0; index1 < 10; index1++)
    {
        printf("Nilai ke-%d : %d\n", index1 + 1, nilai[index1]);
    }

    printf("Nilai yang dimasukkan adalah : ");
    for (index1 = 0; index1 < 10; index1++)
    {
        printf("%5.0i", nilai[index1]);
    }

    getch();
}