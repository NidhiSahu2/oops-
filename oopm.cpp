//using function overloading //

#include<iostream>
using namespace std;
class A
{
	public:
	int showdata( int a , int b)
	{
		return a+b;
		
	}
	int showdata(float c)

		
	{
		return c*c;
	}
};
    int main()
    {
	    A obj;
       obj.showdata(4,6);
       obj. showdata(1.1f);
	   cout<<obj.showdata(4,6)<<endl;
	   cout<<obj.showdata(1.1f)<<endl;
	   
}

