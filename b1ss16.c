#include <stdio.h>

int main() {
    int x = 10;     
    int *ptr = &x;  
    printf("Gia tri cua x: %d\n", x);              
    printf("Dia chi cua x: %p\n", (void*)&x);      
    printf("Gia tri cua ptr (dia chi cua x): %p\n", (void*)ptr);  
    printf("Gia tri ma ptr tro den: %d\n", *ptr);  
    return 0;
}

