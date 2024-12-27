#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    int q;
    cin >> q;
    map<string, int> student_marks;

    for (int i = 0; i < q; ++i) {
        int type;
        string name;
        cin >> type >> name;

        if (type == 1) {
            int marks;
            cin >> marks;
            student_marks[name] += marks;
        } else if (type == 2) {
            student_marks.erase(name);
        } else if (type == 3) {
            cout << student_marks[name] << endl;
        }
    }

    return 0;
}
