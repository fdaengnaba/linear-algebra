#include <stdio.h>

int swapRow( int rows, int columns, double matrix[rows][columns], int a, int b );
int printMatrix( int rows, int columns, double matrix[rows][columns]);
int multipleRow( int rows, int columns, double matrix[rows][columns],int rowSelect, double multiplier);
int addRow( int rows, int columns, double matrix[rows][columns], int rowSource, double muntiplier, int rowDestination);

int main() {
    int rows, columns;
    puts( "input row number and column number: " );
    scanf("%d %d", &rows, &columns );

    double matrix[rows][columns]; // create new matrix
    
    for( int rowNum = 0; rowNum < rows; rowNum++ ){ // initialize matrix
        for ( int colNum = 0; colNum < columns; colNum++ ){
            scanf(" %lf", &matrix[rowNum][colNum] );
        }
    }

    int menu;
    do {
        puts( "1 to swap" );
        puts( "2 to multiple a row" );
        puts( "3 to add multiple time a row to another row");
        puts( "0 to exit" );
        scanf( " %d", &menu );

        if ( menu == 1 ) {
            int a, b;
            puts( "type 2 row number ");
            scanf( " %d %d", &a, &b );
            swapRow( rows, columns, matrix, a - 1, b - 1 );
            printMatrix(rows, columns, matrix);
        } else if ( menu == 2 ) {
            puts( "row multiplier : " );
            int rowSelect;
            double multiplier;
            scanf( " %d %lf", &rowSelect, &multiplier );

            multipleRow( rows, columns, matrix, rowSelect-1, multiplier );
        } 
        
    } while( menu != 0 );


}

int swapRow( int rows, int columns, double matrix[rows][columns], int a, int b ){
    for( int colNum = 0; colNum < columns; colNum++ ) {
        double temp =  matrix[a][colNum];
        matrix[a][colNum] = matrix[b][colNum];
        matrix[b][colNum] = temp;
    }
    return 0;
}

int printMatrix(int rows, int columns, double matrix[rows][columns]){
    for( int rowNum = 0; rowNum < rows; rowNum++ ){
        for ( int colNum = 0; colNum < columns; colNum++ ){
            printf("%3lf\t", matrix[rowNum][colNum] );
        }
        printf( "%s", "\n" );
    }
}

int multipleRow( int rows, int columns, double matrix[rows][columns],int rowSelect, double multiplier ){
    for (int colNum = 0; colNum < columns; colNum++ ){
        matrix[rowSelect][colNum] *= multiplier;
    }
}