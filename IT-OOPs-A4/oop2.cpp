/* |\     /|     @author: umgbhalla
   | )   ( |     date: 27 Aug 2021 
   | |   | |        
   | |   | |   
   | (___) |   
   (_______) 
   */
/* Create a class  RationalNumber (fractions) with the following capabilities: 
 * a.Use integer variables to represent the data of the class : numerator and denominator.  
 * b.Create a setdata member function that initializes the value of data members of class  variables if not passed then initialized defaultly.  
 * c.Create  a  member  function  that  adds  two  rational  number  and  return  a resulting rational number. 
 * d.Create a member function that divides two rational number  and return a resulting rational number.. 
 * e.Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator. */

#include<iostream>
#include<iomanip>
using namespace std;

class RationalNumber {
  public :
    int numerator;
    int denominator;

    RationalNumber(int n = 0, int d  = 0) {
      numerator = n;
      denominator = d;
    }

    void setRationalNumber(int n, int d) {
      numerator = n;
      denominator = d;
    }

    RationalNumber addRationalNumber(RationalNumber a){
      RationalNumber t;

      t.numerator = a.numerator * denominator + a.denominator * numerator;
      t.denominator = a.denominator * denominator;
      t.reduction();
      return t;
    }
    RationalNumber subtractRationalNumber(RationalNumber s){
      RationalNumber t;

      t.numerator = s.denominator * numerator - denominator * s.numerator;
      t.denominator = s.denominator * denominator;
      t.reduction();

      return t;
    }

    RationalNumber multiplication( RationalNumber &m )
    {
      RationalNumber t;

      t.numerator = m.numerator * numerator;
      t.denominator = m.denominator * denominator;
      t.reduction();

      return t;
    }

    RationalNumber division( RationalNumber &v )
    {
      RationalNumber t;

      t.numerator = v.denominator * numerator;
      t.denominator = denominator * v.numerator;
      t.reduction();

      return t;
    }
    void reduction( void ) {
      int largest = numerator > denominator ? numerator : denominator;
      int gcd = 0; // greatest common divisor

      for ( int loop = 2; loop <= largest; ++loop )
        if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

      if (gcd != 0) {
        numerator /= gcd;
        denominator /= gcd;
      }
    };

    void print(){
      cout<<numerator<<"/"<<denominator<<"\n";
    }
};

int main() {
 int num1, num2, deno2, deno1;
  cout << "Enter numerator and denominator in space separated form {for eg 3 7}\t";
  cin >> num1 >> deno1;
  RationalNumber r1(num1, deno1);
  r1.print();
  cout << "Enter numerator and denominator in space separated form {for eg 3 7}\t";
  cin >> num2 >> deno2;
  RationalNumber r2(num2,deno2);
  r2.print();
  cout<<"\n"<<"sum of rational number is ";
  r2.addRationalNumber(r1).print();
  cout<<"\n"<<"division of rational number is ";
  r1.division(r2).print();
 
  cout << "\n Name: Umang Bhalla \n Scholar No: 20U03031 " << endl;

  return 0;
}
