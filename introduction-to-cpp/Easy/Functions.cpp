#include <bits/stdc++.h>
using namespace std;

int findGreatest(int a, int b, int c, int d) {
    return max({a, b, c, d});
}

int main() {
    // write your code here
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << findGreatest(a, b, c, d) << endl;
    return 0;
}
