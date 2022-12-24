#include <iostream>
#include <cmath>

 using namespace std;

 
void simple_calc_function ();

void simple_calc_printer (int answer, char operater);

 
class SimpleCalc
{

 
public:
int firstNumber;
  
int secondNumber;
  
char operater;

 
public:
SimpleCalc (int num1, int num2, char operates)
  {
    
firstNumber = num1;
    
secondNumber = num2;
    
operater = operates;
  
} 
 
int sum ()
  {
    
return firstNumber + secondNumber;
  
}
  
 
int difference ()
  {
    
return firstNumber - secondNumber;
  
}
  
 
int product ()
  {
    
return firstNumber * secondNumber;
  
}
  
 
int quotient ()
  {
    
return firstNumber / secondNumber;
  
}

 
};


 
 
 
int
main ()
{
  
 
 
simple_calc_function ();

 
 
} 
 
 
void

simple_calc_printer (int operand1, int operand2, char operater, float answer)
{
  
cout << operand1 << " " << operater << " " << operand2 << " " << "=" <<
    "\t" << answer;

} 
 
 
void

simple_calc_function ()
{
  
 
int num1, num2;
  
char operater;
  
 
cout << "Enter firstNumber : ";
  
cin >> num1;
  
 
cout << "Enter secondNumber : ";
  
cin >> num2;
  
 
cout << "Enter operator (+, -, /, *) : ";
  
cin >> operater;
  
 
SimpleCalc calculator (num1, num2, operater);
  
 
switch (calculator.operater)
    {
    
 
case ('+'):
      
simple_calc_printer (calculator.firstNumber, calculator.secondNumber,
			    calculator.operater, calculator.sum ());
      
break;
    
case ('-'):
      
simple_calc_printer (calculator.firstNumber, calculator.secondNumber,
			    calculator.operater, calculator.difference ());
      
break;
    
case ('/'):
      
simple_calc_printer (calculator.firstNumber, calculator.secondNumber,
			    calculator.operater, calculator.quotient ());
      
break;
    
case ('*'):
      
simple_calc_printer (calculator.firstNumber, calculator.secondNumber,
			    calculator.operater, calculator.product ());
      
break;
    
default:
      
cout << "SYSTEMATIC ERROR !" << endl;
    
}

 
}

