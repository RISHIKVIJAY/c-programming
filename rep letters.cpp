#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,c,count =0;
	char str[100];
	printf("enter the string:");
	gets(str);
	for(i=0;i<strlen(str)/2;i++){
		int c=0;
		for(j=0;j<strlen(str);j++){
			if(str[i]==str[j]){
				c++;
			}
		}
		if(c>1){
		count++;
		}
	}printf("the no of repeated letters:%d",count);
	return 0;
}
 12  
square.cpp
