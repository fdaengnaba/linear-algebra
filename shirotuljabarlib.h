typedef struct shirotuljabar_mat_s {
    unsigned int num_rows;
    unsigned int num_cols;
    double **data;
    int is_square;

} shirotuljabar_mat;

// Constructor-like 
// Allocates memory for a new matrix
// All elements in the matrix are 0.0
shirotuljabar_mat *shirotul_jabar_new(unsigned int num_rows, unsigned int num_cols);

// Destructor-like
// De-allocates the memory for the matrix
void shirotuljabar_mat_free(shirotuljabar_mat *matrix);