#include <stdlib.h>
#include <stdio.h>

#include "shirotuljabarlib.h"

shirotuljabar_mat *shirotul_jabar_new(unsigned int num_rows, unsigned int num_cols) {
    if (num_rows == 0) {
        printf( "%s", "INVALID_ROWS" );
        return NULL;
    }
    if (num_cols == 0) {
        printf( "%s", "INVALID_COLS" );
        return NULL;
    }
}