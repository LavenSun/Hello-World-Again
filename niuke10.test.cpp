#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
    string a[n];
    int x[n];
    for(int y = 0; y < n; y++)
        x[y] = 0;
    int invalid;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    string b[m];
    for(int j = 0; j < m; j++)
        cin >> b[j];
    for(int k = 0; k < n; k++)
    {
        for(int t = 0; t < m; t++)
        {
            if(b[t] == a[k])
                x[k]++;
        }
    }
    int sum = 0;
    for(int s = 0; s < n; s++)
        sum += x[s];
    invalid = m - sum;
    for(int l = 0; l < n; l++)
    {
        cout << a[l] << " : " << x[l] << endl;
    }
    cout << "Invalid : " << invalid << endl;
    }
    return 0;
}