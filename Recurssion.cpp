#include<stdio.h>
static int n =0;
int fun(int x){
	
	if(x>0){
		n++;
		return fun(x-1)+n;
	}
	return 0;
	
}

int main(){
	 int a ;
	 a = fun(5);
	 printf("%d\n",a);
	 a = fun(5);
	 printf("%d\n",a);
	return 0;
}
