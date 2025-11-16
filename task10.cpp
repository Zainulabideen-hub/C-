// Calculate Total points for Cricket Team
#include <iostream>
using namespace std;
int main()
{
    int wins, draws, losses, t_points;
    cout <<"Enter number of wins= ";
    cin >> wins;
    cout <<"Enter number of draws= ";
    cin >> draws;
    cout <<"Enter number of losses= ";
    cin >> losses;
    t_points =(wins*3)+(draws*1)+(losses*0);
    cout <<"Total points Of Pakistan's Cricket Team = "<<t_points;
    return 0;
}