#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> frequency;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        frequency[s]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;

        cout << frequency[query] << endl;
    }

    return 0;
}
