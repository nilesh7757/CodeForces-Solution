#include <iostream>
#include <string>
using namespace std;

string find_number(int n, int t) {
    if (t == 10 && n == 1) {
        return "-1";
    }
    if (t == 10) {
        return "1" + string(n - 1, '0');
    }
    return to_string(t) + string(n - 1, '0');
}

int main() {
    int n, t;
    cin >> n >> t;
    cout << find_number(n, t) << endl;
    return 0;
}
