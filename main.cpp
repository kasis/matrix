#include <iostream>
#include "lib/matrix.h"
#include <vector>
using namespace std;
int sqr(int a) {return a*a;}
int main()
{
    try
    {
        int n=5;
        Matrix<int> a(5,5);
        cout << "Zero matrix A:\n" << a;
        Matrix<double> b(5,5,ONES);
        cout << "Ones matrix B:\n" << b;
        cout << "B*1.5:\n" << b*1.5;
        a.randomize(1,10);
        cout << "randomize A:\n" << a;
        cout << "A.^2:\n" << a.eachEqual(&sqr);
    }
    catch (string err)
    {
        cout << err << endl;
    }
    //cout << b(0,0) << endl;
    return 0;
}
