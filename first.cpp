#include <iostream>

using namespace std;

int sum();

void runLoop()
{
    int timer = 3;
    for (int i = 0; i < timer; i++)
    {
        cout << "Begining loop " << i << endl;
        for (int i = 0; i < timer; i++)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    sum();
    // runLoop();
    // std::cout << "Hello Ninja";
    return 0;
}

int sum()
{
    int x;
    int y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    int add = x + y;
    cout << "Sum is of " << x << " & " << y << " is " << add << endl;
    return add;
}
