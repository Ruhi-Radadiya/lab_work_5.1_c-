//1. WAP to find sum of all three number’s cubes by
//implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in
//integer data type
//- Class Y has following members: setData() and
//getData() methods
#include<iostream>
using namespace std;

class X{
	public:
		int a;
		int b;
		int c;	
};
class Y : public X
{
	public:
		void setData(){
			cout<<"Enter A:";
			cin>>a;
			cout<<"Enter B:";
			cin>>b;
			cout<<"Enter C:";
			cin>>c;	
		}
		void getData(){
			cout<<"______________"<<endl;
			cout<<"CUBE of A is:"<<a*a*a<<endl;
			cout<<"CUBE of B is:"<<b*b*b<<endl;
			cout<<"CUBE of C is:"<<c*c*c<<endl;	
		}
};
int main(){
	Y y1;
	y1.setData();
	y1.getData();
	
	return 0;
}