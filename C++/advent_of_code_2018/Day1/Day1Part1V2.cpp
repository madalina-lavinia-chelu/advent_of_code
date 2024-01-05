#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.txt");

int main()
{
    int n, s = 0;
    while (fin >> n){
        cout << n << endl;
        s += n;
    }
    cout << s;

    return 0;
}