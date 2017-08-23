#include <iostream>
#include <math.h>
using namespace std;

int main() {

   //Constants
   double realSize = 2;
   double focalLength = 1;
   double degreesPerPixel = 0.5;

   //Intermediate calculations
   //Numbers that are important but only because we need them to calculate other things
   double perceivedSize = 0.5; //This will be calculated using some other function provided by OpenCV or something.
   double x_distance = 30; //This will be calculated by some other function provided by OpenCV or something.

   double angleOffset = 45; //This will be calculated using some other function which I've yet to derive.
   double distanceDirect = (realSize * focalLength)/perceivedSize;
   double angleRobot = x_distance * degreesPerPixel;

   //Final calculations
   //Numbers that will actually be used in motor control
   double angleRotate = 90 - angleOffset - angleRobot;
   double distanceOffset = distanceDirect * sin(angleOffset);
   double distanceTravel = distanceDirect * cos(angleOffset);

   //Console log
   cout << "The robot is " << distanceDirect << " units away from the peg." << endl;
   cout << "The robot angle is " << angleRobot << " degrees." << endl;
   cout << "First, the robot needs to turn " << angleRotate << " degrees to face the line perpendicular to the peg." << endl;
   cout << "Second, the robot needs to drive " << distanceOffset << " units to be on the perpendicular line." << endl;
   cout << "Third, the robot needs to turn 90 degrees to face the peg." << endl;
   cout << "Finally, the robot needs to drive " << distanceTravel << " units to reach the peg." << endl;

   return 0;
}
