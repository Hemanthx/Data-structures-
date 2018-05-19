#include<bits/stdc++.h>
using namespace std;
bool isAlphabet(char x)
{
	return ( (x>='A'&& x<='Z') || (x>='a' && x<='b') );
}

void pali(char str[])
{
	int n = strlen(str)-1;
	int m =0;
	cout<<n;
	cout<<m;
	while(m<n)
	{
		if(!isAlphabet(str[m]))
			m++;
		else if(!isAlphabet(str[n]))
			n--;
		else
		{

			swap(str[m],str[n]);
			m++;
			n--;
		}
	}
}
int main()
{
	char str[] = "a!!!b.c.d,e'f,ghi";
	pali(str);
	cout<<"\n Reversed string"<<str;
	return 0;

}
