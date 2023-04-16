// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<cstring>

using namespace std;

int strcomp(char a[50], char b[50]) {
    int diff = strcmp(a, b);
    return diff;
}
double fact(double n) {
    double factorial = 1;
    if (n < 0) { cout << "Factorial of  a negative number is not defined"; }
    else
    {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
    }
    return factorial;
}
double comb(double m, double r) {

    double ncr = fact(m) / (fact(r) * fact(m - r));
    double q = (fact(r) * fact(m - r));
    if (q == 0) { cout << "NOT DEFINED\n"; }
    return ncr;
}
double permutation(double n, double r) {
    double nPr = comb(n, r) * fact(r);
    return nPr;
}




int main()
{
    cout << "WELCOME TO MY CALCULATOR " << endl;
    cout << "Enter (=) before pressing enter to display result.\nType (:) before scientific operations (eg. :sin ) and only press enter without typing (=). \n This calculator doesn't follow BODMAS it performs straight operations.\nOperation Limit = 100. " << endl;
    
   double a;
  double  result;
  char op[100];
  char op2[100];

  cin >> a;
  for (int i = 0; i < 100; i++) {
      cin >> op[i];
      if (op[i] == '+')
      {
          double b;
          cin >> b;
          result = a + b;
        //  cout << " = " << result << endl;

      }
      else if (op[i] == '-')
      {
          double b;
          cin >> b;
          result = a - b;
        //  cout << " = " << result << endl;
      }
      else if (op[i] == '*' || op[0] == 'x')
      {
          double b;
          cin >> b;
          result = a * b;
        //  cout << " = " << result << endl;
      }
      else if (op[i] == '/')
      {
          double b;
          cin >> b;
          result = a / b;
          int remainder;
          remainder = fmod(a, b);
        //  cout << " = " << result << endl;
          cout << "Remainder = " << remainder << endl;

      }
      else if (op[i] == '^')
      {
          double b;
          cin >> b;
          result = pow(a, b);
         // cout << " = " << result << endl;
      }
      else if (op[i] == 'C')
      {
          double b;
          cin >> b;
          result = comb(a, b);
         // cout << " = " << result << endl;
      }
      else if (op[i] == 'P')
      {
          double b;
          cin >> b;
          result = permutation(a, b);
          //cout << " = " << result << endl;
      }
      else if (op[i] == '!')
      {
          result = fact(a);
         // cout << " = " << result << endl;
          cout << "FACTORIAL ONLY WORKS CORRECTLY FOR INTEGERS " << endl;
      }
      else if (op[i] == ':') {
          cin.getline(op2, 5);


          if (strcmp(op2, "log") == 0) {
              
              result = log(a);
              cout << " = " << result;
          }
          if (strcmp(op2, "ln") == 0) {
             
              result = log(a);
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "sin") == 0) {
              cout << " = " << sin(a) << endl;
              result = sin(a);
          }
          else if (strcmp(op2, "cos") == 0) {
              cout << " = " << cos(a) << endl;
              result = cos(a);
          }
          else if (strcmp(op2, "tan") == 0) {
              cout << " = " << tan(a) << endl;
              result = tan(a);
          }
          else if (strcmp(op2, "asin") == 0) {
            
              result = asin(a);
              if (result*0 != 0 ) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "acos") == 0) {
             
              result = acos(a);
              if (result*0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "atan") == 0) {
             
              result = atan(a);
              if (result == NAN) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "sinh") == 0) {
              
              result = sinh(a);
              if (result*0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "cosh") == 0) {
             
              result = cosh(a);
              if (result*0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "tanh") == 0) {
              
              result = tanh(a);
              if (result * 0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "sqrt") == 0) {
             
              result = sqrt(a);
              if (result *0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }else if (strcmp(op2, "cbrt") == 0) {
             
              result = pow(a,(1/3));
              if (result *0 != 0) {
                  cout << "Not defined" << endl;
                  result = 0;
              }
              cout << " = " << result << endl;
          }
          else if (strcmp(op2, "exp") == 0) {
              cout << " = " << exp(a) << endl;
              result = exp(a);
          }
          else if (strcmp(op2, "mod") == 0) {
              cout << " = " << fabs(a) << endl;
              result = fabs(a);
          }
          else if (strcmp(op2, "GIF") == 0) {
              cout << " = " << floor(a) << endl;
              result = floor(a);
          }
          else if (strcmp(op2, "LIF") == 0) {
              cout << " = " << ceil(a) << endl;
              result = ceil(a);
          }
      }
      else if (op[i] == '=') {
      cout << a;
      result = a;
         }
         
          else {
              cout << " OPERATION NOT DEFINED " << endl;
              cout << a;
              result = a;
          }
          a = result;
      }
  
  


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
