#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], num[n] = {0};
    for (int i = 0; i < n; i++)
    cin >> a[i];
    int max = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
        max = a[j];
    }
    int w = 0;
    while (w < n)
    {
        for (int k = w; k < n; k++)
        {
            if (a[k] > a[w] && a[k] < max)
            num[w]++;
        }
        w++;
    }
    int max_num = num[0];
    for (int l = 0; l < n; l++)
    {
        if(num[l] > max_num)
        max_num = num[l];
    }
    cout << max_num + 2;
    return 0;
}
