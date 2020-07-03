#include<iostream>
using namespace std;

int main()
{
    int n, iSortFlag, mid;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    cin >> a[i];
    cin >> iSortFlag;
    if (iSortFlag == 0) //升序
    {
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (a[k] < a[j])
                {
                    mid = a[k];
                    a[k] = a[j];
                    a[j] = mid;
                }
            }
        }
    }
    else if (iSortFlag == 1)
    {
        for (int j1 = 0; j1 < n-1; j1++)
        {
            for (int k1 = j1+1; k1 < n; k1++)
            {
                if (a[k1] > a[j1])
                {
                    mid = a[k1];
                    a[k1] = a[j1];
                    a[j1] = mid;
                }
            }
        }
    }
    else
    cout << "Wrong" << endl;
    for (int t = 0; t < n; t++)
    cout << a[t] << ' ';
    return 0;
}
