#include <iostream>
using namespace std;

void BetterBubbleSort(int* array, int size){
    int start = 0;
    int end = size - 1;
    bool thereIs_swap = true;

    while (thereIs_swap) {

        thereIs_swap = false;
        for (int i = start; i < end; ++i) {

            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                thereIs_swap = true;
            }
        }
        if (!thereIs_swap) break;

        thereIs_swap = false;

        // move the end point back by one, because
        // item at the end is in its rightful spot
        --end;

        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = end - 1; i >= start; --i) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                thereIs_swap = true;
            }
        }
        ++start;
    }
}
int main()
{
    int size = 6;
    //cin >> size;
    int array[] = { 6, 5, 4, 3, 2, 1 };
    /*int* array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    */
    BetterBubbleSort(array, size);
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
