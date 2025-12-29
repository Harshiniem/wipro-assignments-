/*
 * Purpose: Find min, max of values in an array. Pass arr along with Min and Max as reference or Address as argument.
		void findMinMax(int *arr, int size, int &min, int &max);
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

void findMinMax(int *arr, int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int arr[] = {10, 45, 2, 89, 23};
    int min, max;

    findMinMax(arr, 5, min, max);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}

