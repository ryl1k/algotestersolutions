#include <iostream>
#include <vector>
using namespace std;

void buildTree(vector<long long>& tree, vector<long long>& a, int node, int start, int end) {
    if (start == end) {
        tree[node] = a[start];
        return;
    }
    int mid = (start + end) / 2;
    buildTree(tree, a, 2 * node, start, mid);
    buildTree(tree, a, 2 * node + 1, mid + 1, end);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

void updateTree(vector<long long>& tree, int node, int start, int end, int idx, long long val) {
    if (start == end) {
        tree[node] += val;
        return;
    }
    int mid = (start + end) / 2;
    if (idx <= mid)
        updateTree(tree, 2 * node, start, mid, idx, val);
    else
        updateTree(tree, 2 * node + 1, mid + 1, end, idx, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

long long queryTree(vector<long long>& tree, int node, int start, int end, int l, int r) {
    if (r < start || end < l)
        return 0;
    if (l <= start && end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    long long leftSum = queryTree(tree, 2 * node, start, mid, l, r);
    long long rightSum = queryTree(tree, 2 * node + 1, mid + 1, end, l, r);
    return leftSum + rightSum;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> tree(4 * n);
    buildTree(tree, a, 1, 0, n - 1);
    for (int i = 0; i < m; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            l--, r--;
            cout << queryTree(tree, 1, 0, n - 1, l, r) << endl;
        }
        else {
            int idx, d;
            cin >> idx >> d;
            idx--;
            updateTree(tree, 1, 0, n - 1, idx, d);
        }
    }
    return 0;
}