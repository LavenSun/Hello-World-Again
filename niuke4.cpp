#include <iostream>
 
#define E 0.0001 //精度设置
using namespace std;
 
double getCubeRoot(double num)
{
   double x0 = num;
   double result;
  while (1)
  {
 
     result=x0-(x0*x0*x0-num)/(3*x0*x0);   //牛顿迭代 f(x) = x^3-num, f'(x)=3*x^2;x=x-f(x)/f'(x);
  
     if (result*result*result-num < E && result*result*result-num > -E)
         return result;
    else
       x0 = result;
 }
     
}
 
 //计算一个数字的立方根，不使用库函数
//输入:double 待求解参数
//返回值:double  输入参数的立方根，保留一位小数 
int main()
{  
    int number;
    cin >> number;
    printf("%.1f", getCubeRoot(number));
    return 0;
}