 #include <iostream>
 #include "Complex.h" // Complex class definition
 using namespace std;

 // Constructor
 Complex::Complex( double realPart, double imaginaryPart )
 : real( realPart ),
 imaginary( imaginaryPart )
 {
 // empty body
 } // end Complex constructor


  Complex Complex::operator!=(const Complex & operand2)
 {
	 if(real != operand2.real){
		 real = operand2.real;
	return real;
	 }
 }
 Complex Complex::operator==(const Complex & operand2)
 {
	  if(real == operand2.real){
		 real = operand2.real;
	return real;
	 }
 }

 	 void Complex::setReal(double realPart){
		real = realPart;
	 }
	 void Complex::setImag(double imaginaryPart){
		imaginary = imaginaryPart;
	 }
	 double Complex::getReal() const{
		 return	real;}

	 double Complex::getImag() const{
		 return	imaginary;}

 // display a Complex object in the form: (a, b)
	ostream & operator << (ostream & output, const Complex &temp){
		output << "" << temp.getReal() << endl;
		output << "" << temp.getImag() << endl;
		return output;
	 }
	istream & operator >> (istream &input, const Complex &temp){
		cout << "";
		input >> temp.getImag() << endl;
		cout <<"";
		input >> temp.getReal() << endl;
	}
