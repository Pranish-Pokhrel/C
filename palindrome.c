// Given an integer x, return true if x is a palindrome and false otherwise.
#include <stdio.h>
int main(){
    int num,o,r=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    o=num;

    while(num!=0){
        r=(r*10 + num % 10);
        num=num/10;
    }
    
    if(o==r){
        printf("It is a palindrome\n");
    }else{
        printf("It is not a palindrome\n");
    }
    return 0;
}