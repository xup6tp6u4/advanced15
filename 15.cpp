#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("By 3A713231\n\n");
	char arr[]="Taiwan, Touch, Your, Heart";
	char *ptr;
	int i;
	int len;
	
	len=strlen(arr);
	ptr=arr;
	
	for(i=0;i<len;i++){
		
		if(*(ptr+i)>64 && *(ptr+i)<90){
			printf("%c", *(ptr+i));
		}
		else if(*(ptr+i)>96 && *(ptr+i)<123){
			printf("%c", *(ptr+i));
		}
		else if(*(ptr+i)==32){
			printf("%c", *(ptr+i));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
