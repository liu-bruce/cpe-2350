#ifndef function
#define function
#define MAX_ROWS 3
#define MAX_COLS 3
void test_and_debug();

void single_dimesional_print(int *array_input, int array_size); //use sizeof(array_input)/sizeof(int) for array length 


// template functions
void display(int arr[][MAX_COLS]);  // Print the Matrix
void transpose_2D(int arr[][MAX_COLS], int arr_transpose[][MAX_ROWS]);   // Find transpose of original matrix
void multiply(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int res[][MAX_COLS]); // 2D Multiplication of mat1 and mat2, the result is saved to 2d array called res
void multiply_trans(int mat1[][MAX_COLS], int mat2_trans[][MAX_COLS], int res[][MAX_COLS]);// 2D Multiplication of mat1 and mat2_transpose, the result is saved to 2d array called res


#endif
