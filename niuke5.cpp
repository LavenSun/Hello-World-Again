#include<iostream>
using namespace std;

//从输入任意个整型数，统计其中的负数个数并求所有非负数的平均值，结果保留一位小数
//如果没有非负数，则平均值为0 
int main()
{
    int x, count = 0, positive_count = 0, negative_count = 0;
    double ave = 0.0;
    while (cin >> x)
    {
        if (x >= 0)
        {
            positive_count++;
            ave+=x;
        }
        else
            negative_count++;
    }
    if (positive_count == 0)
    {
        cout << negative_count << endl;
        cout << 0;
    }
    else
    {
        cout << negative_count << endl;
        printf("%.1f", ave/positive_count);
    }
    return 0;
}