#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int ans = 0;
    while(x > 0) {
        ans+=(x%2);
        x/=2;
    }
    cout << ans;
    return 0;
}