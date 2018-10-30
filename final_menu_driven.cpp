//virtual base class prog
#include<iostream>               //array of students and sorting along
//with deletion using constructors
#include<string.h>
#include<iomanip>
using namespace std;
class student
{
        protected:
        int roll;
        string name;
        public:
        student()
        {}
        student(int r,string nme)
        {
        roll=r;
        name=nme;
        }
};

class test:virtual public student
{
        protected:
        int sub1,sub2,sub3;
        public:
        test()
        {}
        test(int r,string name,int m1,int m2,int m3):student(r,name)
        {
        sub1=m1;
        sub2=m2;
        sub3=m3;
        }
};

class sport:virtual public student
{
        protected:
        int marks;
        public:
        sport()
        {}
        sport(int r,string name,int m):student(r,name)
        {
        marks=m;
        }
};

class result:public test,public sport
{
        int total;
        public:
        result()
        {
        }
        result(int r,string name,int a1,int a2,int a3,int
a4):test(r,name,a1,a2,a3),sport(r,name,a4),student(r,name)
        {
        }
                void printdata()
                {
                total=sub1+sub2+sub3+marks;
                }
                        void sort(result ob[100],int &a)
                        {
                        int i,j;
                        result temp;
                        for(i=0;i<a-1;i++)
                        {
                        for(j=0;j<a-i-1;j++)
                        {
                        if(ob[j].name>ob[j+1].name)
                        {
                        temp=ob[j];
                        ob[j]=ob[j+1];
                        ob[j+1]=temp;
                        }
                        }
                        }
        cout<<left<<setw(25)<<"name"<<left<<setw(25)<<"roll"<<left<<setw(25)<<"total"<<endl;
                        for(i=0;i<a;i++)
                        {
                        cout<<left<<setw(25)<<ob[i].name<<left<<setw(25)<<ob[i].roll<<left<<setw(25)<<ob[i].total<<endl;
                        }
                        }
                                void del(result ob1[100],int &z)
                                {
                                cout<<"enter the name of student you want to delete:\n";
                                cin>>name;
                                int i,p,j;
                                for(i=0;i<z;i++)
                                {
                                if(ob1[i].name==name)
                                {
                                p=i;
                                for(j=z-1;j>p;j--)
                                {
                                ob1[j-1]=ob1[j];
                                }
                                z--;
                                }
                                }
                                cout<<left<<setw(25)<<"name"<<left<<setw(25)<<"roll"<<left<<setw(25)<<"total"<<endl;
                                for(i=0;i<z;i++)
                                {
                                cout<<left<<setw(25)<<ob1[i].name<<left<<setw(25)<<ob1[i].roll<<left<<setw(25)<<ob1[i].total<<endl;
                                }
                                }
};

int main()
{
        int i,n,option,r,m1,m2,m3,m4;
        string name;
        cout<<"enter the number of sudents:\n";
        cin>>n;
        cout<<"enter the option:\n";
        cin>>option;
        result ob[100];
        cout<<"enter the data of student:\n";
        for(i=0;i<n;i++)
        {
                cin>>r>>name>>m1>>m2>>m3>>m4;
                ob[i]=result(r,name,m1,m2,m3,m4);          //method to call
//parametrized for array
                ob[i].printdata();
        }
        result ob1;
        while(option<=2&&option>0)
        {
        switch(option)
        {
        case 1:
        ob1.sort(ob,n);
        break;
        case 2:
        ob1.del(ob,n);
        break;
        }
        cin>>option;
        }
        return 0;
}
