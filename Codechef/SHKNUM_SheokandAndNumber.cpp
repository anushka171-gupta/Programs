#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string bin = bitset<32>(n).to_string();
        int ones = count(bin.begin(), bin.end(), '1');

        // cout << bin << "\n";
        if(n == 1) {
            cout << 2 << "\n";
        }
        else if(ones == 2) {
            cout << 0 << "\n";
        }
        else if(ones == 1) {
            cout << 1 << "\n";
        }
        else {
            bin = bitset<32>(n).to_string();
            ones = count(bin.begin(), bin.end(), '1');
            for(int i = 31; ones > 2; i--) {
                if(bin[i] == '1') ones--;
                bin[i] = '0';
            }
            int prev = stoll(bin, nullptr, 2);
            bin = bitset<32>(n).to_string();
            
            int c = 0;
            int i = 0;

            for(i = 0; i < 32; i++) {
                if(bin[i] == '1') c++;
                if(c == 2) {
                    bin[i-1] = '1';
                    for(int j = i; j < 32; j++) {
                        bin[j] = '0';
                    }
                    break;
                }
            }
            int next = stoll(bin, nullptr, 2);
            // cout << prev << " " << next << "\n";
            cout << min(n - prev, next - n) << "\n";
        }
    }
    
    return 0;
}