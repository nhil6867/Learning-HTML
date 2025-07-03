#include <iostream>
using namespace std;
int main()
{
   int grade;
   cout<< "enter marks ";
   cin>> grade;
   if (grade>80 || grade<=100)
   {
      cout<<"A";
}
else if (grade>60 || grade<=80) 
{
   cout<<"B";
}
else if (grade>30 || grade<=60) 
{
   cout<<"C";
}
else

{
   cout<<"D";
}

}