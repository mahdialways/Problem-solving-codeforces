#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    for(int i =0; i<n; i++){
        if(num%10==0){
            num = num/10;
        }
        else{
            num -= 1;
        }
    }
    printf("%d",num);


    return 0;
}