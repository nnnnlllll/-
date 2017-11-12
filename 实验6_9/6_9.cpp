#include <iostream.h>
void fun(int);
void main()
{
	int m;
	cout<<"请输入一个整数m："<<endl;
	cin>>m;
	fun(m);
}
void fun(int m)
{
	int i,x,y,n=0,leap;
	for(i=1;i<=m;i++)
	{
		x=i%7;
		y=i%11;
		if(x==0||y==0)
		{
			leap=1;
			n++;
			cout<<i<<endl;
		}
	}
	cout<<"n="<<n<<endl;
}