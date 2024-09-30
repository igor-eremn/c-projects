#include <stdio.h>
#include <string.h>

float calculate(int a, int b, int op){
    //op=0 => +
    //op=1 => -
    //op=2 => *
    //op=3 => /
    float res;

    if(op == '+'){
        res = a + b;
    }else if(op == '-'){
        res = a - b;
    }else if(op == '*'){
        res = a * b;
    }else{
        res = a / b;
    }

    return res;
}

void processInput(int *var, int which){
    int temp;
    if(which == 0){
        printf("Enter A: ");
    }else{
        printf("Enter B: ");
    }
    scanf("%d", var);
}

int main(){
    int a,b;
    char opInput;
    float res;
    char cont = 'Y';

    while(cont == 'Y'){
        processInput(&a, 0);
        processInput(&b, 1);

        getchar();
        printf("Enter Operation (+, -, *, /): ");
        scanf("%c", &opInput);

        printf("A: %d, B: %d Operation: %c\n", a, b, opInput);

        res = calculate(a, b, opInput);
        printf("Your calculation: %d %c %d = %.2f\n\n", a, opInput, b, res);

        getchar();
        printf("Do you want to continue?: (Y/n): ");
        scanf("%c", &cont);
    }

    printf("Bye bye\n");
    return 0;
}