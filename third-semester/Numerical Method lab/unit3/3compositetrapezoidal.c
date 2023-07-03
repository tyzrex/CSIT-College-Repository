#include<stdio.h>
#include<math.h>

float f(float x){
    return ((3*cos(x))+5);
}

int main(){
    int n,i;
    float a,b,h,sum=0.0,integral;
    printf("Enter the value of a,b,h respectively: ");
    scanf("%f%f%f",&a,&b,&h);
    n=(b-a)/h;
    sum=f(a)+f(b);
    for(i=1;i<n;i++){
        sum=sum+2*f(a+i*h);
    }
    integral=(h/2)*sum;
    printf("The value of the integral is: %f",integral);
    return 0;
}