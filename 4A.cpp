//COMSC-210-5068, Lab 4A, Yang Liu
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>  
#include <iomanip>

using namespace std;

struct color {
    int red;
    int green;
    int blue;
};


int main() {
    
    srand(time(0));

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

    
    int n = rand() % 26 + 25; // Random number(25-50)
    cout << "--- Milestone 3: Generate " << n << " random colors ---" << endl;
    for (int i = 0; i < n; ++i) {
        color temp;
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;
        colorVector.push_back(temp); 
    }
    cout << "Total colors in vector now: " << colorVector.size() << endl;

    
    cout << "--- Milestone 4: Formatted Color List ---" << endl;
    // Set table headers with fixed width
    cout << left << setw(8) << "Color#" 
         << setw(8) << "R value" 
         << setw(8) << "G value" 
         << setw(8) << "B value" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < colorVector.size(); ++i) {
        cout << left << setw(8) << (i + 1)  
             << setw(8) << colorVector[i].red 
             << setw(8) << colorVector[i].green 
             << setw(8) << colorVector[i].blue << endl;
    }


    return 0;
}