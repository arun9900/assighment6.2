#include<iostream>
using namespace std;
void TOH(int n,char beg,char aux,char end);
int main()
{
	int n;
	cout<<"enter the number of disk";
	cin>>n;
	
	/*char x=1;
	char y=2;
	char z=3;*/
	TOH(n,'a','b','c');
	
}


void TOH(int n, char beg,char aux,char end)
{
	
	if(n>=1)
	{
		TOH(n-1,beg,end,aux);
		printf("disk move %c to %c\n",beg,end);
		TOH(n-1,aux,beg,end);
		
	}
	
}
