#include <iostream>
#include "lib/matrix.h"
#include "tests/MatrixTest.h"
#include <vector>
using namespace std;
int sqr(int a) {return a*a;}
int main()
{
    runAllTests();

    /*try
    {
        int n=5;
        Matrix<int> a(5,4);
        cout << "Zero matrix A:\n" << a;
        Matrix<double> b(5,4,ONES);
        cout << "Ones matrix B:\n" << b;
        cout << "B*1.5:\n" << b*1.5;
        a.randomize(1,10);
        cout << "randomize A:\n" << a;
        cout << "A.^2:\n" << a.eachEqual(&sqr);
        Matrix<int> c(1,1);
        cout << "Reading matrix<int> C(1,1).\nEnter element: ";
        cin >> c;
        cout << "C:\n" << c;
    }
    catch (string err)
    {
        cout << err << endl;
    }
    //Examples of errors
    try
    {
        Matrix<int> a(1,0);
        cout << a(0,1) << endl;
    }
    catch (string err)
    {
        cout << err << endl;
    }
    try
    {
        const Matrix<int> a(1,0);
        cout << a(0,1) << endl;
    }
    catch (string err)
    {
        cout << err << endl;
    }

    try
    {
        Matrix<int> a(1,0);
        Matrix<int> b(2,0);
        cout << a+b << endl;
    }
    catch (string err)
    {
        cout << err << endl;
    }
    try
    {
        Matrix<int> a(1,0);
        cout << a*a << endl;
    }
    catch (string err)
    {
        cout << err << endl;
    }
    try
    {
        Matrix<int> a(1,0);
        cout << a.dotProduct(a.transpose())<< endl;
    }
    catch (string err)
    {
        cout << err << endl;
    }*/
    return 0;
}
