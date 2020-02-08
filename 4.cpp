#include<iostream>
#include<conio.h>
#include<string.h>
void ganti(char strs[1000],char huruf_lama,char huruf_baru){
	
	int i,l;
	l=strlen(strs);
	for (i=0;i<l;i++)
	{

		if(strs[i]==huruf_lama){
		
			strs[i]=huruf_baru;
		}
	}
	
	std::cout<<strs;

}
main () 
{
	char str[1000],lama,baru;

	std::cout<<"Masukkan Kata/Kalimat : ";
	gets(str);
	
	std::cout<<"Masukkan huruf yang akan diganti : ";
	std::cin>>lama;
	
	std::cout<<"Masukkan huruf pengganti : ";
	std::cin>>baru;
	
	std::cout<<"Kalimat baru : ";
	ganti(str,lama,baru);
	
}
