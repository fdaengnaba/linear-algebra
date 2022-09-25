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

    m->num_rows = num_rows;
    m->is_square = num_cols;
    m->is_square = (num_rows == num_cols) ? 1 : 0;
    m->data = calloc(m->num_rows, sizeof(*m->data));
    if ( !(m->data) ) {
        printf( "%s", "NULL_POINTER create row\n" );
        exit(-1);
    }

    for( int i = 0; i < num_rows; i++ ) {
        m->data[i] = calloc(m->num_cols, sizeof(**m->data));
        if ( !(m->data[i]) ) {
        printf( "%s", "NULL_POINTER create columns \n" );
        exit(-1);
        }
    }
    return m;
}

int main( void ){
    return 0;
}