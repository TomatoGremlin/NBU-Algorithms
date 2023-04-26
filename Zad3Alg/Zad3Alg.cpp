#include <iostream>
#include <algorithm>
using namespace std;

//Find intersection of 2 sets -> there should not be reapetions of values in the intersection
int main(){
    int arr1[] = {  8, 1, 9, 0 };
    int arr2[] = { 5, 3, 4 };
    
    int count = 0;

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size_intersect = size1 > size2 ? size1 : size2;
    int* intersection = new int [size_intersect];

    int isThere = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]){
                isThere = 1;

                //part to stop repeation
                bool found = false;
                for (int k = 0; k < count; k++)
                {
                    if (intersection[k] == arr1[i])
                    {
                        found = true;
                        break;
                    }
                }

                if (!found){
                    intersection[count] = arr1[i];
                    count++;
                }
                break;
            }
        }
    }


    if (isThere != 0) {
        sort(intersection, intersection + count);
        for (int i = 0; i < count; i++)
        {
            cout << intersection[i] << " ";
        }
        cout << endl;
    }
    else cout << isThere << endl;
  

    return 0;
}


