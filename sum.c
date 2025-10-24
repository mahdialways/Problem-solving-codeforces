#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int numbers[n][3];
    int i;
    for( i=0;i<n;i++){
        scanf("%d %d %d",&numbers[i][1],&numbers[i][2],&numbers[i][3]);
    }
    for(i =0;i<n;i++){
        if(numbers[i][1]+numbers[i][2]== numbers[i][3] ||
        numbers[i][1]+numbers[i][3]==numbers[i][2] || 
        numbers[i][2]+numbers[i][3] == numbers[i][1]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}