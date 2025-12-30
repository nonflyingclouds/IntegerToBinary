#include "pitob.h"
#include <stdio.h>

int pitob(const int NUMBER_TO_CONVERT, char *BINARY_ARRAY, const int ARRAY_SIZE) {
    size_t INDEX = ARRAY_SIZE;
    if(NUMBER_TO_CONVERT < 0) {
        return -1;
    }

    for(INDEX = 0; INDEX != ARRAY_SIZE; INDEX++) {
        BINARY_ARRAY[INDEX] = '0';
    }

    int POWER_OF_TWO = 1, SUM = 0;

    for(int MIN_BIT_QUANTITY = 1; POWER_OF_TWO < NUMBER_TO_CONVERT && POWER_OF_TWO << 1 < NUMBER_TO_CONVERT; POWER_OF_TWO = POWER_OF_TWO << 1, INDEX--, MIN_BIT_QUANTITY++) {
        if(MIN_BIT_QUANTITY > ARRAY_SIZE) {
            return -1;
        }
    }

    for(INDEX = INDEX - 1; INDEX != ARRAY_SIZE; INDEX++, POWER_OF_TWO = POWER_OF_TWO >> 1) {
        if(SUM + POWER_OF_TWO > NUMBER_TO_CONVERT) {
            BINARY_ARRAY[INDEX] = '0';
        } else {
            BINARY_ARRAY[INDEX] = '1';
            SUM = SUM + POWER_OF_TWO;
        }
    }

    return 0;
}