#include <stdio.h>

int x;

void func() {
    printf("test func\n");

}
int main(int argc, char *argv[]) {
    int var = 12345;
    const char *constant = "Hello this is a constant";
    printf("stack variable: 0x%X\n", &var);
    printf("initialized data: 0x%X\n", &constant);
    printf("uninitialized data: 0x%X\n", &x);
    printf("main: 0x%X\n", &main);
    printf("function: 0x%X\n", &func);

}


