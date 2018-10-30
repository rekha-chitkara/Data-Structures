#include<iostream>
using namespace std;
class complex
{
private:
int re,im;
public:
complex():re(0),im(0)
{

}
complex(int d,int f)
{
re=d;
im=f;
}
complex operator+(complex &ob)
{
complex temp;
temp.re=ob.re+re;
temp.im=ob.im+im;
return temp;
}
complex operator-(complex &ob)
{
complex temp;
temp.re=ob.re-re;
temp.im=ob.im-im;
return temp;
}
complex operator*(complex &ob)
{
complex temp;
temp.re=ob.re*re;
temp.im=ob.im*im;
return temp;
}
complex operator/(complex &ob)
{
complex temp;
temp.re=ob.re/re;
temp.im=ob.im/im;
return temp;
}
void print()
{
cout<<re<<"+i"<<im<<endl;
}
};
int main()
{
complex ob(4,5);
complex ob1(5,6);
complex ob2;
ob2=ob+ob1;
ob2.print();
ob2=ob-ob1;
ob2.print();
ob2=ob*ob1;
ob2.print();
ob2=ob/ob1;
ob2.print();
return 0;
}
