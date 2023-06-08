#include <stdio.h>
// TERNARY OPERATOR

int findMax(int x, int y){
// (condição) ? valor if true : valor if false
    return (x > y) ? x : y; 
}

int main() {
    int max = findMax(5, 4);

    printf("%d", max);
}