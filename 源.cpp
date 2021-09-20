#include<iostream>  
using namespace std;
int sum(int,int);
int main()
{
    int a,b,c;
    cout << "Enter two numbers:";
    cin >> a >> b ;
    c = sum(a, b);
    cout << "sum is:" << c;
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
