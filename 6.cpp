#include<iostream>
using namespace std;
class complex1
{
	float r;
	float i;
	static int count;
	public:
	complex1(int x,int y)
	{
		r=x;
		i=y;
	}
	void get_complex()
	{
		cin>>r>>i;
	}
	void print_complex()
	{
		cout<<r<<i<<count<<"\n";
	}
	static int get_count()
	{
		return count;
	}
};
int complex1 :: count=30;
int main()
{
	//cout<<complex1::count;//(or)
	complex1 c1(2,3);
	//c1.get_complex();
	c1.print_complex();
	cout<<complex1::get_count();
	//complex c2(2,3);
	//c2.print_complex();
}
