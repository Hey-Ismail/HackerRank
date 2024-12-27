#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &array, int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (array[mid] >= target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    // write your code here
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<string> ans;
    for (int i = 0; i < q; i++) {
        int index = lowerBound(array, n, queries[i]);
        if (array[index] == queries[i])
            cout << "Yes " << index + 1 << endl;
        else
            cout << "No " << index + 1 << endl;
    }

    return 0;
}