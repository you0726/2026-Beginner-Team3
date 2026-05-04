#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name;
    map<string, int> m;
    int i = 1;
    while (true) {
        cin >> name;
        if (name == "end") break;

        m[name] = i;
        i++;
    }

    cout << m.size() << "\n";
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}