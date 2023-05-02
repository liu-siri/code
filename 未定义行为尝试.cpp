#include <iostream>
using namespace std;
int main()
{
 int x;
 cin>>x;
 if(x+1<x)
  cout<<"Overflow!"<<endl;
 else
  cout<<"Not overflow!"<<endl;
 return 0;
}
