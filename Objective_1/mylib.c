#include "mylib.h"

         int reverseDigits(int n) {
            int r = 0;
             while (n) { 
			 r = r*10 + (n % 10);
			  n /= 10;
			  }
             return r;
           }
         int isAdams(int num) {
         	int a=num*num;
         	int b=reverseDigits(num);
         	b=b*b*1;
         	if(a==reverseDigits(b)){
         		return 1;
			 }
			 return 0;
	       }
	    
	    int isArmstrong(int num){
        int s = 0,count = 0, temp, flag, rem = 0;
        temp = num;
        flag = num;
        while(temp>0){
            temp = temp / 10;
            count++;
        }
        while(flag>0){
            rem = flag % 10;
            int p = 1;
            for(int i=0 ; i < count ; i++ ){
                p = p * rem;
            }
            s = s + p;
            flag = flag / 10;
        }
        if(s == num){
            return 1;
        }
        return 0;

    }
	     	
		 int isPrime(int num) {
		 	for(int i=2;i<num;i++){
		 		if(num%i==0){
		 			return 0;
				 }
			 }
			 return 1;
		 }
		  int isPrimePalindrome(int num){
		  	if(num==reverseDigits(num)&&(isPrime(num)==1))
		  	return 1;
		  	return 0;
		  }