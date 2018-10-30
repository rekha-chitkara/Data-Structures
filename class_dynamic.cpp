#include<iostream>
using namespace std;
class matrix
{
	int **mat;
public:
	matrix()
	{
		int i,j;
		mat=new int*[3];
		for(i=0;i<3;i++)
		{
			mat[i]=new int[3];
		}
	}
	void getdata()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>mat[i][j];
			}
		}
	}
	matrix operator+(matrix ob)
	{
		matrix temp;
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				temp.mat[i][j]=mat[i][j]+ob.mat[i][j];
			}
		}
		return temp;
	}
matrix operator-(matrix ob)
	{
		matrix temp;
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				temp.mat[i][j]=mat[i][j]-ob.mat[i][j];
			}
		}
		return temp;
	}
	matrix operator*(matrix ob)
	{
		matrix temp;
		int i,j,k;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				temp.mat[i][j]=0;
				for(k=0;k<3;k++)
				{
					temp.mat[i][j]+=mat[i][k]*ob.mat[k][j];
				}
			}
		}
		return temp;
	}
	void print()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
};
int main()
{
	matrix m,m1,m3;
	m.getdata();
	m1.getdata();
	m3=m+m1;
	m3.print();
	m3=m-m1;
	m3.print();
	m3=m*m1;
	m3.print();
}

