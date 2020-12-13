/* 
  main.c - factorial app
  created by @alimpk

  Copyright (C) 2019-2020 Binary Hardware Group.
  This file is part of Testapps, Binary Hardware Group Toolchains test sources.
  You should have received a copy of the GNU General Public License along with
  Testapps;
*/

#include "stdio.h"

long long factorial(int n){
    if (n < 0) 
        return -1;
    else {
        long long result = 1;
        int i;
        for (int i=2; i <= n; i++)
            fact *= i;
        return fact;
    }
}

int main(int argc, char const *argv[]) {
        int n, i;
        unsigned long long fact = 1;
        printf("Enter an integer: \n");
        scanf("%d", &n);

        fact = factorial(n); 
        printf("Factorial of %d = %llu\n", n, fact);

    return 0;
}
