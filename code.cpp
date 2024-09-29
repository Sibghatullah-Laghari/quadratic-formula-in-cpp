// CODE FOR CALCULATING QUADRATIC FORMULA IN C++   -->

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;

    
    const double minLimit = -1000000; // mimimum input value
    const double maxLimit = 1000000;  // maximum output value

    cout<<"Enter three values to calculate the quadratic equation, as a, b, c respectively (range: -1000000 to 1000000) a can not be 0: "<<endl;   //command to the user

    cin >> a >> b >> c;

 
//for data handling, and we know that in quadretic formula the coefficiet of x^2 can't be 0
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero." <<endl;
        return 1;
    }

    double dis = pow(b, 2) - 4 * a * c;  // discriminent is seperatly calculated because roots depend upon the discriminent
    cout << "Discriminant: " << dis << endl; 

double root1,root2;

    if (dis > 0) {
        double root1 = (-b + sqrt(dis)) / (2 * a);// positive root
        double root2 = (-b - sqrt(dis)) / (2 * a);//negitive root

        cout << "Roots are real and different." << endl;
        
        cout << "Root 1: " << root1 << endl;// printing root1
        cout << "Root 2: " << root2 << endl;// printing root2
        }


      else if (dis == 0) {
        
        double root = -b / (2 * a);
        cout << "Roots are real and the same." << endl;//there will be only one root because discriminent is equal to 0
         cout << "Root: " << root << endl;
    }
     else {
      cout << "as discriminant is less than zero, so roots are complex: Root 1: " << root1 << " Root 2: " << root2 << " i";

        }
    
    //in this code i have used two if statements one for disciminent greater than zero other for discriminent equal to zero(else if)and in any case both statements are false then it will print else statement

    return 0;
}
