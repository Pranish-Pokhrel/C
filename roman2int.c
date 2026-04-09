// Convert roman numeral to the its integer value
#include <stdio.h>

int romanValue(char c){
    switch (c)
    {
    case 'I': return 1;
    case 'v': return 5;  
    case 'X': return 10;
    case 'L': return 50;  
    case 'C': return 100;  
    case 'D': return 500;  
    case 'M': return 1000;
    default: return 0;
    }
}
int main(){
    char s[50];
    int normal = 0;

    printf("Enter the roman numeral:");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++){
        int curr = romanValue(s[i]);
        int next = romanValue(s[i+1]);

        if (curr < next){
            normal -= curr;
        } else {
            normal += curr;
        }
    }

    printf("The integer value is:%d\n", normal);
    return 0;
}