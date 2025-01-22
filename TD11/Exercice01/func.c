#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int sommeEntierPositif(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + sommeEntierPositif(n-1);
    }
}