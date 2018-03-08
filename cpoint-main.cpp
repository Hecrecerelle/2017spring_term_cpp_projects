#include "cpoint.h"
int main()
{
	cpoint a(20,50);
	cpoint b(a);
	cpoint c=a;
	cout<<"a的坐标是("<<a.getx()<<","<<a.gety()<<")"<<endl;
	cout<<"b的坐标是("<<b.getx()<<","<<b.gety()<<")"<<endl;
	cout<<"c的坐标是("<<c.getx()<<","<<c.gety()<<")"<<endl;
	return 0;
}
