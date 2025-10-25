#include <stdio.h>
int main(){

    int a,b;
    int result = 1;
    scanf("%d %d",&a,&b);
    int bear =a;
    int big_brother = b;
    for(;;){
        if(bear>big_brother){
            break;
        }
        else{
            result = result+1;
            bear = bear *(result *3);
            big_brother = big_brother * (result * 2);
        }
    }
    printf("%d",result -1);

    return 0;
}