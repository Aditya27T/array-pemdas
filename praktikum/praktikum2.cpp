#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int harga[100], total[100], x;

    // Tabel harga fotokopi
    for (x = 1; x <= 100; x++) {
        if (x % 20 == 0) {
            harga[x] = 60;
        } else {
            harga[x] = 80;
        }
    }
    
    // Tampilkan tabel total
    cout << endl;
    cout << "Tabel Total Harga Fotokopi" << endl;
    cout << "-------------------------" << endl;
    cout << "Jumlah lembar\tTotal" << endl;
    cout << "-------------------------" << endl;
    for (x = 1; x <= 100; x++) {
        total[x] = harga[x] * x;
        cout << x << "\t\t" << total[x] << endl;
    }

    getch();

    return 0;
}
