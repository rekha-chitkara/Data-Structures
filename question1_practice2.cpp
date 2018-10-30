#include<iostream>
using namespace std;
class electricity
{
public:
       int units;
       void get_units()
       {
         cout<<"Enter The Units"<<endl;
         cin>>units;
       }
};
class more_electricity:public electricity
{
public:
       void bill()
       {
       int total,tax_total;
        if(units<=100)
        {
         total = units*50;
         total = total/100;
         if(total>=250)
         {
          tax_total = total + 15*total/100;
          cout<<"cost upto 100 units is Rs"<<total<<endl;
          cout<<"Bill amount is Rs "<<tax_total<<endl;
         }
         else
         {
          cout<<"cost upto 100 units is Rs"<<total<<endl;
          cout<<"Bill amount is Rs "<<total<<endl;
         }
        }
        if(units>=350)
        {
         total = units*60;
         total = total/100;
         if(total>=250)
         {
          tax_total = total + 15*total/100;
          cout<<"cost upto 100 units is Rs"<<total<<endl;
          cout<<"Bill amount is Rs "<<tax_total<<endl;
         }
         else
         {
          cout<<"cost upto 100 units is Rs"<<total<<endl;
          cout<<"Bill amount is Rs "<<total<<endl;
         }
        }
        }
 };
int main()
{
  more_electricity m1;
  m1.get_units();
  m1.bill();
return 0;
}
