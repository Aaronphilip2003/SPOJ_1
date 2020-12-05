#include <iostream>
using namespace std;
int main() {
 int a[100],i=0,k=0;
cout<<"Enter numbers:"<<"\n";
for(i=0;i<100;i++)
{
 cin>>a[i];
 if(a[i]==42)
 {
 k=i;
 break;
 }
}
cout<<"------------------------------------------------"<<"\n";
for(i=0;i<k;i++)
cout<<a[i]<<"\n";
}