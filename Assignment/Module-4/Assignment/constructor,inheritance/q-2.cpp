//q-2Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class add{
	public:
		add()
		{
			cout<<"Addition Two Number"<<endl;
		
		
			int a,b;
			
			cout<<"Enter Number : ";
			cin>>a;
			cout<<"Enter Number : ";
			cin>>b;
			{
				cout<<a+b<<endl;
			}
		}
};
	class subtraction{
	public:
		subtraction()
		{
			cout<<"subtraction Two Number"<<endl;
			
			int a,b;
		
			cout<<"Enter Number : ";
			cin>>a;
			cout<<"Enter Number : ";
			cin>>b;
			
			{
				cout<<a-b<<endl;
			}
		}		
};
class multiplication{
	public:
		multiplication()
		{
			cout<<"multiplication Two Number"<<endl;
			
			int a,b;
		
			cout<<"Enter Number : ";
			cin>>a;
			cout<<"Enter Number : ";
			cin>>b;
			
			{
				cout<<a*b<<endl;
			}
		}		
};
class Division{
	public:
		Division()
		{
			cout<<"Division Two Number"<<endl;
			
			int a,b;
		
			cout<<"Enter Number : ";
			cin>>a;
			cout<<"Enter Number : ";
			cin>>b;
			
			{
				cout<<a/b<<endl;
			}
		}		
};
main()
{
    add obj;
    subtraction obj1;
    multiplication obj2;
	Division obj3;	
}
