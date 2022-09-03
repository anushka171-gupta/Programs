#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, H, M; cin >> n >> H >> M;
        vector<vector<int>> time(n, vector<int> (2));
        for(int i = 0; i < n; i++) {
            cin >> time[i][0] >> time[i][1];
        }

        sort(time.begin(), time.end());
        int h = -1, m = -1;
        for(int i = 0; i < n; i++) {
            if(time[i][0] == H) {
                if(time[i][1] >= M) {
                    h = 0;
                    m = time[i][1] - M;
                    break;
                }
            }
            else if(time[i][0] > H) {
                h = time[i][0] - H;
                if(time[i][1] > M) {
                    m = time[i][1] - M;
                    break;
                }
                else {
                    m = 60 - (M - time[i][1]);
                    h--;
                    break;
                }
            }
        }
        if(h == -1) {
            h = time[0][0] + (24 - H);
            if(time[0][1] > M) {
                m = time[0][1] - M;
            }
            else {
                m = 60 - (M - time[0][1]);
                h--;
            }
        }
        
            if(m >= 60) {
                m -= 60;
                h++;
            }
        cout << h << " " << m << "\n";
    }

    return 0;
}