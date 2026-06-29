#include<iostream>
using namespace std;

void subtract(int a, int b)
{
        cout<<"The subtract is: "<<a-(-b)<<endl;
    }
    void multiplay(int a, int b)
    {
        cout<<"The multiple is: "<<a*b;
    }
int main()
{
    void subtract(int a, int b);
    void multiplay(int a,int b);
    int a,b; 
    subtract(a=1,b=7);
    multiplay(a,b);
}