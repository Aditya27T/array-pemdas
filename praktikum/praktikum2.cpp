#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    const int harga_normal = 80;
    const int harga_per_20 = 60;
    const int lembar = 20;

    for (int i = 1; i <= 100; i++) {
        int harga_per_lembar = harga_normal;

        if (i % lembar == 0) {
            harga_per_lembar = harga_per_20;
        }

        int harga_total = harga_per_lembar * i;

        cout << "Jumlah lembar: " << i << ", Harga per lembar: " << harga_per_lembar << ", Harga total: " << harga_total << endl;
    }

    return 0;
}
