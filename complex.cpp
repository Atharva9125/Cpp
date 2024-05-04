#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
	public:
		Complex():real(0),imag(0){}
		void input()
		{
			cout<<"Enter real and imaginary parts respectively:";
			cin>>real;
			cin>>imag;
		}
		Complex operator -(Complex c2)
		{
			Complex temp;
			temp.real = real - c2.real;
			temp.imag = imag - c2.imag;

			return temp;
		}
              Complex operator +(complex c2)
		{
			complex t;
			t.real=real-c2.real;
			t.imag=imag-c2.imag;
			return t;
		}
		void output()
		{
			if(imag<0)
				cout<<"Output Complex number:"<<real<<imag<<"i"<<endl;
			else
				cout<<"Output Complex number:"<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	Complex c1,c2,result,r;
	cout<<"Enter first complex number:"<<endl;
	c1.input();
	cout<<"Enter second complex number:"<<endl;
	c2.input();	
	result = c1-c2;
	result.output();
	r=c1+c2;
	r.output();
}
