#include "bits/stdc++.h"
using namespace std;
int n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int ans = 0;
    while (n--) {
        int num;
        cin >> num;
        if(num == 1) continue;
        ans++;
        for (int i = 2; i < num; i++) {
            if(num % i == 0) {
                ans--;
                break;
            }
        }
    }
    cout << ans;
}