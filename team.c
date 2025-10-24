#include <stdio.h>
int main(){
    int n, total = 0;
    scanf("%d",&n);
    for(int i=1 ;i<=n; i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a&&b == 1)||(a&& c==1)||(b&&c==1)){
            total++;
        }
    }
    printf("%d",total);
}