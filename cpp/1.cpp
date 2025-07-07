#include <iostream>
using namespace std;
int main() {

int ft=1;
int st=2;
int next;
int i=1;
int n=7;
while(i<=n)
{
    if(i==1) {
        cout<<ft<<"\t";
    ++i;
continue;
}
if(i==2) {
    cout<<st<<"\t";
    ++i;
    continue;
} 
next=ft+st;
cout<<next<<"\t";
ft=st;
st=next;
++i;

}
















}