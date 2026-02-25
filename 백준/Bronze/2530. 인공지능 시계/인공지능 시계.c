#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d;
    scanf("%d", &d);
    int br=0, cr=0;
    int bb=0, cc=0;
    cr = d % 60;
    cc = d / 60;
    c += cr;
    while (c > 59)
    {
            c -= 60;
            cc++;
    }
    br = cc % 60;
    bb = cc / 60;
    b += br;
    while (b > 59)
    {
            b -= 60;
            bb++;
    }
    a += bb;
    while (a > 23)
    {
            a -= 24;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}