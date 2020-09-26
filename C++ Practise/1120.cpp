#include<iostream>
#include<vector>
using namespace std;

void swap (int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort (int a[],int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main() {
    int n, m;
    cin>>n>>m;

    int a = new int [] (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubbleSort(a, n);
    int maxSum=0, minSum=0, k = n - m;

    for (int i = 0; i < k; i++) {
        minSum += a[i];
    }

    int i = n - 1;
    while (k--) {
        maxSum += a[i];
        i--;
    }

    cout<<maxSum - minSum<<endl;

    return 0;
}
