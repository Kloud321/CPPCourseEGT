#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    map<int, int> counters; // key -> values with number -> how many times
    int size = 13;

    int arr[] = {1, 3, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5};

    set<int> mySet(arr, arr + size);

    for (int el : mySet) {
        counters[el] = 0;
    }


    int currentKey = arr[0];
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            counters[currentKey] += currentCount;
            currentKey = arr[i];
            currentCount = 1;
        }
    }

    // Update counters for the last element in the array
    counters[currentKey] += currentCount;


    for (pair<int, int> el : counters) {
        cout << el.first << ": " << el.second << endl;
    }

    return 0;
}
