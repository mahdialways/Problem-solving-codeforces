#include <stdio.h>
int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int toatl_lime = c*d;
    int total_mili = k*l;
    int toast_drink = total_mili/nl;
    int toast_salt = p/np;

    int min_toast;
    if(toatl_lime<toast_drink&&toatl_lime<toast_salt){
        min_toast = toatl_lime;
    }
    else if(toast_drink<toatl_lime && toast_drink<toast_salt){
        min_toast = toast_drink;
    }
    else{
        min_toast = toast_salt;
    }
    int per_friend = min_toast/n;
    printf("%d",per_friend);
    return 0;
}