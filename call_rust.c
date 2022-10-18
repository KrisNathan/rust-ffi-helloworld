extern void hello_from_rust();
extern int add(int left, int right);
#include<stdio.h>
int main(void) {
    hello_from_rust();
    printf("%d\n", add(1, 2));
    return 0;
}

