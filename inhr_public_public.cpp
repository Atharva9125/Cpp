#include<iostream>
using namespace std;
class person
{
          public:
          char name[20],address[20],email_id[50];
          long int mobile_number[10];
};
class student:public person
{
          public:char prn[10],division[20];
                      float grade_point;
                      int sr=0;
          public:
          void getdata()
          {

                          cout<<"enter name"<<endl;
                          cin>>name;
                          cout<<"enter prn"<<endl;
                          cin>>prn;
                          cout<<"enter address"<<endl;
                          cin>>address;
                          cout<<"enter email"<<endl;
                          cin>>email;
                          cout<<"enter division"<<endl;
                          cin>>division;
                          cout<<"enter mobile number"<<endl;
                          cin>>mobile_no;
                          cout<<"enter grade point"<<endl;
                          cin>>grade_point;
               
           }
    void putdata()
    {
               sr++;
               cout<<sr<<setw(14)<<name<<setw(12)<<prn<<setw(8)<<division<<setw(12)<<grade_point<<endl;
    }
     void ptdata()
     {
            st++
               cout<<sr<<setw(14)<<name<<setw(12)<<prn<<setw(8)<<division<<setw(12)<<grade_point<<endl;
};
class employee:public person
{
         public:char designation[10],employee_id[40];
                     float basic_salary,net_salary;
         public:
         void getdata()
         {
                          		float da, hra;
			cout<<"enter name"<<endl;
  		       cin>>name;
                     cout<<"enter designation"<<endl;
          		cin>>designation;
       		cout<<"enter employee id"<<endl;
      			cin>>employee_id;
       		cout<<"enter basic salary"<<endl;
         		cin>>basic_salary;
                     da=basic_salary*0.8;
                     hra=basic_salary*0.2;
                     net_slary=basic_salary+da+hra;
          }
                
            
             int sr=0;
	      count<<"personal data"<<endl;
             cout<<"sr_no"<<setW(10)<<"name"<<setw(15)<<"address"<<setw(15)<<"email"<<setw(20)<<"mobile_no"<<endl;
             for(i=0;i<n;i++)
             {
                   sr++;
                   cout<<sr<<setw(14)<<name<<setw(15)<<address<<setw(20)<<email<<setw(15)<<mobile_number<<endl;
             }
                cout<<"

}
