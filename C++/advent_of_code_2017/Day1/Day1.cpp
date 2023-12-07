#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[3000];
    int s = 0;
    cin>>c;
    for(int i = 0; i < strlen(c)-1; i++){
        if(c[i] == c[i+1]) s = s + c[i] - 48;
    }
    if(c[0] == c[strlen(c)-1]) s = s + c[0] - 48;
    cout<<s;
}