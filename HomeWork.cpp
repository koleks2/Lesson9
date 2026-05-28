#include <iostream>

using namespace std;

int LinearSearch(int arr[], int size, int key);
int BinarySearch(int arr[], int size, int key);
int BinaryToDecimal(int number);

int main() {
    // task 1
    /*
    int arr[5] = { 1, 3, 5, 7, 9 };

    int key;

    cout << "Enter number: ";
    cin >> key;

    int index = LinearSearch(arr, 5, key);

    if (index == -1)
        cout << "Not found";
    else
        cout << "Index = " << index;
    */
    // task 2
    /*
    int arr[5] = { 1, 3, 5, 7, 9 };

    int key;

    cout << "Enter number: ";
    cin >> key;

    int index = BinarySearch(arr, 5, key);

    if (index == -1)
        cout << "Not found";
    else
        cout << "Index = " << index;
    */
    // task 3
    int number;

    cout << "Enter binary number: ";
    cin >> number;

    cout << BinaryToDecimal(number);
}

int LinearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int BinarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while(left <= right) {
        int middle = (left + right) / 2;

        if(arr[middle] == key)
            return middle;

        if(arr[middle] < key)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}

int BinaryToDecimal(int number) {
    int decimal = 0;
    int power = 1;

    while (number > 0) {
        int digit = number % 10;

        decimal += digit * power;

        power *= 2;

        number /= 10;
    }

    return decimal;
}