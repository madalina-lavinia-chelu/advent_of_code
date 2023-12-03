#include <iostream>
#include <cstring>

using namespace std;

ifstream in("date.in");

int main()
{
    char sir[10];
    char *p;
    int l, w, h;
    int k;
    int suprafataprismei;
    int suprafatafin = 0;
    int sup[3];
    int MIN;
    for(int i=0; i<1000 ; i++)
    {
        in >> sir;
        p = strtok(sir, "x");
        l = 0;
        w = 0;
        h = 0;
        while(p != NULL)
        {
            k=0;
            for(int j= 0 ; j< strlen(p) ;j++)
            {
                k = k*10+(p[j]- '0');
            }
            if(l==0)
                l = k;
            else{
                if( w == 0 )
                    w = k;
                else
                    h = k;
            }
            p = strtok(NULL, "x");
        }
        suprafataprismei = (2*(l*w) + 2*(w*h)) + 2*(h*l);
        sup[0] = l*w;
        sup[1] = w*h;
        sup[2] = l*h;
        MIN = sup[1];
        for(int i=0; i<3; i++)
        {
            if(MIN > sup[i])
                MIN = sup[i];
        }
        suprafatafin += suprafataprismei + MIN;
    }
    cout<<suprafatafin;
    return 0;
}
