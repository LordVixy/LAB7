#include <stdio.h>
#include "max.h"


void max(int tab[],int n, int *max){
    *max = tab[0];
        for (int i=1; i<=n-2; i++){
                if (tab[i]>*max){
                        *max = tab[i];
                }
        }
}
