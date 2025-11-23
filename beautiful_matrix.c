#include <stdio.h>
#include <stdlib.h>
void cheeker(int array[5][5], int index[2]){
    for(int i=0; i<5; i++){
        for(int j =0; j<5; j++){
            if(array[i][j] == 1){
                index[0] = i;
                index[1] = j;
            }
        }
    }
}
int main(){
    int array[5][5];
    for(int i =0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&array[i][j]);
        }
    }
    int index[2];
    cheeker(array,index);
    
    int answer = abs(index[0] - 2) + abs(index[1]-2);
    printf("%d",answer);
}