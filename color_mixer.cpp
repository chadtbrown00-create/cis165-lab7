
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    const int COLOR_SIZE = 20;

    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter the first primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> second_color;

    if ((strcmp(first_color, "red") != 0 &&
         strcmp(first_color, "blue") != 0 &&
         strcmp(first_color, "yellow") != 0) ||
        (strcmp(second_color, "red") != 0 &&
         strcmp(second_color, "blue") != 0 &&
         strcmp(second_color, "yellow") != 0))
    {
        cout << "Error: enter red, blue, or yellow." << endl;
    }
    else if (strcmp(first_color, second_color) == 0)
    {
        cout << "Result: " << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
              strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 &&
              strcmp(second_color, "red") == 0))
    {
        cout << "Result: purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
              strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 &&
              strcmp(second_color, "red") == 0))
    {
        cout << "Result: orange" << endl;
    }
    else
    {
        cout << "Result: green" << endl;
    }

    return 0;
}

