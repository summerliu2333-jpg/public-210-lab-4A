//COMSC-210-5068, Lab 4A, Yang Liu
#include <iostream>

using namespace std;

struct color {
    int red;
    int green;
    int blue;
};


int main() {

    color testColor = {255, 128, 64}; // Initialize a test color
    cout << "--- Milestone 1: Test Structure ---" << endl;
    cout << "Test Color: R=" << testColor.red 
         << " G=" << testColor.green 
         << " B=" << testColor.blue << endl;
    return 0;
}