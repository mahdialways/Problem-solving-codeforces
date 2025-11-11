#include <stdio.h>

int main() {
    int test;
    scanf("%d",&test);
    int team[test];
    int total_match = 0;
    for(int i =0; i<test; i++){
        scanf("%d",&team[i]);
    }
    for(int j = 0; j < test; j++){
        total_match = 2*team[j] -2;
        printf("%d \n",total_match);
    }
    return 0;
}