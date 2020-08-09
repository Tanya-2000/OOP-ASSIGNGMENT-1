#include<iostream>
using namespace std;
class Area
{
float width,length,areaofrec;
public:
area()
{
width=1;
length=1;
areaofrec=0;
}
void setwidth()
{
again:
cout<<"enter width of rectangle";
cin>>width;
if(width<0 || width >20)
{
cout<<"enter the valid input";
goto again;
}}
void setlength()
{
again:
cout<<"enter length of rectangle";
cin>>length;
if(length<0||length>20)
{
cout<<"enter the valid input"<<endl;
goto again;
}}
void calculation()
{
areaofrec=width*length;
};
void display()
{
    cout<<"area of rectangle is"<<endl;

}};
main()
{
    again:
        area c;
        char ask;
        c.setwidth();
        c.setlength();
        c.calculation();
        c.display();
        cout<<"ask if you want to calculate again?Y/N";
        cin>>ask;
        if(ask=='y'||ask=='y')
        {

            goto again;
        }
}
