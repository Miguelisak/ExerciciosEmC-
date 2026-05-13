#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int soma = *a + *b;
    int sub = *a - *b;

    if(sub < 0)
        sub = -sub;
    
    *a = soma;
    *b = sub;
    return;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}