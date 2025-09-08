// COMSC-210 | Lab 4A | Andrei Buchatskiy
// IDE used : Visual Studio Code

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

/* Create a struct 'Color' with the three following variables:
 red
 green
 blue
*/
struct Color{
    int red;
    int green;
    int blue;
};

// color_inputs() creates a temp struct populated with random integers
// arguments: nothing
// returns: temp structure
Color color_inputs();

int main() {
    // Seed and generate random number for the vector size
    srand(time(0));
    int size = 25 + rand() % 26;
    vector<Color> colors(size);

    for(int i = 0; i < size; i++){
        colors.at(i) = color_inputs();
    }
    
    // Making the table
    // Starting by making const for the width of first row and width for the other rows
    const int width_1 = 6; 
    const int width = 7;

    // Making the headers and the dashes below
    cout << left << setw(width_1) << "Color# " << setw(width) << "R value " << setw(width) << "G value " << setw(width) << "B value" << endl;
    cout << setfill('-') << setw(width_1) << "" << ' ' << setw(width) << "" << ' ' << setw(width) << "" << ' ' << setw(width) << "" << endl;
    cout << setfill(' ');

    // Filling the rows
    for(int i = 0; i < size; i++){
        cout << left << setw(width_1) << i + 1 << ' ' << setw(width) << colors.at(i).red << ' ' << setw(width) << colors.at(i).green << ' ' << setw(width) << colors.at(i).blue << endl;
    }

}

Color color_inputs(){
    // Create a temp Color struct
    Color temp;
    // Create the random data
    temp.red = rand() % 256;
    temp.green = rand() % 256;
    temp.blue = rand() % 256;
    return temp;
}