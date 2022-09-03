// 1611C_PolycarpRecoversThePermutation.cpp
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<int> dq;
        int a, maxi = -1e9;;
        for(int i = 0; i < n; i++) {
            cin >> a;
            maxi = max(maxi, a);
            dq.push_back(a);
        }

        if(maxi != dq.back() && maxi != dq.front()) {
            cout << -1 << "\n";
            continue;
        }
        deque<int> x;
        int temp;
        while(!dq.empty()) {
            if(dq.front() < dq.back()) {
                temp = dq.front();
                dq.pop_front();
                x.push_front(temp);
            }
            else {
                temp = dq.back();
                dq.pop_back();
                x.push_back(temp);
            }
        }

        while(!x.empty()) {
            cout << x.front() << " ";
            x.pop_front();
        }

        cout << "\n";
    }

    return 0;
}