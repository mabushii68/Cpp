#include <iostream>
 
using namespace std;
 
int main() {

    int count;
    int max = -1000000;
    int min = 1000000;

    cin >> count; 
    int array[count];

    for(int i = 0; i < count; i++) {
        
        cin >> array[i];

        if (max < array[i]) {
            max = array[i];
        }

        if (min > array[i]) {
            min = array[i];
        }

    }

    cout << min << " " << max;

    return 0;
}