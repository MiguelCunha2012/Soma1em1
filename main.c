#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n<=0) {
        printf("Digite um numero positivo");
        return 1;
    }
    for (int i = 1;i <=n; i++) {
        printf("%d ", i);
    }
    return 0;
}