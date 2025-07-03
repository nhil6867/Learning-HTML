# include <iostream>
using namespace std;
int main()
{
int number=7;
int count=0;
for(int i=1;i<=8;++i)
{
if(number%i==0)
{count++;
}
}
if(count==2) {
    cout<<"Prime number";
}
else {cout<<"Not Prime";
}
}