#include<iostream>
#include<process.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter 1st Number: "<<endl<<"Enter 2nd Number: ";
	cin>>a>>b;
	cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"Enter Your Choice"<<endl;
	cin>>d;
	switch(d)
	{
		case 1:
			c=a+b;
		
		case 2:
			c=a-b;
			
		case 3:
			c=a*b;
		
		case 4:
			c=a/b;
		
		default:
			cout<<"Invalid Output";
	}
	return 0;
}
