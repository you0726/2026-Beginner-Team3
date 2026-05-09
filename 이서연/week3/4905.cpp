#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Patient {
    string name;
    int age;
    double blood;

    bool operator<(const Patient& p) const {
        if (blood == p.blood) {
            return age < p.age;   // 나이 큰 사람이 우선
        }
        return blood < p.blood;   // 출혈량 큰 사람이 우선
    }
};

int main() {
    int Q;
    cin >> Q;

    priority_queue<Patient> pq;

    for (int i = 0; i < Q; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            Patient p;
            cin >> p.name >> p.age >> p.blood;
            pq.push(p);
        }
        else if (cmd == "pop") {
            if (!pq.empty()) {
                cout << pq.top().name << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}