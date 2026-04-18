#include <iostream>
using namespace std;

int main() {
    int biner;
    cin >> biner;

    int temp = biner;
    int panjang = 0;

    int cek = biner;
    while (cek > 0) {
        int digit = cek % 10;
        if (digit != 0 && digit != 1) {
            cout << "Pesan Rusak!";
            return 0;
        }
        panjang++;
        cek /= 10;
    }

    int arr[100], i = 0;

    while (temp > 0) {
        arr[i++] = temp % 10;
        temp /= 10;
    }

    int hasil = 0;

    for (int j = panjang - 1; j >= 0; j--) {
        cout << arr[j] << "x2^" << j;

        hasil += arr[j] * (1LL << j);

        if (j != 0) cout << " + ";
    }

    cout << " = " << hasil;

    return 0;
}