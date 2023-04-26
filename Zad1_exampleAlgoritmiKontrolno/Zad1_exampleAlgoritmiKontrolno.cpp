#include <iostream>
using namespace std;
int main()
{
    int n =10;
    //cin >> n;

    int* A = new int[n];
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        A[i] = num;
    }
   

    int inversions = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            inversions++;
        }
    }

    cout << inversions + 1 << endl;
    if (inversions < n / 2) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}

