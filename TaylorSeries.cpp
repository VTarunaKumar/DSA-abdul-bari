#include<stdio.h>
static int y;
double e(int x,int n){
	static double p = 1;
	static double f = 1;
	double result;
	if(n == 0){
		return 1;
	}
	else {
	result = e(x,n-1);
	p = p*x;
	f = f*n;
	return result+(p/f);		
	}
	
}
double taylor2(int x , int n){
static double s =1;
if(n == 0){
	 return s;
}
 
s= 1+x*s/n;
return taylor2(x,n-1);

}

int main(){
//	printf("%lf",taylor2(1,10));
	printf("%d",y)	;
}
