//#include <iostream>
//
//using namespace std;
//void sort(int arr[], int size, bool descending = false);
//void secondtaskSort(int arr[], int size);
//void sortBetweenNegative(int arr[], int size);
//
//int main() {
//	//task 1
//    /*
//    const int size = 10;
//	int arr[size] = { 2,5,6,0,3,4,6,2,2,7 };
//
//    sort(arr, size);
//
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    sort(arr, size, true);
//
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//    */
//    //task 2
//    /*
//    const int size = 10;
//    int arr[size] = { 2,5,6,0,3,4,6,2,2,7 };
//
//    secondtaskSort(arr, size);
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << ' ';
//    }
//    */
//    //task 3
//    /*
//    const int size = 10;
//    int arr[size] = { 5, -4, 6,0,-3,4,6,2,-2,7 };
//
//    sortBetweenNegative(arr, size);
//
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << ' ';
//    }
//    */
//}
//
//void sort(int arr[], int size, bool descending) {
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = 0; j < size - i - 1; j++)
//        {
//            if ((!descending && arr[j] > arr[j + 1]) || (descending && arr[j] < arr[j + 1]))
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void secondtaskSort(int arr[], int size) {
//    int middle = size / 2;
//    for (int i = 1; i < middle; i++) {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j >= 0 && arr[j] < key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//
//        arr[j + 1] = key;
//
//    }
//    for (int i = 1; i < size; i++) {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j >= middle && arr[j] < key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//void sortBetweenNegative(int arr[], int size) {
//    int lefts = -1;
//    int rights = -1;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] < 0) {
//            lefts = i;
//            break;
//        }
//    }
//    for (int i = size - 1; i >= 0; i--) {
//        if (arr[i] < 0) {
//            rights = i;
//            break;
//        }
//    }
//
//    if (lefts == -1 || rights == -1 || lefts == rights) {
//        return;
//    }
//    for (int i = lefts + 1; i < rights; i++) {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j < lefts && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}