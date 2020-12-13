/* 
  hello.c - hello world app
  created by @alimpk

  Copyright (C) 2019-2020 Binary Hardware Group.
  This file is part of Testapps, Binary Hardware Group Toolchains test sources.
  You should have received a copy of the GNU General Public License along with
  Testapps;
*/

#include "stdio.h"

int main(int argc, char const *argv[]) {
        int n, i;
        unsigned long long fact = 1;
        printf("Enter an integer: \n");
        scanf("%d", &n);

        // shows error if the user enters a negative integer
        if (n < 0)
                printf("Error! Factorial of a negative number doesn't exist.\n");
        else {
                for (i = 1; i <= n; ++i) {
                fact *= i;
        }
                printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
