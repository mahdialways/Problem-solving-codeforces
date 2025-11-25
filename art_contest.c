#include<stdio.h>
int main(){
    int mark1,mark2,mark3;
    int median;
    int first,second,third;
    scanf("%d %d %d",&mark1,&mark2,&mark3);
    if(mark1 - mark2 >= 10 || mark1-mark3>=10){
        printf("check again");
    }
    else if(mark2 - mark1 >= 10 || mark2-mark3>=10){
        printf("check again");
    }
    else if(mark3 - mark1 >= 10 || mark3-mark2>=10){
        printf("check again");
    }
    else{
        if(mark1>mark2&& mark1>mark3){
            if(mark2>mark3){
                first = mark1;
                second = mark2;
                third = mark3;
            }
            else{
                first = mark1;
                second = mark3;
            }
        }
        else if(mark2>mark1&& mark2>mark3){
            first = mark2;
            if(mark1>mark3){
                second = mark1;
            }
            else{
                second = mark3;
            }
        }
        else if(mark3>mark1&& mark3>mark2){
            first = mark3;
            if(mark1>mark2){
                second = mark1;
            }
            else{
                second = mark2;
            }
        }
        else if(mark1 == mark2 && mark2== mark3){
            second = mark2;
        }
        printf("final %d", second);
    }
    
}
