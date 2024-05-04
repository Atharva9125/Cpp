#include<iostream>
using namespace std;
const int pi=3.14;
class circle
{
	private:
			float centerX,centerY,radius,circumference,area;
	private:
			float caclarea()
			{
				area = pi*rad*rad;
				cout<<"Area of circle ="<<area<<endl;
			}
			float caclcircumference()
			{
				float circumference;
				circumference = 2*pi*rad;
				cout<<"Circumference of circle ="<<circumference<<endl;
			}
			circle()
			{
				rad =10;		
			}
			circle(float cx,float cy)
			{
				centerX=cx;
				centerY=cy;
				rad=40;
			}
			circle(float cx, float cy, float rad)
			
				centerX=cx;
				centerY=cy;

			
			}
};
int main()
{
	circle c1;
	int area,x,y;
	cout<<"Enter the x coordinate:"<<endl;
	cin>>x;
	cout<<"Enter the y coordinate:"<<endl;
	cin>>y;
	cout<<"Enter the radius:"<<endl;
	cin>>rad;
	c1.circle();
	c1.caclarea(();
	c1.caclcircumference();
	c1.circle(x,y);
	c1.caclarea();
	c1.caclcircumference();
	c1.circle(x,y,area);
	c1.caclarea();
	c1.caclcircumference();
