#include <iostream>
using namespace std;

struct Distance
{
    float speed;
    float time;
    double sum;
};

int main()
{
    Distance *ptr, d;
    ptr = &d;
    cout << "Enter the speed: ";
    cin >> d.speed;
    cout << "Enter the time: ";
    cin >> d.time;
    d.sum = d.speed / d.time;
    cout << "\nyou covered distance " << d.sum << "km.";
    return 0;
}
