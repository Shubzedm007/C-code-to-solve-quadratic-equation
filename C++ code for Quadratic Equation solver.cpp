#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int a = 2, b = 4, c = 1;
   float discriminant, rPart, imagPart, x1, x2;
   if (a == 0) {
      cout << "This is not a quadratic equation";
   }else {
      discriminant = b*b - 4*a*c;
      if (discriminant > 0) {
         x1 = (-b + sqrt(discriminant)) / (2*a);
         x2 = (-b - sqrt(discriminant)) / (2*a);
         cout << "Roots are real and different." << endl;
         cout << "Root 1 = " << x1 << endl;
         cout << "Root 2 = " << x2 << endl;
      } else if (discriminant == 0) {
         cout << "Roots are real and same." << endl;
         x1 = (-b + sqrt(discriminant)) / (2*a);
         cout << "Root 1 = Root 2 =" << x1 << endl;
      }else {
         rPart = (float) -b/(2*a);
         imagPart =sqrt(-discriminant)/(2*a);
         cout << "Roots are complex and different." << endl;
         cout << "Root 1 = " << rPart << " + " << imagPart << "i" << endl;
         cout << "Root 2 = " << rPart << " - " << imagPart << "i" << endl;
      }
   }
   return 0;
}
