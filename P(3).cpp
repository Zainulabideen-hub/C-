#include <iostream>
using namespace std;
int main()
{
    string name;
    float eng, maths, comp, isl, urdu;
    float total, percentage;
    string grade;
    cout << "Enter student name: "<<endl;
    getline(cin, name);
    cout << "Enter marks for English: "<<endl;
    cin >> eng;
    cout << "Enter marks for Maths: "<<endl;
    cin >> maths;
    cout << "Enter marks for Computer: "<<endl;
    cin >> comp;
    cout << "Enter marks for Islimiyat: "<<endl;
    cin >> isl;
    cout << "Enter marks for Urdu: "<<endl;
    cin >> urdu;
    total = eng + maths + comp + isl + urdu;
    percentage = (total / 500) * 100;
    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B+";
    else if (percentage >= 60)
        grade = "B";
    else if (percentage >= 50)
        grade = "C";
    else if (percentage >= 40)
        grade = "D";
    else
        grade = "F";
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Obtained Percentage: " << percentage << "%" << endl;
    cout << "Obtained Grade: " << grade << endl;
    return 0;
}
