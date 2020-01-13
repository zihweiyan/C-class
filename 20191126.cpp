#include <iostream>
using namespace std;

int add(int x,int y);

int main(void)
{
	int a, b;
	
	a = 400;
	
	b = add(a, 300);
	
	cout<<b<<endl;
	
	system("pause");
	return 0;
}

int add(int x,int y)
{
	int z;
	
	z=x+y;
	
	return z;
}
