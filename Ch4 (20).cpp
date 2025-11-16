#include <iostream>
#include <string> // Used for the explanatory output

using namespace std;

int main()
{
    int score;
    char grade;

    cout << "Enter the test score (0-100): ";
    if (!(cin >> score)) {
        cerr << "Invalid input. Please enter a number." << endl;
        return 1; // Exit if input fails
    }

    // The switch statement uses integer division (score / 10)
    // to map a score range to a grade.
    // e.g., 90-100 -> case 9, case 10
    // e.g., 60-69  -> case 6
    // e.g., 0-59   -> case 0, 1, 2, 3, 4, 5
    switch (score / 10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
        case 10:
            grade = 'A';
            break;
        default:
            cout << "Invalid test score." << endl;
            // The program will skip the final output if the score is out of range (e.g., -1 or 101+)
            return 0;
    }

    cout << "The score " << score << " corresponds to grade: " << grade << endl;

    return 0;
}
