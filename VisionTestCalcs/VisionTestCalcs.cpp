#include <iostream>
using namespace std;

int main() {
   double realSize = 2;
   double focalLength = 1;
   double perceivedSize = 0.5;
   double distance = (realSize * focalLength)/perceivedSize;
   cout << "The distance is: " << distance << endl;

   double x_distance = 1;
   double degreesPerPixel = 0.5;
   double robotAngle = x_distance * degreesPerPixel;
   cout << "The robot angle is: " << robotAngle << endl;
   return 0;
}
