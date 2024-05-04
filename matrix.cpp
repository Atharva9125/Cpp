#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
	private:
		int mat[3][3];
	public:
		void input()
		{
			cout<<"enter the matrix element"<<endl;
			for(int i=0;i<3;i++)
			{
				for (int j=0;j<3;j++)
				{
					cin>>mat[i][j];
				}
			}
		}
		matrix operator + (matrix m2)
		{
			matrix t;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					t.mat[i][j] = mat[i][j] + m2.mat[i][j];
				}
			}
				return t;
		}
		matrix operator - (matrix m2)
		{
			matrix t;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					t.mat[i][j] = mat[i][j] - m2.mat[i][j];
				}
			}
				return t;
		}
		matrix operator * (matrix m2)
		{
			matrix t;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					t.mat[i][j] = mat[i][j] * m2.mat[i][j];
				}
			}
				return t;
		}
		void output()
		{
			cout<<"output matrix:"<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<setw(10)<<mat[i][j];
				}					
				cout<<endl;
			}
		}
};
int main()
{
	matrix m1,m2,r1,r2,r3;
	m1.input();
	m2.input();
	r1= m1 + m2;
	r1.output();
	r2= m1- m2;
       r2.output();
	r3 = m1 * m2;
	r3.output();
}	

					

