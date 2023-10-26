#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int baris, kolom, matrix[3][4];

    printf("Masukkan elemen array: \n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("matrix[%d][%d] = ", baris, kolom);
            scanf("%d", &matrix[baris][kolom]);
        }
        printf("\n");
    }
    

    printf("Isi array: \n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            printf("%d ", matrix[baris][kolom]);
        }
        printf("\n");
    }

    getch();
}