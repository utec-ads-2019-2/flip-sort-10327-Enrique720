#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int num;
    while(cin >> num) {
        int cont = 0;
        int *arr = new int[num];
        for (int i = 0; i < num; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < num - 1; i++) {
            for (int j = 0; j < num - i - 1; j++)
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    cont = cont + 1;
                }
        }

        cout << "Minimum exchange operations : " << cont << endl;
    }
}
