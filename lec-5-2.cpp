//2. WAP to convert given degree celsius temperature into
//fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:
//Class P -> Class Q -> Class R
//- Class P has following members: temperature
//attribute in float
//- Class Q has following members: toFehrenheit()
//method
//- Class R has following members: toKelvin() method
#include<iostream>
using namespace std;

class p{
	public:
		float celsius;
		
		void tempreture(){
		cout<<"Enter celsius:";
		cin>>celsius; 	
		}
};
class q : public p
{
	public:
	void tofehrenheit(){
		cout<<"fehrenheit :"<<(celsius*9/5)+32<<endl;
	}
};
class r : public q
{
	public:
	void toKelvin(){
		cout<<"kelvin :"<<(celsius+273.15)<<endl;
	}	
};
int main(){
	r r1;
	r1.tempreture();
	r1.tofehrenheit();
	r1.toKelvin();	
	return 0;
}