#include<iostream>
using namespace std;
int  occurance(int n,int i,int j)
{
int a[100],occurance=0;
    for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
       occurance++;
    }
    else if(occurance>=0)

   return 1;

    else

    return 0;

    }
}
int main()
{
int a[100],i,j,occurance=0,n;
cout<<"ENTER THE NUMBER OF ELEMENTS";
cin>>n;
cout<<"ENTER THE ELEMENTS";
for(i=0;i<n;i++)
cin>>a[i];
occurance(n,i,j);
return 0;
}
