#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void
) {

    int i1=4;
    double d1=4.0;
    char s1[11]="Hackerrank";

    int i2=12;
    double d2=4.0;
    char s2[100]="is the best place to learn and practice coding!";

    int i3;
    double d3;
    i3=i1+i2;
    d3=d1+d2;
    printf("%d\n", i3);
    printf("%.2f\n", d3);
    printf("%s %s\n", s1, s2);
	return 0;
}


