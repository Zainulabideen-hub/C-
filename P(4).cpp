#include <iostream>
using namespace std;
int main()
{
    int day;
    string month;
    cout << "Enter birth month : ";
    cin >> month;
    cout << "Enter birth day: ";
    cin >> day;
    string sign, symbol;
    if ((month == "March" && day >= 21) || (month == "April" && day <= 19)) {
        sign = "Aries";
        symbol = "The Ram";
    }
    else if ((month == "April" && day >= 20) || (month == "May" && day <= 20)) {
        sign = "Taurus";
        symbol = "The Bull";
    }
    else if ((month == "May" && day >= 21) || (month == "June" && day <= 20)) {
        sign = "Gemini";
        symbol = "The Twins";
    }
    else if ((month == "June" && day >= 21) || (month == "July" && day <= 22)) {
        sign = "Cancer";
        symbol = "The Crab";
    }
    else if ((month == "July" && day >= 23) || (month == "August" && day <= 22)) {
        sign = "Leo";
        symbol = "The Lion";
    }
    else if ((month == "August" && day >= 23) || (month == "September" && day <= 22)) {
        sign = "Virgo";
        symbol = "The Virgin";
    }
    else if ((month == "September" && day >= 23) || (month == "October" && day <= 22)) {
        sign = "Libra";
        symbol = "The Scales";
    }
    else if ((month == "October" && day >= 23) || (month == "November" && day <= 21)) {
        sign = "Scorpio";
        symbol = "The Scorpion";
    }
    else if ((month == "November" && day >= 22) || (month == "December" && day <= 21)) {
        sign = "Sagittarius";
        symbol = "The Archer";
    }
    else if ((month == "December" && day >= 22) || (month == "January" && day <= 19)) {
        sign = "Capricorn";
        symbol = "The Goat";
    }
    else if ((month == "January" && day >= 20) || (month == "February" && day <= 18)) {
        sign = "Aquarius";
        symbol = "The Water Bearer";
    }
    else if ((month == "February" && day >= 19) || (month == "March" && day <= 20)) {
        sign = "Pisces";
        symbol = "The Fishes";
    }
    else {
        cout << "Invalid date or month entered!" << endl;
        return 0;
    }
    cout << "Your Zodiac Sign is: " << sign << endl;
    cout << "Symbol: " << symbol << endl;

    return 0;
}