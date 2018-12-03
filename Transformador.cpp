#include <iostream>
using namespace std;
void transformar(int tiempo);
int transformar(int h,int m,int s);

int main()
{
	return 0;
}

int transformar(int h,int m,int s)
{
	int tiempo;
	h*=3600;
	m*=60;
	tiempo=h+m+s;
	return tiempo;
}

void transformar(int tiempo)
{
	int h,m,s;
	s=tiempo;
	h=s/3600;
	s%=3600;
	m=s/60;
	s%=60;
	cout << "tiempo: " << h << ":" << m << ":" << s << endl;
}
