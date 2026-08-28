#include<iostream>
using namespace std;

void cekganjilgenap(int angka) {
    if (angka % 2 == 0) {
        cout << "genap" << endl;
    } else {
        cout << "ganjil" << endl;
    }
}

int main() {
    cekganjilgenap(6);
    cekganjilgenap(7);
    return 0;
}