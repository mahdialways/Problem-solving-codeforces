#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0;
    char statement[5];

    for (int i = 0; i < n; i++) {
        scanf("%s", statement);

        if (strstr(statement, "++")) {
            x++;
        } 
        else if (strstr(statement, "--")) {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
//     if(s>40){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//