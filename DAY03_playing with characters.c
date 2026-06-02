#include <stdio.h>

int main() {
    char a;
    char abc[20];
    char abcd[100];

    scanf("%c", &a);
    scanf(" %s", abc);       
    
    getchar();               
    fgets(abcd, 100, stdin); 

    printf("%c\n", a);
    printf("%s\n", abc);
    printf("%s", abcd);

    return 0;
}
