#include <stdio.h>
 #include "mylib.h"
 int main() {
 	int n;
    scanf("%d",&n);
    printf("isArmstrong(%d) = %s\n", n, isArmstrong(n) ? "Yes" : "No");
    printf("isAdams(%d) = %s\n", n, isAdams(n) ? "Yes" : "No");
    printf("isPrimePalindrome(%d) = %s\n", n, isPrimePalindrome(n) ? "Yes" : "No");
    return 0;
 }