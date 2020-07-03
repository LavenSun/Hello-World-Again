#include<iostream>
using namespace std;

int main() //求组合数
{
    int n;
    while(cin >> n)
    {
        int m;
        cin >> m;
        int sum = n + m;
        int sum1 = 1, sum2 = 1, x = 1;
        int small;
        if(n > m)
            small = m;
        else
            small = n;
        int i = small;
        while(i > 0)
        {
            sum1 *= sum;
            sum -= 1;
            sum2 *= x;
            x += 1;
            i--;
        }
        cout << (int)(sum1/sum2) << endl;
    }
    return 0;
}
