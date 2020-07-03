#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n];
    for(int i = 0; i < n; i++)
        cin >> a1[i];
    int m;
    cin >> m;
    int a2[m];
    for(int j = 0; j < m; j++)
        cin >> a2[j];
    int a[n+m];
    for(int k = 0; k < n; k++)
        a[k] = a1[k];
    for(int t = n; t < n+m; t++)
        a[t] = a2[t-n+1];
    sort(a, a+n+m); //一般使用前需要对容器进行排序，这样才能实现对整个数组去重。
    int ans=unique(a,a+n+m)-a;
    for(int x = 0; x < ans; x++)
        cout << a[x];
    cout << endl;
    return 0;
}
