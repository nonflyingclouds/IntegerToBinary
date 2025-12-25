#include <stdio.h>
#define DEFAULT_VALUE 730

int itob(const int NUMBER_TO_CONVERT) {
    int n = 0, POWER_OF_TWO = 1;
    for(; POWER_OF_TWO < NUMBER_TO_CONVERT; n++) {
        if(POWER_OF_TWO * 2 > NUMBER_TO_CONVERT) {
            break;
        } else {
            POWER_OF_TWO = POWER_OF_TWO * 2;
        }
    }
    // printf("%d", POWER_OF_TWO);
    
    int BINARY_ARRAY[n + 1], sum;
    // printf("Your array has %d bits", sizeof(BINARY_ARRAY) / sizeof(*BINARY_ARRAY));

    size_t INDEX = 0;

    for(sum = 0; POWER_OF_TWO != 0; POWER_OF_TWO = POWER_OF_TWO / 2, INDEX++) {
        if(sum + POWER_OF_TWO > NUMBER_TO_CONVERT) {
            BINARY_ARRAY[INDEX] = 0;
            printf("%d", BINARY_ARRAY[INDEX]);
        } else {
            sum = sum + POWER_OF_TWO;
            BINARY_ARRAY[INDEX] = 1;
            printf("%d", BINARY_ARRAY[INDEX]);
        }
        // printf("%d: POWER_OF_TWO - %d: SUM - %d: BIT\n", POWER_OF_TWO, sum, BINARY_ARRAY[INDEX]);
    }
}

int main() {
    printf("Default value given to this code is %d.\n", DEFAULT_VALUE);
    itob(DEFAULT_VALUE);

    return 0;
}