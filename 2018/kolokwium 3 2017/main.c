#include <stdio.h>
#include <stdlib.h>

struct punkt {
float x,y;
};

struct punkt **f1(struct punkt *tab,int n , int *liczba, float a, float b, float a1,float b1){

struct punkt **tab2=malloc(sizeof(struct punkt*)*n);

float y,y2;
int licznik=0;

for(int i=0;i<n;i++){
y=a*tab[i].x+b;
y2=a1*tab[i].x+b1;
if((tab[i].y>y && tab[i].y<y2) || (tab[i].y<y && tab[i].y>y2)){
    tab2[licznik]=&tab[i];
    licznik=licznik+1;
}
}

 *liczba=licznik;
    if(licznik==0)
        return NULL;

struct punkt **tab3=malloc(sizeof(struct punkt*)*licznik);

for(int i=0;i<licznik;i++){

    tab3[i]=tab2[i];


}
free (tab2);
return tab3;
};


int main()
{
    float a,a1,b,b1;
    int liczba,n;
    n=3;
    struct punkt tab2[3]={{1,1},{-2,0},{2,7}};
    a=2;
    a1=-5;
    b=1;
    b1=4;

    struct punkt **tab=f1(tab2,n,&liczba,a,b,a1,b1);
    printf("%i",liczba);
}
