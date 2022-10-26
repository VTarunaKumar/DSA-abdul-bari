#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;0
	int A[5]={1,2,3,4,5};
	int i;
	 p =(int *) malloc(5*sizeof(int));
	 p[0]= 1;
	  p[1]= 2;
	   p[2]= 3;
	    p[3]= 4;
	     p[4]= 5;	
	     for(i = 0;i<5;i++){
	     	printf("%d \n",A[i]);
		 }
		 for(i = 0;i<5;i++){
	     	printf("%d ",p[i]);
		 }
}
