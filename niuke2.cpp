#include <iostream>
#include<iomanip>
  
using namespace std;
  
int main()
{
    int array[1000] = {0};
    int NUM;
    while (cin >> NUM)
    {
        for (int i = 0; i < NUM; ++i)
            cin >> array[i];
        int count1 = 0, count2 = 0, sum = 0;
        for (int i = 0; i < NUM; ++i){
            if (array[i] < 0)
                count1 ++;
             if (array[i] > 0)
                {
                sum += array[i];
                count2 ++;
            }
        }
        
     cout << count1 << " " <<fixed <<setprecision(1)<< 1.0*sum/count2 << endl;
          
          
    }
    return 0;
}