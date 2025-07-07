#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter input";
    cin>>number;

    (number>10 && number<20 && number%3==0 && number%5==0)?
cout<<"even":cout<<"odd";
}