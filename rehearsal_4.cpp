#include <iostream>
#include <string>
using namespace std;

string compress(string M){
    string r;
    int I = 1;
    int L;
    L = M.size();
    while(I<=L){
        r =  r + M[I-1];
        I = I +3;

    }
    return r;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("X");
    string i = compress("CPECMU");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
