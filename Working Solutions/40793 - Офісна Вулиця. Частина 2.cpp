#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    vector<pair<double, int>> companies(n);
    for (int i = 0; i < n; i++) {
        companies[i] = { (double)w[i] / l[i], i + 1 };
    }

    sort(companies.rbegin(), companies.rend());

    for (int i = 0; i < n; i++) {
        cout << companies[i].second << " ";
    }
    cout << endl;

    return 0;
}