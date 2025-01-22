int sommeEntierPositif(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + sommeEntierPositif(n-1);
    }
}

int puissance(int a, int b){
    if(b == 0){
        return 1;
    }
    else{
        return a * puissance(a,b-1);
    }
}

int pairImpair(int a){
    if (a == 0){
        return 0;
    }
    else if(a == 1){
        return 1;
    }
    else{
        return pairImpair(a-2);
    }
}

int pgcd(int a, int b){
    if(a ==b){
        return a;
    }
    else if(a < b){
        return pgcd(a,b-a);
    }
    else{
        return pgcd(a-b,b);
    }
}

int ex5(int n, int x){
    if(n%100 == x){
        return n;
    }
    else{
        return ex5(n+1, x);
    }
}