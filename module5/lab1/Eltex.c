#include <stdio.h>
#include <stdlib.h>

extern int f1();
extern int f2();

int main(){
int n1, n2;
n1 =f1();
n2 = f2();
printf("f1() = %d\n f2() = %d\n", n1,n2);
    return 0;
}