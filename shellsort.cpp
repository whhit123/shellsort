#include <iostream>

using namespace std;

bool myless(int a, int b)
{
	return (a<b)?true:false;
}

void exch(int a[], int n,int m)
{
	int temp;
	temp = a[n];
	a[n] = a[m];
	a[m] = temp;
}

void shellsort(int a[], int len)
{
	int h = 1;
	int i,j;
	while(h<len/3) h = 3*h+1;
	while(h>=1)
	{
		for(i = h;i<len;i++)
			for(j = i;(j>=h)&&myless(a[j],a[j-h]);j--)
				exch(a,j,j-h);
		h = h/3;
	}
}
int main()
{
	int a[11] = {4,3,2,1,6,5,7,6,8,0,9};
	//insertsort(a,11);
	shellsort(a,11);
	int i = 0;
	while(i<11)
		cout<<a[i++]<<endl;
}

