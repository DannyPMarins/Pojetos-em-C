#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Daniel";
    char string2[] = "desenvolvedor";

//    strlwr(string1);
//    strupr(string1);
strcat(string1, string2);

    printf("%s", string1);
}