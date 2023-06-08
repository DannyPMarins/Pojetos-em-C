#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[25];

    printf("what's your name? \n");
   // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("how old are you? \n");
    scanf("%d", &age);

    printf("your name is %s \n", name);
    printf("You are %d years old", age);
    
    
}
