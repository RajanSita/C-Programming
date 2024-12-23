#include <stdio.h>

void matrixOperation(int rows, int cols, int mat1[10][10], int mat2[10][10], int choice) {
    int result[10][10] = {0};

    if (choice == 1 || choice == 2) { // Addition or Subtraction
        for (int i = 0; i < rows; i++) 
            for (int j = 0; j < cols; j++) 
                result[i][j] = (choice == 1) ? mat1[i][j] + mat2[i][j] : mat1[i][j] - mat2[i][j];

        printf("%s:\n", (choice == 1) ? "Matrix Addition" : "Matrix Subtraction");
    } 
    else if (choice == 3) { // Multiplication
        if (cols != rows) { printf("Matrix multiplication not possible\n"); return; }
        for (int i = 0; i < rows; i++) 
            for (int j = 0; j < cols; j++) 
                for (int k = 0; k < cols; k++) result[i][j] += mat1[i][k] * mat2[k][j];

        printf("Matrix Multiplication:\n");
    } 
    else { // Transpose
        printf("Transpose of Matrix %s:\n", "1");
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) result[j][i] = mat1[i][j];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            printf("%d ", result[i][j]);
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], rows, cols, choice;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) scanf("%d", &mat1[i][j]);

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) scanf("%d", &mat2[i][j]);

    printf("Choose the operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n");
    scanf("%d", &choice);

    matrixOperation(rows, cols, mat1, mat2, choice);

    return 0;
}

