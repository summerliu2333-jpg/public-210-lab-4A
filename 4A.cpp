//COMSC-210-5068, Lab 4A, Yang Liu
#include <iostream>
#include <vector>

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

    
    vector<color> colorVector; 
    colorVector.push_back(testColor); 
    cout << "--- Milestone 2: Test Vector ---" << endl;
    cout << "First color in vector: R=" << colorVector[0].red 
         << " G=" << colorVector[0].green 
         << " B=" << colorVector[0].blue << endl;

    return 0;
}