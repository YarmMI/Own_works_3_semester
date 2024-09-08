#include <iostream> 
using namespace std;
int main(void) {
    int *array;
    int *array2;
    int N;
    int j=0;
    int k=1;
    cin >> N;
    array = new int[2*N];
    array2 = new int [2*N];
    for (int i=0; i<2*N; i++) {
        cin >> array[i];
        if (array[i] %2 == 0) {
            array2[j] = array[i];
            j+=2;
        }
        else {
            array2[k] = array[i];
            k+=2;
        }
    }
    for (int i=0; i<2*N; i++) {
        cout << array2[i] << endl;
    }
}