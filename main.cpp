#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int sum(int arr[], int n);
int avg(int arr[], int n);
int min(int arr[], int n);
int indexOfLargestElement(int arr[], int size);
bool strictlyEqual(int arr[], int arr2[], int size);
void countChar();
void sort(int arr[], int n);
void die(int n);
void reverse(int arr[], int n);
bool nonDecreasing(int arr[], int n);

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << " : ";
        cin >> arr[i];
    }
    // problem 1
    // cout <<  "The sum of the array is " << sum(arr, n) << endl;

    // problem 2
    // cout << "The average is " << avg(arr, n);

    // problem 3
    // cout << "The minimum element: " << min(arr, n) << endl;

    // problem 4
    // cout << "The index of largest element: " << indexOfLargestElement(arr, n);

    /* problem 5
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << " : ";
        cin >> arr2[i];
    }

        cout << strictlyEqual(arr, arr2, n);
    */

    // problem 6
    // countChar();

    // problem 7
    // sort(arr, n);

    // problem 8
    // die(10000);

    // problem 9
    // reverse(arr, n);

    /* problem 10
    if (nonDecreasing(arr, n)) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl; */
    return 0;
}

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int avg(int arr[], int n) {
    return (sum(arr, n) / n);
}
int min(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < temp) {
            temp = arr[i];
        }
    }
    return temp;
}
int indexOfLargestElement(int arr[], int size) {
    int temp = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[temp]) {
            temp = i;
        }
    }
    return temp;
}
bool strictlyEqual(int arr[], int arr2[], int size){
        for (int i = 0; i < size; i++) {
            if (arr[i] != arr2[i])
                return false;
        }
        return true;
    }
void countChar() {
    int freq[26] = {0};
    char ch;
    cout << "Enter characters ('0' to stop):" << endl;

    while (true) {
        cin >> ch;
        if (ch == '0') {
            break;
        }
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    cout << "Frequency of lowercase letters:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }

}
void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void die(int n) {
    srand(time(0));
    int arr[6] = {0};
    for (int i = 0; i < n; i++) {
        arr[rand() % 6]++;
    }
    for (int i = 0; i < 6; i++) {
        cout << i+1 << ": " <<  arr[i] << " " << endl;
    }
}
void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
bool nonDecreasing(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[(i + 1)]) {
            return false;
        }
    }
    return true;
}