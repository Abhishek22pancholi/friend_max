#include<iostream>
using namespace std;
class abc;
class xyz
{
	int x;
	public:	
	    void setvalue(int i)
	    {
	    	x=i;
		}
		friend void max(xyz,abc);
};
class abc
{
	int a;
	public:
		void setvalue(int i)
		{
			a=i;
		}
		friend void max(xyz,abc);
};
void max(xyz m,abc n)
{
	if(m.x>=n.a)
	cout<<m.x;
	else
	cout<<n.a;
	
}
int main()
{
	xyz obj1;
	abc obj2;
	obj1.setvalue(10);
	obj2.setvalue(20);
	max(obj1,obj2);
	
}
