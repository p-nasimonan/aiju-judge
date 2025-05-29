# include <iostream>
using namespace std;

int culc_gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return culc_gcd(y, x % y);
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << culc_gcd(x, y) << endl;
    return 0;
}