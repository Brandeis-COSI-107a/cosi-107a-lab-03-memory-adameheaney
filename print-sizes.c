#include <stdio.h>

int main(int argc, char *argv[]) {
    int val = 978;
    int *val_point;
    char string[200];
    char *str_point;

    printf("size of char is %d\n", sizeof(char));
    printf("size of short is %d\n", sizeof(short));
    printf("size of int is %d\n", sizeof(int));
    printf("size of long is %d\n", sizeof(long));
    printf("size of long long is %d\n", sizeof(long long));
    printf("size of float is %d\n", sizeof(float));
    printf("size of double is %d\n", sizeof(double));
    printf("size of char * is %d\n", sizeof(char *));
    printf("size of int * is %d\n", sizeof(int *));
    printf("size of long * is %d\n", sizeof(long *));

    printf("The size of my character array is %d\n", sizeof(string));
    str_point = string;
    printf("The size of my character pointer is %d\n", sizeof(str_point));
    val_point = &val;
    printf("The size of my int pointer is %d\n", sizeof(val_point));
    printf("The size of what my integer pointer points at is %d\n", sizeof(*val_point));

}
