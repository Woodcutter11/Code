#include<stdio.h>

int main()
{
float P, R;
double SI;
int time;

printf("Enter principal,rate and time:");
scanf("%f %f %d", &P, &R, &time);

SI = ( P * R * time) / 100.0;

printf("Amount = Rs. %5.2f\n", P);
printf("Rate = Rs. %5.2f\n", R);
printf("Time = %d years\n", time);
printf("Simple Interest = %5.2f\n", SI);

return 0;

}
