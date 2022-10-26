#include<stdio.h>

void funB(int x);



void funA(int x){
	if(x>0){
		printf("%d\n",x);
		funB(x-1);
	}
}



void funB(int x){
	if(x>1){
		printf("%d\n",x);
		funA(x/2);
	}
}

int main(){
  funA(20);
	
	return 0;
}
