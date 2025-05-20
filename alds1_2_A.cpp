#include <iostream>

int bubblesort(int A[], int N) {
    bool flag = true;
    int count = 0;
    while(flag) {
        flag = false;
        for (int j = N - 1; j > 0; j--) {
            if (A[j - 1] > A[j]) {
                std::swap(A[j], A[j - 1]);
                flag = true;
                count++;
            }
        }
    }
    return count;
}

int main(){
    int N;
    std::cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int count = bubblesort(A, N);
    for (int i = 0; i < N; i++) {
        std::cout << A[i];
        if (i != N - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    std::cout << count << std::endl;
    return 0;
}