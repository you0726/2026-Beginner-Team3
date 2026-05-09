#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    set<int> S;

    for (int i = 0; i < num; i++) {
        string s;
        int val;

        cin >> s >> val;

        if (s == "i") {
            S.insert(val);
        }
        else {
            S.erase(val);
        }
    }

    for (auto& w : S) {
        cout << w << " ";
    }
    return 0;
}