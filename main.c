#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int number1;
	
	printf("Bir Sayý Giriniz: ");
	scanf("%d",&number1);
	
	if(number1%2==0){
		
		printf("Sayý Çift");
	}
	else{
		printf("Sayý Tek");
	}
}
