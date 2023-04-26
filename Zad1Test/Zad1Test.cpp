#include <iostream>
using namespace std;
//1
int main()
{
    int size;
    cin >> size;
    //int array[] = { 1, 5, 3, 2, 1, 8, 10, 20, 6, 4 };
    int* array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    int average = sum / size;

    int smaller = 0;
    int bigger = 0;
  
    for (int i = 0; i < size; i++)
    {
        if (array[i] > average) {
            bigger++;
        }
        else if (array[i] < average) {
            smaller++;
        }
    }
  
    double ratio = smaller / bigger;
    if (ratio <= 45 / 55) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    
    return 0;
}

