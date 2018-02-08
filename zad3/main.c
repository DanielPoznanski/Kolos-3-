#include <stdio.h>
#include <stdlib.h>

int f3(unsigned int l1,unsigned int l2)
{
    int tab [8] = {0};
    int licznik=0;
    while(l1>=4)
    {
        tab[l1&7]=1;
        l1=l1/2;
    }
    while(l2>=4)
    {
        if(tab[l2&7]==1)
            tab[l2&7]=2;
        l2=l2/2;
    }
    for(int i=0; i<8; i++)
    {
        if(tab[i]==2)
            licznik = licznik +1;
    }
    return licznik;
}
int main()
{
    printf("%i",f3(211,137));
}
