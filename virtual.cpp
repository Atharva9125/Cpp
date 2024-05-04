#include<iostream>
using namespace std;
class B
{
	public:
		void display()
		{
			cout<<"This is base class"<<endl;
		}
		void New()
		{
			cout<<"This is new base class"<<endl;
		}
		void met()
		{
			cout<<"met"<<endl;
		}
};
class D1:virtual public B
{
	public:
		void display()
		{
			cout<<"This is D1 class"<<endl;
		}
		void New()
		{
			cout<<"This is new D1 class"<<endl;
		}
};
class D2:virtual public B
{
	public:
		void display()
		{
			cout<<"This is D2 class"<<endl;
		}
		void New()
		{
			cout<<"This is new D2 class"<<endl;
		}
};
class D3:public D1,public D2
{
	public:
		void display()
		{
			cout<<"This is D3 class"<<endl;
		}
		void New()
		{
			cout<<"This is new D3 class"<<endl;
		}
};
int main()
{
	B f;
	D3 k;
	D1 i;
	k.met();
	f.display();
	f.display();
}

