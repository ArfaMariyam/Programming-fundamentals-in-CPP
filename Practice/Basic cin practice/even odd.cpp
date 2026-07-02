#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any number. i will tell you if its a even or odd number: ";
    cin>>number;
    if(number%2==0)
    {
        cout<<"The number is even."<<endl;
    }
    else
    {
        cout<<"The number is odd.";
    }
    return 0;
}