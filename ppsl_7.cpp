#include <iostream>
using namespace std;
int main()
{
int number;
cout << "Enter a number"<<endl;
cin >> number;
if (number>= 0)
{
cout << "The number"<<number<<"is positive"<<endl;
}
else
{
cout<<"The number"<<number<<"is negative"<<endl;
}
return 0;
}