// c program to give the random number between two numbers inputed by the user
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n=0,h=0,l=0;
    char chr;
    srand(time(NULL));
    do{
        do{

    printf("Enter the range(Lower to higher) from which you want a random number\n");
    scanf("%d %d",&l,&h);

     if(l>h){
      printf("Invalid value\n");
    }
    }while ( l>h );
    srand(time(NULL));
    n= (rand()%(h-l+1)+l);
    printf("%d is the random number between(%d-%d)\n",n,l,h);

    printf("Want to do this again(Y/N)?\n");
    scanf(" %c",&chr);
}while(chr=='Y'|| chr=='y');
    
    return 0;
}