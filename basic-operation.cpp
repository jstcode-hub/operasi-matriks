#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menjumlahkan dua matriks
vector<vector<int>> addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    return result;
}

// Fungsi untuk mengurangi dua matriks
vector<vector<int>> subtractMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }

    return result;
}

// Fungsi untuk mengalikan dua matriks
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

int main() {
    // Matriks A
    vector<vector<int>> A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    // Matriks B
    vector<vector<int>> B = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    // Menampilkan matriks A
    cout << "Matrix A:" << endl;
    displayMatrix(A);
    cout << endl;

    // Menampilkan matriks B
    cout << "Matrix B:" << endl;
    displayMatrix(B);
    cout << endl;

    // Penjumlahan matriks A dan B
    vector<vector<int>> sum = addMatrices(A, B);

    cout << "Penjumlahan matriks A dan B:" << endl;
    displayMatrix(sum);

    // Pengurangan matriks A dan B
    vector<vector<int>> difference = subtractMatrices(A, B);

    cout << "Pengurangan matriks A dan B:" << endl;
    displayMatrix(difference);

    // Perkalian matriks A dan B
    vector<vector<int>> product = multiplyMatrices(A, B);

    cout << "Perkalian matriks A dan B:" << endl;
    displayMatrix(product);

    return 0;
}
