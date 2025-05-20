# include <iostream>

using namespace std;
void bubblesort(string A[], int N) {
    bool flag = true;
    while(flag) {
        flag = false;
        for (int j = N - 1; j > 0; j--) {
            if (A[j - 1][1] > A[j][1]) {
                swap(A[j], A[j - 1]);
                flag = true;
            }
        }
    }
}

void selectionsort(string A[], int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A[j][1] < A[minj][1]) {
                minj = j;
            }
        }
        if (i != minj) {
            swap(A[i], A[minj]);
        }
    }
}

void printArray(string A[], int N) {
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    string A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    string B[N];
    for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }
    bubblesort(A, N);
    selectionsort(B, N);
    bool stable = true;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            stable = false;
            break;
        }
    }
    printArray(A, N);
    cout << "Stable" << endl;
    
    printArray(B, N);
    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}