/*
=================================
Assessment One for PHY2027 module
Date: 14/10/2018
=================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define G 9.91

/*
===================================================================================
This is a program to calculate the distance, height and time projected of an object
launched from user defined parameters of velocity and angle of projection
===================================================================================
*/


int main()
{
  double velocity, angle, distanceProjected, heightProjected, timeProjected, theta, alpha;

  printf("Enter your value for the launch angle(degrees) must be between 0 - 90 degrees: ");
  scanf("%lg",&angle);

   /*
   =============
   Sanity checks
   =============
   */
   if (angle > 90 || angle < 0) {
       printf("Error: Not a valid range of angles\n");
       return -1;
   }
  printf("Enter a value for your velocity(m/s), can't be a negative velocity: ");
  scanf("%lg",&velocity);

   if (velocity<0) {
       printf("Error: Not in the valid range of velocities\n");
       return -2;
   }
   /*
   ===================
   Result calculations
   ===================
   */
   else {
       theta = ((angle*M_PI)/180);
       alpha = velocity*sin(theta);
       heightProjected = (pow(alpha,2))/(2*G);
       timeProjected = (((2*velocity)*sin(theta))/G);
       distanceProjected = ((cos(theta)*velocity)*timeProjected);
       printf("Your time is: %f(s) and your height reached is: %f(m) and your distance reached is: %f(m)", timeProjected, heightProjected, distanceProjected);
       return 0;
   }
}

//Enter your value for the launch angle(degrees) must be between 0 - 90 degrees: 0
//Enter a value for your velocity(m/s), can't be a negative velocity: 25
//Your time is: 0.000000(s) and your height reached is: 0.000000(m) and your distance reached is: 0.000000(m)

//Enter your value for the launch angle(degrees) must be between 0 - 90 degrees: 90
//Enter a value for your velocity(m/s), can't be a negative velocity: 25
//Your time is: 5.045409(s) and your height reached is: 31.533804(m) and your distance reached is: 0.000000(m)

//Enter your value for the launch angle(degrees) must be between 0 - 90 degrees: 45
//Enter a value for your velocity(m/s), can't be a negative velocity: 25
//Your time is: 3.567643(s) and your height reached is: 15.766902(m) and your distance reached is: 63.067608(m)

//Enter your value for the launch angle(degrees) must be between 0 - 90 degrees: 55
//Enter a value for your velocity(m/s), can't be a negative velocity: -10
//Error: Not in the valid range of velocities
