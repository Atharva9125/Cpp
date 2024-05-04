#include<iostream>
using namespace std;
const int max_size=10;
struct Product
{
	int id;
	char name;
	float price,gst,tprice;
};
	Product p[max_size];
	int temp=0,next=-1,choice;
       while(temp!=2)
	{
		cout<<"enter the choice1.insert,2.delete,3.display"<<endl;
		cin>>choice;
	switch(choice)
	{
		case 1:
		if(next==max_size)
		{
			cout<<"list is full"<<endl;

		}
		else
		{
			next++;
			cout<<"enter the product name:"<<endl;
			cin>>p[next].name;
			cout<<"enter the product id:"<<endl;
			cin>>p[next].id;
			cout<<"enter the product price:"<<endl;
			cin>>p[next].price;
			cout<<"enter the product gst in percentage:"<<endl;
			cin>>p[next].gst;
			p[next].tprice=p[next].price*p[next].gst/100;
		}
		break;

                case 2:
                if(next==-1)
                 {
                         cout<<"list in underflow"<<endl:
                  }
		else
		{
			next--;
		}
		case 3:
		if(next==-1)
		{
			cout<<"list is empty"<<endl;

		}
		else
		{
			for(int i=0;i=next;i++)
			{
				cout<<"product name.................."<<p[i].name<<endl;
				cout<<"product id........................."<<p[i].id<<endl;
				cout<<"product price...................."<<p[i].price<<"rs."<<endl;
				cout<<"product gst........................"<<p[i].gst<<"%"<<endl;
				cout<<"product total price............"<<p[i].tprice<<"rs."<<endl;
			}
		}
			break;
		default:
				 cout<<"wrong choice";
		berak;
	}
   }
}
