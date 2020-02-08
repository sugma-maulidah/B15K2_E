#include <conio.h>
#include <stdio.h>
int FIBONACCI(int baris,int kolom)
{
    int i,j, fibo[1000];

    fibo[1]=0;
    fibo[2]=1;
    for(i=3;i<=baris*kolom;i++){
    	fibo[i]=fibo[i-2]+fibo[i-1];
	}
	
	int count=1;
	for(i=1;i<=baris;i++){
		for(j=1;j<=kolom;j++){
			printf("%d, ", fibo[count]);
			count++;
		}
		printf("\n");
		
	}
}
main(){
	
	int i,j,bar,kol, fibo[1000];

    printf("Masukkan jumlah baris : ");scanf("%d",&bar);
    printf("Masukkan jumlah kolom : ");scanf("%d",&kol);
    printf("\n");
    FIBONACCI(bar,kol);
    
}
	
	
      

