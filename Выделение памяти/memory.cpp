#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>



int main() {

    const int num = 5;

    int arr[num];

    for(int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }

    for(int i = 0; i < num; i++) {
        std::cout << arr[i] << " ";
    }
   
}
