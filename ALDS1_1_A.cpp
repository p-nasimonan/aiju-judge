# include <iostream>

using namespace std;
int insertionSort(int A[], int N) {
    int count = 0;
    for (int i = 1; i < N; i++){
        int v = A[i];
        int j = i -1;
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j--;
            count++;
        }
        A[j + 1] = v;
    }
}