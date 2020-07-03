#include<iostream>
#include <vector>
using namespace std;
int uniquePaths(int m, int n){//递归
    if (m == 0 || n == 0)return 1;
    return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
}
int uniquePathsDP(int m, int n){//动态规划
    vector<vector<int>> dp(m + 1, (vector<int>(n + 1, 1)));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j];
        }
    }
    return dp[m][n];
}
int main(){
    int m, n;
    while (cin >> m >> n){
        cout << uniquePaths(m, n) << endl;
    }
    return 0;
}
