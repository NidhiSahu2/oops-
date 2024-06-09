#include<iostream>
using namespace std;
class complex
{
	private:
	float real;
	float img;
	public:
		complex() :real(0),img(0)
		{
			
		}
		
		complex (float real,float img):real(real),img(img)
		{
			
		}
		friend complex operator +(const complex& obj1,const complex obj2)
		{
			complex temp;
			temp.real=obj1.real+obj2.real;
			temp.img=obj1.img+obj2.img;
			return temp;
		}
		void display()
		{
			if(img<0)
			cout<<"output complex number"<<real<<img<<"i";
			else
			cout<<"output complex number"<<real <<" +"<<img<<"i";
		}
	};
	
	int main()
	{
		complex c1(1.0f ,2.0f);
		complex c2(1.0f ,4.0f);
		
		complex result =c1+c2;
		result.display();
		return 0;
		
	}
