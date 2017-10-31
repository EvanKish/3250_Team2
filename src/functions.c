#include "definitions.h"
#include "headers.h"
/*
 *Function Takes user input
 *@param inputName takes the type of input title and displays to user
 *@return the key entered
 */
float input(char *inputName) {

	float key;
	char temp[9999];

	do {

		printf("%s", inputName);

		if (!scanf("%f", &key)) {
			//Takes in input from user and stores in temp
			scanf("%s", temp);
			printf("Please try again!\n");
		} else {
			return key;
		}

	} while (1);
}

/*
 *Function takes input for accountant calulator
 *@param inputName takes in title of input (char*)
 *@param num takes amount of terms to be calculated (int)
 *@return the key entered
 */
float inputAccountCalculator(char *inputName, int num) {
	float key;
	char temp[999];

	do {

		printf("%s[%d]: ", inputName, num + 1);

		if (!scanf("%f", &key)) {

			scanf("%s", temp);
			printf("Please try again!\n");
		} else {
			return key;
		}
	} while (1);

}

/*
 *Function adds passed input
 *@param adder is flaot passed and is first added number (float)
 *@param addIn is the second number added and passed (float)
 *@return the key entered
 */
float plus(float adder, float addIn) {

	float result;
	result = adder + addIn;

	return result;
}

/*
 *Function subtracts passed input
 *@param firstMinus is number to subtract
 *@param secondMinus is number to subtract from
 *@return the key entered
 */
float minus(float firstMinus, float secondMinus) {

	float result;
	result = firstMinus - secondMinus;

	return result;
}

/*
 *Function multiplies passed input
 *@param multO is number multiplied (float)
 *@param multN is number to be multiplied by (float)
 *@return the key entered
 */
float mult(float multO, float multN) {

	float result;
	result = multO * multN;

	return result;
}

/*
 *Function divides passed input
 *@param divider is be be divided (float)
 *@param dividIn is number to be divided by (float)
 *@return the key entered
 */
float divind(float divider, float dividIn) {

	float result;
	result = divider / dividIn;

	return result;
}

/*
 *Function Takes and calculates factorials
 *@param term is integer
 *@return the calculated factorial as an integer
 */
int factorial(int term) {

	if (term == 0) {
		return 1;
	}

	return term * factorial(term - 1);
}

/*
 *Function calculates the fib function
 *@param term will be passed as int
 *@return  integer fib
 */
int fib(int term) {

	if (term == 1) {
		return 0;
	}
	if (term == 2) {
		return 1;
	}
	return fib(term - 1) + fib(term - 2);
}

/*
 *Function calculates the sine function
 *@param radius will be passed as float
 *@return the calculated sine
 */
float sine(float radius) {

	float val, sin;
	val = radius * (PI / 180);
	sin = val - (power(val, 3) / factorial(3)) + (power(val, 5) / factorial(5)) - (power(val, 7) / factorial(7));
	return sin;
}

/**
 * Computes cosine value
 * @param radius is float provided by user
 * @return calculated cosine
 */
float cosine(float radius) {
	float val, cos;
	val = radius * (PI / 180);
	cos = 1 - (power(val, 2) / factorial(2)) + (power(val, 4) / factorial(4)) - (power(val, 6) / factorial(6));
	return cos;
}

/**
 * Prints result of factorial or fibonacci
 *@param screen is the beginning of the message to be printed
 *@param sym is an ! for factorial or a space for fibonacci
 *@param ini is specified by the user
 *@param res is the calculated result
 */
int spprint(char *screen, char *sym, int ini, int res) {
	printf("%s %d%s = %d\n", screen, ini, sym, res);

	return 0;
}

/**
 * Prints result of Sine, Cosine, Tangent, Cosecant, Secant, or Cotangent
 *@param screen is the beginning of the message to be printed
 *@param sym is a symbol designating the function chosen
 *@param ini is specified by the user
 *@param res is the calculated result
 */
float spprintf(char *screen, char *sym, float ini, float res) {
	printf("%s %.4f%s = %.4f\n", screen, ini, sym, res);

	return 0;
}

/**
 * Prints result of multiplication, subtraction, addition, division, and power
 *@param screen is the beginning of the message to be printed
 *@param sym is a symbol designating the function chosen
 *@param ini is specified by the user
 *@param res is the calculated result
 */
float print(char *screen, char *sym, float ini, float upt, float res) {
	printf("%s %.4f %s %.4f = %.4f\n", screen, ini, sym, upt, res);

	return 0;
}

/**
 * Prints range, xBar, max and min
 *@param screen is the beginning of the message to be printed
 *@param ans is the calculated result
 */
float Aryprint(char *screen, float ans) {
	printf("%s : %.4f\n", screen, ans);

	return 0;
}








