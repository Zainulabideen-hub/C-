#include<iostream>
using namespace std;

int main()
{
    int age,move, average ;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter number of times you move" << endl;
    cin >> move;
    average = age/(move+1);
    cout << "Average number of years live in a house:"<<average << endl;
    return 0;
}