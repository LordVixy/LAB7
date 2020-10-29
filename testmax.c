#include <stdio.h>
#include "max.h"

int main(){
        int n = 5;
        int tab[]={2,5,7,2,9};
        int result;
        max(tab,n,&result);
        printf("le max est %d\n,",result);
        return 0;
}
