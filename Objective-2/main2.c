#include <stdio.h>
 #include "arraylib.h"
 
 // #CP 
   int main(void) {
       int n ;
       scanf("%d",&n);
       int a[n];
       for(int i=0;i<n;i++){
       	scanf("%d",&a[i]);
	   }
	   int v;
	   scanf("%d",&v);
        
        displayArray(a, n);
        printf("Max at index %d\n", findMaxIndex(a,n));
        printf("Min at index %d\n", findMinIndex(a,n));
        printf("Average of array is %f\n", findAverage(a,n));
        reverseArray(a,n);
        sortArray(a,n);
        if(linearSearch(a,n,v)!=-1)
        printf("the value found at index %d\n",linearSearch(a,n,v));
        else 
        printf("Not found");
        
 return 0;
 }