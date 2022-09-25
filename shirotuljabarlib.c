#include <stdlib.h>
#include <stdio.h>

#include "shirotuljabarlib.h"

shirotuljabar_mat *shirotul_jabar_new(unsigned int num_rows, unsigned int num_cols) {
    if (num_rows == 0) {
        printf( "%s", "INVALID_ROWS\n" );
        return NULL;
    }
    if (num_cols == 0) {
        printf( "%s", "INVALID_COLS\n" );
        return NULL;
    }

    shirotuljabar_mat *m = calloc(1, sizeof(*m));

    if ( !(m) ) {
        printf( "%s", "NULL_POINTER\n" );
        exit(-1);
    }
}