#include <iostream>

#include "formatter_ex.h"
#include "solver.h"
using namespase std;
int main(int argc, char* argv[])
{
    float a = int(*argv[1]) - 48 ;
    float b = int(*argv[2]) - 48;
    float c = int(*argv[3]) - 48;

    cin >> a >> b >> c;

    float x1 = 0;
    float x2 = 0;

    try
    {
        solve(a, b, c, x1, x2);
        string temp1 = "x1 = " + to_string(x1);
        string temp2 = "x2 = " + to_string(x2);
        formatter(cout, temp1);
        formatter(cout, temp2);
    }
    catch (const logic_error& ex)
    {
        formatter(cout, ex.what());
    }

    return 0;
}
