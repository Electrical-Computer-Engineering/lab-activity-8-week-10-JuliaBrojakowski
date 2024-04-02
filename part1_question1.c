#include <stdio.h>
#include <stdlib.h>

//my_isalpha check if letter
    int my_isalpha(char c){
        if(c >= 'A' && c <= 'Z' ||  c >= 'a' && c <= 'z')
             return 1;
        else
            return 0;
    }
//my_isdigit check if digit
    int my_isdigit(char num) { //input/formal/virtual parameters ()
        if(num >= '0' && num <= '9')
            return 1;
        else
            return 0;
    }

//my_is_upper is it upper
    char my_is_upper(char c){
        if(c >= 'A' && c <= 'Z')
             return 1;
        else
            return 0;
    }
//my_to_upper if lower turn upper
    char my_to_upper(char c){
        if(c >= 'a' && c <= 'z')
            return c - 'a' + 'A';
        else
            return c;
    }

//my_to_lower  if upper turn lower
    char my_to_lower(char c){
        if(c >= 'A' && c <= 'Z')
            return c - 'A' + 'c';
        else
            return c;
    }


int main() {
    char c;

    while (c != '#'){


        printf("char: "); scanf("%c", &c); getchar();
  

        printf("It's alphabet %c - %d\n", c, my_isalpha(c));
        
        
        printf("It's digit %c - %d\n", c, my_isdigit(c));

        printf("If uppercase %c - %d\n", c, my_is_upper(c));

        printf("Turn Upper if Lower %c - %c\n", c, my_to_upper(c));

        printf("Turn Lower if Upper %c - %c\n", c, my_to_lower(c));
    }
}