#include<iostream>
using namespace std;
int btod(int n)
{
		int p=1,r,b=0;
	while(n>0)
	{
	r=n%8;
	b=b+r*p;
	n=n/8;
	p=p*10;
	}
	cout<<b;
}

int main()
{
	int n,b,p,r;
	cin>>n;
	btod(n);
	return 0;
}
