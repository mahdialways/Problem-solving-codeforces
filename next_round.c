#include <stdio.h>
int main(){
    int n,k,total =0;
    scanf("%d %d",&n,&k);
    int participant[n];
    for(int i =0;i<n;i++){
        scanf("%d",&participant[i]);
        }
    int cut_off = participant[k-1];
    for(int i =0;i<n;i++){
        if(participant[i]>=cut_off && participant[i]>0){
            total = total+1;
        }
    }
    printf("%d",total);

}