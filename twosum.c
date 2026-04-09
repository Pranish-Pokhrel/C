// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include <stdio.h>
int main(){
    int nums[100],target,n,result[2],i,j,found=0;
    
    printf("Enter the no of elments of array\n ");
    scanf("%d",&n);

    printf("Enter the target\n ");
    scanf("%d",&target);

    printf("Enter the elments of array\n ");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    for(i=0;i<n;i++){
        if(found==1)
        break;
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                found=1;
                break;
            }
        }
    }

    printf("Indices are: %d and %d\n", result[0], result[1]);
    return 0;
}