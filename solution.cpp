#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total = k * (n * (n + 1) / 2);

    int borrow = total - w;

    if (borrow < 0) borrow = 0;

    cout << borrow << endl;

    return 0;
}
