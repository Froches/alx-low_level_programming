#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int main(int argc, char *argv[]) {
    int a, b;
    int (*op_func)(int, int);
    
    if (argc != 4) {
        printf("Error\n");
        return 1;
    }
    
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    
    if (argv[2][1] != '\0') {
        printf("Error\n");
        return 1;
    }

    switch(argv[2][0]) {
        case '+':
            op_func = &op_add;
            break;
        case '-':
            op_func = &op_sub;
            break;
        case '*':
            op_func = &op_mul;
            break;
        case '/':
            if (b == 0) {
                printf("Error\n");
                return 2;
            }
            op_func = &op_div;
            break;
        case '%':
            if (b == 0) {
                printf("Error\n");
                return 2;
            }
            op_func = &op_mod;
            break;
        default:
            printf("Error\n");
            return 1;
    }
    
    printf("%d\n", op_func(a, b));
    
    return 0;
}

