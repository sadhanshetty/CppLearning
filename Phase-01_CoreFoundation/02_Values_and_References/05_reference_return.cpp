/*
 * Topic: Returning References from Functions
 *
 * You can return a reference from a function to directly access or modify the original variable.
 *
 * ⚠️ Warning:
 * - Never return a reference to a **local variable** (it will be destroyed).
 *
 * Interview Tip:
 * Returning references is used in operator overloading, class member access, etc.
 */

#include <iostream>
using namespace std;

int& getElement(int arr[], int index) {
    return arr[index]; // safe: array elements are not local variables
}

int main() {
    int nums[] = {10, 20, 30};

    getElement(nums, 1) = 99; // modifies nums[1]

    cout << "Modified array: ";
    for (int i = 0; i < 3; ++i)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}
