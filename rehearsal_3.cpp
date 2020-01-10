#include <iostream>
#include<cmath>
using namespace std;

float sumSqrt(int N){
    float L=0.0;
    while(N>0){
        L = L+(1/sqrt(N));
        N--;
    }

    return L;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(3);
    double g = sumSqrt(-5);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
