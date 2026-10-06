#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> seqList(n);
    int lastAnswer = 0;

    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[idx].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = seqList[idx][y % seqList[idx].size()];
            cout << lastAnswer << endl;
        }
    }

    return 0;
}
