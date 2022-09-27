#include<stdio.h>
int main()
{
	int a,b,c,j;
	printf("enter the numbers:");
	scanf("%d %d",&a,&b);
	printf("enter 1(add),2(sub),3(mul),4(div):");
	scanf("%d",&c);
	if(c ==1){
		j = a+b;
		printf("%d +%d =%d",a,b,j);
	}else if(c==2){
		j =a -b;
		printf("%d -%d =%d", a,b,j);
	}else if(c ==3){
		j = a*b;
		printf("%d*%d =%d",a,b,j);
	}else if(c ==4){
		j = a/b;
		printf("%d /%d =%d",a,b,j);
	}else{
		printf("invalid input");
	}return 0;
}
