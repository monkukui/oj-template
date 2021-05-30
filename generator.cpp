#include <iostream>
#include <random>
#include "./xrand.h"
using namespace std;

random_device hoge;
XRand rnd(hoge());

int main() {

    int n = 10;
    cout << n << endl;
    for (int i = 2; i <= n; i++) {
        int p = rnd.NextInt(1, i - 1);
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
