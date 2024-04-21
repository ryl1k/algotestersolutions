#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long n, b, y;
    cin >> n >> b >> y;
    long long blue_segments = (n + b - 1) / b;
    long long yellow_segments = (n + y - 1) / y;
    long long blue_changes = blue_segments - 1;
    long long yellow_changes = yellow_segments - 1;
    long long overlap_segments = (n + lcm(b, y) - 1) / lcm(b, y);
    long long overlap_changes = overlap_segments - 1;
    long long changes = blue_changes + yellow_changes - overlap_changes;
    cout << changes << endl;
    return 0;
}