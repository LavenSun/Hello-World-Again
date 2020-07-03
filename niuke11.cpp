#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h>

using namespace std;

int main()
{
    int n, num;
    while(cin >> n)
    {
        int sumOf5 = 0, sumOf3 = 0, sum = 0;
        int pos = 0, neg = 0, deta = 0, count = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            if(num % 5 == 0)
                sumOf5 += num;
            else if(num % 3 == 0)
                sumOf3 += num;
            else{
                if(num > 0)
                    pos += num;
                else
                    neg += num;
                sum += num;
            }
        }
        deta = abs(sumOf5-sumOf3);
        if((sum-deta) % 2 == 0)
        {
            count = (sum+sumOf5+sumOf3)/2;
            if(count == (sumOf3+sum-(count-sumOf5)))
            {
                if(count-sumOf5 >= 0 && pos >= count-sumOf5 || count-sumOf5 < 0 && neg <= count-sumOf5)
                    cout << "true" << endl;    //很多条件限制.
                else
                    cout << "false" << endl;
            }
            else
                cout << "false" << endl;
        }
        else
            cout << "false" << endl;
    }
    return 0;
}
