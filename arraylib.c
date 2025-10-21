#include "arraylib.h"
#include <stdio.h>

     int findMaxIndex(int arr[], int size){
     	int a=0;  //returns the index of max number
     	for(int i=0;i<size;i++){
     		if(arr[i]>arr[a]){
     			a=i;
			 }
		 }
		 return a;
	 }
	  int findMinIndex(int arr[], int size){
	  	int a=0;  //returns the index of min number
     	for(int i=0;i<size;i++){
     		if(arr[i]<arr[a]){
     			a=i;
			 }
		 }
		 return a;
	  }
	  float findAverage(int arr[], int size){
	  	float avg=0.0;
	  	for(int i=0;i<size;i++){
	  		avg=avg+arr[i];
	  	}
	  	avg=avg/size;
	  	return avg;
	  }
	  void displayArray(int arr[], int size){
	  	printf("{ ");
	  	for(int i=0;i<size;i++){
	  		if(i==size-1){
	  			printf("%d",arr[i]);
			  }
			  else
			  printf("%d,",arr[i]);
		  }
		  printf("}\n");
	  }
	  void reverseArray(int arr[], int size){
	  	for(int i=0;i<size/2;i++){
	  		if(size%2==0){
	  			int t=arr[size-1-i];
	  			arr[size-1-i]=arr[i];
	  			arr[i]=t;
			  }
			  else{
			  	int t=arr[size-1-i];
	  			arr[size-1-i]=arr[i];
	  			arr[i]=t;
			  	if(i==size/2)
			  	continue;
			  }
			  
		  }
	
		  for(int i=0;i<size;i++){
		  	printf("%d",arr[i]);
		  }
		  printf("\n");
	}
	
		  void sortArray(int arr[], int size){
		  	for(int i=0;i<size-1;i++){
		  		for(int j=i+1;j<size;j++){
		  			if(arr[i]>arr[j]){
		  				int t=arr[i];
		  			    arr[i]=arr[j];
		  			    arr[j]=t;
					  }
				  }
				  
			  }
			  for(int i=0;i<size;i++){
		  	printf("%d",arr[i]);
		  }
		  printf("\n");
		  }
		  int linearSearch(int arr[], int size, int value){
		  	for(int i=0;i<size;i++){
		  		if(arr[i]==value)
		  		return i;
			  }
			  return -1;
		  }
	  