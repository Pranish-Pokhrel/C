#include <stdio.h>
int main(){
    int nums[10],check,i,found;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++){
    scanf("%d", &nums[i]);
    }

    printf("Enter the number to check if it is in array\n");
    scanf("%d",&check);

    for(i=0;i<10;i++){
      if(check==nums[i]){
        found=1;
        break;
      }
    }
    if(found==1){
      printf("Yes, it is in the array");
    }else{
     printf("No, it is not in the array");
    }
    return 0;
}