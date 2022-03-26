#include <iostream>
#include <stdio.h>

double mu       = 0;
double sigma    = 0;

double motion_sigma         = 2;
double measurement_sigma    = 4;

void motion_update(double motion_mu , double motion_sigma)
{
    mu      =   mu     +   motion_mu ;
    sigma   =   sigma  +   motion_sigma;     
}

void measurement_update(double measurement_mu , double measurement_sigma)
{
    mu      =   ( mu * measurement_sigma + sigma * measurement_mu ) / ( sigma + measurement_sigma);
    sigma   =   1  /  ( ( 1 / sigma ) + ( 1 / measurement_sigma )  );
}

int main()
{

std::cout << "Kalman Filter" << std::endl;

double motion[5]            =   {1,1,2,1,1};
double measurement[5]       =   {5,6,7,9,10};

mu = 35;

for (int i = 0; i < 5; i++)
{
    motion_update(motion[i], motion_sigma);
    std::cout << "Iteration: " << i+1 << " Pose: " << "mu = " << mu << " sigma = " << sigma << std::endl;
    measurement_update(measurement[i], measurement_sigma);
    std::cout << "Iteration: " << i+1 << " Pose: " << "mu = " << mu << " sigma = " << sigma << std::endl;

}

}