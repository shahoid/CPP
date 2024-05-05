#include <iostream>
using namespace std;

const int MAX = 100;

class Matrix {
private:
    int mat[MAX][MAX];
    int row, col;

public:
    // Constructor to initialize rows and columns
    Matrix(int r, int c) : row(r), col(c) {}

    // Function to input elements of the matrix
    void inputMatrix() {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    Matrix addMatrix(Matrix &m) {
        Matrix result(row, col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return result;
    }

    // Function to multiply two matrices
    Matrix multiplyMatrix(Matrix &m) {
        Matrix result(row, m.col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < m.col; ++j) {
                result.mat[i][j] = 0;
                for (int k = 0; k < col; ++k) {
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }
        return result;
    }

    // Function to transpose the matrix
    Matrix transposeMatrix() {
        Matrix trans(col, row);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                trans.mat[j][i] = mat[i][j];
            }
        }
        return trans;
    }
};

int main() {
    int row, col;
    
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> row >> col;
    
    Matrix matrix1(row, col), matrix2(row, col);
    
    cout << "For matrix 1:" << endl;
    matrix1.inputMatrix();
    
    cout << "For matrix 2:" << endl;
    matrix2.inputMatrix();
    
    Matrix addition = matrix1.addMatrix(matrix2);
    cout << "Addition:" << endl;
    addition.displayMatrix();
    
    Matrix multiplication = matrix1.multiplyMatrix(matrix2);
    cout << "Multiplication:" << endl;
    multiplication.displayMatrix();
    
    Matrix transpose = matrix1.transposeMatrix();
    cout << "Transpose of matrix 1:" << endl;
    transpose.displayMatrix();
    
    return 0;
}
