#include "cpoint.h"
int main()
{
	cpoint a(20,50);
	cpoint b(a);
	cpoint c=a;
	cout<<"a��������("<<a.getx()<<","<<a.gety()<<")"<<endl;
	cout<<"b��������("<<b.getx()<<","<<b.gety()<<")"<<endl;
	cout<<"c��������("<<c.getx()<<","<<c.gety()<<")"<<endl;
	return 0;
}
