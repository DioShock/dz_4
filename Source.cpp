#include <iostream>
using namespace std;
int main()
{

    int A[100];
    for (int i = 0; i < 100; i++){
        A[i] = rand();
    }
    int key = 0;
    cout << "Input key: " << endl;
    cin >> key;
    for (int i = 0; i < 100; i++){
        if (A[i] == key) {
            cout << "key = " << key << " " <<"index = " << i << endl;
            break;
        }
    }


    int B[10000];
    for (int i = 0; i < 10000; i++){
        B[i] = rand();
    }
    key = 0;
    cout << "Input key: " << endl;
    cin >> key;
    for (int i = 0; i < 10000; i++){
        if (B[i] == key) {
            cout << "key = " << key << " " <<"index = " << i << endl;
            break;
        }
    }


    int C[100000];
    for (int i = 0; i < 100000; i++){
        C[i] = rand();
    }
    key = 0;
    cout << "Input key: " << endl;
    cin >> key;
    for (int i = 0; i < 100; i++){
        if (C[i] == key) {
            cout << "key = " << key << " " <<"index = " << i << endl;
            break;
        }
    }
