#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>

int main() {

    const int num = 5;

    int arr[num];
    int a = 0;

    // for(int i = 0; i < num; i++) {
    //     std::cin >> arr[i];
    // }

    // for(int i = 0; i < num; i++) {
    //     std::cout << arr[i] << " ";
    // }

    while(a < num) {
        std::cin >> arr[a];
        a++;
    }

    a = 0;

    while(a < num) {
        std::cout << arr[a] << " ";
        a++;
    }

}
