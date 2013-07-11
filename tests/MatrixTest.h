#ifndef MATRIXTEST_H_INCLUDED
#define MATRIXTEST_H_INCLUDED

#include "../lib/matrix.h"
#include <math.h>
#include <iostream>

using namespace std;
//
bool ConstructorTest1()
{
    try
    {
        Matrix<int> a(0,0);
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool GetterTest1()
{
    try
    {
        Matrix<int> a(0,0);
        int b=a(1,0);
    }
    catch (string error)
    {
        return 1;
    }
    return 0;
}
bool GetterTest2()
{
    try
    {
        const Matrix<int> a(0,0);
        int b=a(1,0);
    }
    catch (string error)
    {
        return 1;
    }
    return 0;
}
bool GetterTest3()
{
    try
    {
        Matrix<int> a(2,2);
        for (int i=0; i<4; i++)
            a(i/2,i%2)=i;
        return a(0,0)==0 & a(0,1)==1 & a(1,0)==2 & a(1,1)==3;
    }
    catch (string error)
    {
        return 0;
    }
}
bool SetterTest1()
{
    try
    {
        Matrix<int> a(2,2);
        for (int i=0; i<4; i++)
            a(i/2,i%2)=i;
        return a(0,0)==0 & a(0,1)==1 & a(1,0)==2 & a(1,1)==3;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool TransposeTest1()
{
    try
    {
        Matrix<int> a(2,3);
        for (int i=0; i<2; i++)
            for (int j=0; j<3; j++)
                a(i,j)=i*3+j;
        Matrix<int> b=a.transpose();
        for (int i=0; i<3; i++)
            for (int j=0; j<2; j++)
                if (b(i,j)!= i+3*j) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;

}
bool EachEqualTest1()
{
    try
    {
        Matrix<int> a(4,1);
        for (int i=0; i<4; i++)
            a(i,0)=i-2;
        a=a.eachEqual(&abs);
        for (int i=0; i<4; i++)
            if (a(i,0)!=abs(i-2)) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;

}
bool ProductTest1()
{
    try
    {
        Matrix<int> a(2,4);
        Matrix<int> b(2,4);
        for (int i=0; i<2; i++)
            for (int j=0; j<4; j++)
            {
                a(i,j)=i+j;
                b(i,j)=2*i+3*j;
            }
        Matrix<int> c=a.product(b);
        for (int i=0; i<2; i++)
            for (int j=0; j<4; j++)
                if (c(i,j)!=(i+j)*(2*i+3*j)) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool RandomizeTest1()
{
    try
    {
        Matrix<int> a(4,6);
        a.randomize(1,5);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                if (a(i,j)<1 || a(i,j)>5) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool GetHeightTest1()
{
    try
    {
        Matrix<int> a(4,6);
        if (a.getHeight()!=4) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool GetWidthTest1()
{
    try
    {
        Matrix<int> a(4,6);
        if (a.getWidth()!=6) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool MulOperatorTest1()
{
    try
    {
        Matrix<int> a(4,6);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                a(i,j)=2*i+3*j;
        a=4*a;
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                if (a(i,j)!=4*(2*i+3*j)) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool MulOperatorTest2()
{
    try
    {
        Matrix<int> a(4,6);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                a(i,j)=2*i+3*j;
        a=a*4;
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                if (a(i,j)!=4*(2*i+3*j)) return 0;
    }
    catch (string error)
    {
        return 0;
    }
    return 1;
}
bool MulOperatorTest3()
{
    try
    {
        Matrix<int> a(4,6);
        Matrix<int> b(6,5);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                a(i,j)=1;
        for (int i=0; i<6; i++)
            for (int j=0; j<5; j++)
                b(i,j)=2;
        Matrix<int> c=a*b;
        for (int i=0; i<4; i++)
            for (int j=0; j<5; j++)
                if (c(i,j)!=12) return 0;
    }
    catch(string error)
    {
        return 0;
    }
    return 1;
}
bool AddOperatorTest1()
{
    try
    {
        Matrix<int> a(4,6);
        Matrix<int> b(4,6);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
            {
                a(i,j)=2*i+3*j;
                b(i,j)=4*i+j;
            }
        Matrix<int> c=a+b;
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                if (c(i,j)!=6*i+4*j) return 0;
    }
    catch(string error)
    {
        return 0;
    }
    return 1;
}
bool SubOperatorTest1()
{
    try
    {
        Matrix<int> a(4,6);
        Matrix<int> b(4,6);
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
            {
                a(i,j)=2*i+3*j;
                b(i,j)=4*i+j;
            }
        Matrix<int> c=a-b;
        for (int i=0; i<4; i++)
            for (int j=0; j<6; j++)
                if (c(i,j)!=-2*i+2*j) return 0;
    }
    catch(string error)
    {
        return 0;
    }
    return 1;
}
bool runTest(int num,bool (*test)())
{
    if (!test())
    {
        cout << "Failed! Test #"<< num << endl;
        return 0;
    }
    return 1;
}
void runAllTests()
{
    bool good=1;
    int n=0;
    good&=runTest(++n,&ConstructorTest1);
    good&=runTest(++n,&GetterTest1);
    good&=runTest(++n,&GetterTest2);
    good&=runTest(++n,&GetterTest3);
    good&=runTest(++n,&TransposeTest1);
    good&=runTest(++n,&EachEqualTest1);
    good&=runTest(++n,&ProductTest1);
    good&=runTest(++n,&RandomizeTest1);
    good&=runTest(++n,&GetHeightTest1);
    good&=runTest(++n,&GetWidthTest1);
    good&=runTest(++n,&MulOperatorTest1);
    good&=runTest(++n,&MulOperatorTest2);
    good&=runTest(++n,&MulOperatorTest3);
    good&=runTest(++n,&AddOperatorTest1);
    good&=runTest(++n,&SubOperatorTest1);
    if (good) cout << "All tests have passed." << endl;
}
#endif // MATRIXTEST_H_INCLUDED
