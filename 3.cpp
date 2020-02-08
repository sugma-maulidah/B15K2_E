#include<iostream>
#include<conio.h>
#include<string.h>

int strings(char str[100] )
{
	int i;
	int l=strlen(str);
	strupr(str);
	int jum=0;
	for(i=0; i<l; i++)
		{
			if(str[i]=='A'||str[i]=='I'||str[i]=='U'||str[i]=='E'||str[i]=='O')
			{
				 jum++;	
			}
	
		}
	return (jum);
}

int main()
{
 char strs[100];
 int i, jum, l;
 std::cout<<"Please Enter Any phrase : ";
 gets(strs);
 
	std::cout<<"number of vowels : "<<strings(strs);
}
