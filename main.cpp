#include "./numdg/inc/_math.h"
#include <stdio.h>



st_Array A;
st_Array B;
st_Array C;
st_Array D;


int main( void )
{
    A = Array( 4, 4 );
    B = Array( 4, 1 );
    C = Array( 4, 1 );
    D = Array( 4, 1 );

    A.ptr[0][0] =  4.0;
    A.ptr[0][1] =  1.0;
    A.ptr[0][2] =  2.0;
    A.ptr[0][3] =  3.0;
    A.ptr[1][0] =  1.0;
    A.ptr[1][1] =  9.0;
    A.ptr[1][2] =  4.0;
    A.ptr[1][3] =  5.0;
    A.ptr[2][0] =  2.0;
    A.ptr[2][1] =  4.0;
    A.ptr[2][2] =  6.0;
    A.ptr[2][3] =  6.0;
    A.ptr[3][0] =  3.0;
    A.ptr[3][1] =  5.0;
    A.ptr[3][2] =  6.0;
    A.ptr[3][3] = 25.0;

    B.ptr[0][0] =   5.0;
    B.ptr[1][0] =  13.0;
    B.ptr[2][0] =  23.0;
    B.ptr[3][0] = 105.0;

    SymmetricMatrixSolve( &C, &A, &B );

    MatrixMultiply( &D, &A, &C );

    Print( &A );
    Print( &B );
    Print( &C );
    Print( &D );
    
    Clean( &A );
    Clean( &B );
    Clean( &C );
    Clean( &D );

    return 0;
}