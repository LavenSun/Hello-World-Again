#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        int l = str.size();
        if(str[0] >= '0' && str[0] <= '9')
            cout << "*";
        for(int i = 0; i < l; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'z' && str[i+1] >= '0' && str[i+1] <= '9')
                cout << str[i] << "*";
            else if(str[i+1] >= 'A' && str[i+1] <= 'z' && str[i] >= '0' && str[i] <= '9')
                cout << str[i] << "*";
            else
                cout << str[i];
        }
        if(str[l-1] >= '0' && str[l-1] <= '9')
            cout << "*";
    }
    return 0;
}
