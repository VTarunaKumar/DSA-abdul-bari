
#include<stdio.h>
int fact(int n);
int ncr2(int n,int r);
int ncr(int n,int r) 
{
	if( n == r || r == 0){
		return 1;
	}
	else{
		return ncr(n-1,r-1)+ncr(n-1,r);
	}
	
}

int ncr2(int n,int r){
	int a,c,b;
	a = fact(n);
	b = fact(r);
	c = fact(n-r);
	int result = a/(b*c);
	return result;

}
int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return fact(n-1)*n;
	}
}

int main(){
	
	int r =ncr2(6,4);
	printf("%d",r)	;
		return 0;
}
