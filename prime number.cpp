#include <iostream>
using namespace std;

int main()
{
    int i, count = 0, j;
    cout << "Enter to check the PRIME NUMBER" << endl;
    cin >> i;
    for (j = 1; j <= i; j++)

    {
        if (i % j == 0)
            count++;
        j++;
    }

    if (count == 2)
        cout << "YES Prime number" << endl;
    else
        cout << "NOT a Prime number" << endl;
    return 0;
}