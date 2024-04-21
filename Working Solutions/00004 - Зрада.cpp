#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Функція для знаходження НСД за модифікованим алгоритмом Евкліда
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++) {
        long long count = 0;
        long long sqrtNum = sqrt(numbers[i]);
        for (long long x = 1; x <= sqrtNum; x++) {
            if (numbers[i] % x == 0) {
                if (x >= a && x <= b && numbers[i] / x >= c && numbers[i] / x <= d)
                    count++;
                if (x != numbers[i] / x && numbers[i] / x >= a && numbers[i] / x <= b && x >= c && x <= d)
                    count++;
            }
        }
        long long total = (b - a + 1) * (d - c + 1);
        long long g = gcd(count, total);
        cout << count / g << "/" << total / g << endl;
    }
    return 0;
}