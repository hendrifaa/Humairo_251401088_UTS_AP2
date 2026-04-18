#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "bukan";
        return 0;
    }

    while (N % 2 == 0) {
        N /= 2;
    }

    if (N == 1) {
        cout << "ya";
    } else {
        cout << "bukan";
    }

    return 0;
}