#include<stdio.h>
static int val[100];
int Mfib(int n){
	if(n<=1){
		return n;
	}
	   
	if(val[n] != 0){
		return val[n];
	}
	else
	  {
	  val[n] =	Mfib(n-2)+Mfib(n-1);
	  return val[n];
	  }
	
	return 0;
}
int Rfib(int n){
   if(n<=1){
   	return n;
   }
   else{
   	return Rfib(n-2)+Rfib(n-1);
   }


}
int main(){
	int n =6;
	printf("%d",Rfib(n));
}
