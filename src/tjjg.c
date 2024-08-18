#include <stdio.h>
int main(){
    int a = 3;
    int *p = &a;

    *p = 0;

    printf("%p ", p); //
}