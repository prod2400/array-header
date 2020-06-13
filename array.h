#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int int_array_count(int *array,bool print);
int string_array_count(char **array,bool print);


int int_array_count(int *array,bool print){
    int elements;
    while (true){
        if (array[elements] != 0){
                ++elements;
        }
        else {
            if (print == true) printf("%d",elements);
            return elements;
            }
        }
}

int string_array_count(char **array,bool print){
    int elements;
    while (true){
        if (array[elements] != NULL ){
            ++elements;
        }
        else{
            if (print == true) printf("%d",elements);
                return elements;
        }
    }
}
