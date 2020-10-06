2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
#include<iostream>
 
using namespace std;
 
int main()
{
	int a[20],n,x,i,flag=0;
	cout<<"How many elements?";
	cin>>n;
	cout<<"\nEnter elements of the array\n";
	
	for(i=0;i<n;++i)
		cin>>a[i];
	
	cout<<"\nEnter element to search:";
	cin>>x;
	
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";
		
	return 0;
}
