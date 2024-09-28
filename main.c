#include <stdio.h>
int main(void) {
    int eta;
    printf("Inserire l'eta': ");
    scanf("%d", &eta);
    if (eta < 5) {
        printf("ingresso gratuito");
    }
    else if (eta<=10) {
        printf("ingresso 1 euro");
    }
    else if (eta<=17) {
        printf("ingresso 1,50 euro");
    }
    else if (eta<=26) {
        printf("ingresso 2 euro");
    }
    else {
        printf("ingresso 3 euro");
    }
    return 0;
}