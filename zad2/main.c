#include <stdio.h>
#include <stdlib.h>

enum order {

ascending , descending , equal , unsorted

};

int f2(const void *n1,const void *n2){
int pom=*(int*)n1;
int pom2=*(int*)n2;
if(pom<pom2)
    return -1;
if(pom==pom2)
    return 0;
if(pom>pom2)
    return 1;
}

enum order f22(int tab[],int n,int(*fun)(const void*,const void *))
{
    int pom;
    pom=fun(&tab[0],&tab[1]);
    for(int i=1;i<n-1;i++){
        if (pom != fun(&tab[i],&tab[i+1]))
            return unsorted;
    }
    if(pom == -1)
        return ascending;
    if(pom ==0)
        return equal;
    if(pom == 1)
        return descending;
};

int main()
{
    int tab[4]={188,20,35,84};
    printf("%i",f22(tab,4,f2));

}
