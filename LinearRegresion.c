#include<stdio.h>

#define S 50

int main(){
    int n, i;
    float sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;

    printf("Enter amount of data: ");
    scanf("%d", &n);

    float x[n], fx[n];

    for (i = 0; i<n; i++){
        printf("Enter with x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("Enter with fx[%d] = ", i);
        scanf("%f", &fx[i]);
    }

    for(i = 0; i<n; i++){
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i]*x[i];
        sumY = sumY + fx[i];
        sumXY = sumXY + x[i]*fx[i];
    }

    b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    a = (sumY - b*sumX)/n;
    printf("Values are: a = %.3f and b = %.3f\n",a,b);
    printf("Equation of best fit is: y = %.3f + %.3fx",a,b);
    fflush(stdin);
    getchar();
    return 0;
}