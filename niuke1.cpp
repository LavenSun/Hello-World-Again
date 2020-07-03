#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string a;
    getline(cin,a);
    int n = a.length() - 1;
    for (int i = n; i >= 0; i--)
    {
        cout << a[i];
    }
     
    return 0;
}
