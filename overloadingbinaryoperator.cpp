#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int getvalue();
		int setvalue();
		friend A operator-(A obj);
	
};
 
int A::setvalue()
{
	int a=100;
}
int A ::getvalue()
{
	cout<<"value is"<<a<<endl;
}
A operator - (A obj)
{
	obj = -(obj);
	return obj;
}
int main()
{
	A a1;
	a1.setvalue();
	a1.getvalue();
	a1=(a1);
	a1.getvalue();
}
