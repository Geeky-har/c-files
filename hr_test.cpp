#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long b;
    int a;
    double e;
      char c;
    float d; 
    scanf(" %d %lld %c %f %lf" , &a, &b, &c, &d, &e);
    printf("%d\n", a);
    printf("%lld\n",b);
    printf("%c\n", c);
    printf("%.3f\n", d);
    printf("%.9lf",e);
    
    return 0;
}

