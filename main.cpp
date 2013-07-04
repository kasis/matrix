#include <iostream>
#include "lib/matrix.h"
#include <vector>
using namespace std;
int f(int a) {return (a+1)/2;}
int main()
{
    try
    {
        int n=5;
        Matrix<int> a(5,5,EYE);
        cout << a+a*a;
        cout << a.eachEqual(&f);
    }
    catch (string err)
    {
        cout << err << endl;
    }
    //cout << b(0,0) << endl;
    return 0;
}
