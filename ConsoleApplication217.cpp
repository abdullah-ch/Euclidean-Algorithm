// ConsoleApplication217.cpp : Defines the entry point for the console application.



#include <iostream>
#include <vector>
using namespace std;


 

 long long Greatest_Common_Divisor( long long number_1 , long long number_2)
 {
	 long long GCD = 0;

	 for (long long i = 1; i <= number_1+ number_2; i++)
	 {
		 if ((number_1 % i == 0) && (number_2 % i == 0))
		 {
			 GCD = i;
		 }

	 }


	 return GCD;
 }



 long long Faster_Greatest_Common_Divisor(long long number_1, long long number_2)
 {
	 if (number_2 == 0)
	 {
		 return number_1;
	 }

	 else
	 {
		 long long remainder_of_number_1_Divided_by_number_2 = 0;
			 remainder_of_number_1_Divided_by_number_2 = number_1 % number_2;
			 return Faster_Greatest_Common_Divisor(number_2 , remainder_of_number_1_Divided_by_number_2);

	 }
 }


int main()
{
	
	long long number_1 = 0;
	long long number_2 = 0;

	cout << "Enter the TWO numbers " << endl;
	cin >> number_1;
	cout << endl;
	cin >> number_2;
      
	long long answer = Greatest_Common_Divisor(number_1, number_2);
	//long long answer_1 = Faster_Greatest_Common_Divisor(number_1, number_2);
	cout << answer << endl;
	//cout << answer_1 << endl;


	system("PAUSE");

}


