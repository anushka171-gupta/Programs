#include <bits/stdc++.h>
using namespace std;

void f(int a, int b) {
vector<vector<int>> chess(9, vector<int> (9, 0));
        chess[a][b] = 1;
        
    if(a > 2 && a < 7 && b > 2 && b < 7) {
            chess[a-2][b-1] = chess[a+2][b+1] = 2;
        }
        else if(a == 1) {
            if(b == 1) {
                chess[a+1][b+2] = 2;
            }
            else if(b == 8) {
                chess[a+1][b-2] = 2;
            }
            else {
                chess[a+2][b-1] = chess[a+2][b+1] = 2;
            }
        }
        else if(a == 8) {
            if(b == 1) {
                chess[a-1][b+2] = 2;
            }
            else if(b == 8) {
                chess[a-1][b-2] = 2;
            }
            else {
                chess[a-2][b-1] = chess[a-2][b+1] = 2;
            }
        }
        else if(b == 1) {
            chess[a-1][b+2] = chess[a+1][b+2] = 2;
        }
        else if(b == 8) {
            chess[a-1][b-2] = chess[a+1][b-2] = 2;
        }
        else if(a == 2) {
            if(b == 2) {
                chess[a - 1][b + 2] = 2;
                chess[a + 3][b - 1] = 2;
            }
            else if(b == 7) {
                chess[a + 3][b-1] = 2;
                chess[a+1][b+2] = 2;
            }
            else {
                chess[a-1][b-2] = chess[a+1][b+2] = 2;
            }
        }
        else if(a == 7) {
            if(b == 2) {
                chess[a + 1][b+2] = 2;
                chess[a - 3][b-1] = 2;
            }
            else if(b == 7) {
                chess[a+1][b-2] = 2;
                chess[a-3][b+1] = 2;
            }
            else {
                chess[a-1][b-2] = chess[a+1][b+2] = 2;
            }
        }
        else if(b == 2) {
            if(a > 2 && a < 7) {
                chess[a-2][b-1] = chess[a+2][b+1] = 2;
            }
            else {
                chess[a-1][b+2] = chess[a+1][b+2] = 2;
                chess[a-2][b-1] = 2;
            }
        }
        else if(b == 7) {
            if(a > 2 && a < 7) {
                chess[a-2][b-1] = chess[a+2][b+1] = 2;
            }
            else {
            chess[a-1][b-2] = chess[a+1][b-2] = 2;
            chess[a-2][b+1] = 2;
            }
        }
        
        for(int i = 1; i < 9; i++) {
            for(int j = 1; j < 9; j++) {
                cout << chess[i][j] << " ";
            }
            cout << "\n";
        }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        // int a, b; cin >> a >> b;
        for(int i = 1; i < 9; i++) {
            for(int j = 1; j < 9; j++) {
                f(i, j);
                cout << "\n";
            }
        }
    }
    
    return 0;
}