#include<string>
#include<iostream>
using namespace std;

int main()
{
    float sum =0;
    float x;

    cout << "Enter x: ";
    cin >> x;

    while(x!=0){
        if(x>0){
            sum = sum+x;
        }
        cout << "Enter x: ";
        cin >> x;
    }
    cout << "\n" << "sum = " << sum;
    return 0;
}
