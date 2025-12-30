#include "pitob.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int NUMBER_TO_CONVERT = atoi(argv[1]);
    int ARRAY_SIZE = atoi(argv[2]);
    char BINARY_ARRAY[ARRAY_SIZE + 1];

    if (pitob(NUMBER_TO_CONVERT, BINARY_ARRAY, ARRAY_SIZE) == -1) {
        return -1;
    } else {
        size_t INDEX;
        for(INDEX = 0; INDEX != ARRAY_SIZE; INDEX++) {
            printf("%c", BINARY_ARRAY[INDEX]);
        }
    }

    return 0;
}