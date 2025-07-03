#include <iostream>
using namespace std;
int main() {

int loop=10;    
cout<<"d1";
sp:
if(loop<=10)
{
    cout<<"d2";
    ++loop;
    goto sp;
}

cout<<"d3";


}