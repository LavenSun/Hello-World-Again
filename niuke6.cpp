#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string a;
    int num;
    while (cin >> num)
    {
        for (int i = 0; i < num; i++)
        {
            cin >> a;
            if (a.size() == 0)
            break;
            int count = a.size() / 8;
            int res = a.size() % 8;
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    cout << a[i * 8 + j];
                }
                cout << endl;
            }
 
            for (int i = count * 8; i < a.size(); i++)
            {
                cout << a[i];
            }
            if (res > 0)
            {
                for (int i = 0; i < 8 - res; i++)
                 cout << '0';
                cout << endl;
            }
        }
    }
    return 0;
}