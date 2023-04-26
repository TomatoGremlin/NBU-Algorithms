#include <iostream>
using namespace std;

//max heap(largest value at root / index 0) -> min heap(smallest value at root / index 0)
void heapify(int* arr, int size, int root_index){
    // Initialize largest as root -> smallest as root
    int smaleestValue_index = root_index;

    int leftChild_index = 2 * root_index + 1;
    int rightChild_index = 2 * root_index + 2;

    // If left child is larger than root -> smaller than root
    if (leftChild_index < size && arr[leftChild_index] < arr[smaleestValue_index])
        smaleestValue_index = leftChild_index;

    // If right child is larger than largest so far -> smaller than smallest so far
    if (rightChild_index < size && arr[rightChild_index] < arr[smaleestValue_index])
        smaleestValue_index = rightChild_index;

    // If largest is not root
    if (smaleestValue_index != root_index) {
        swap(arr[root_index], arr[smaleestValue_index]);

        // Recursively heapify the affected sub-tree
        heapify(arr, size, smaleestValue_index);
    }
}

void heapSort(int* arr, int size){
    // Build heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--) heapify(arr, size, i);

    // One by one extract an element from heap by making the size of the heap smaller each time
    for (int i = size - 1; i > 0; i--) {
        // Move current root(largest value) to end -> move smallest value(root) to the end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void printArray(int* arr, int N){
    for (int i = 0; i < N; ++i) cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
	int size = 9;
	//cin >> size;
	//int* Array = new int[5];
	int Array[] = { 7, 8, 1 , 4, 5, 6, 9, 11, -1};

    heapSort(Array, size);
    printArray(Array, size);

    return 0;
}

