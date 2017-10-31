#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.1415926535897932384626433832795

#include "factorial.h"
#include "matrices.h"
#include "powerfunction.h"
#include "conversions.h"


FILE *help;

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
            scanf("%s", &temp);
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

            scanf("%s", &temp);
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
 *Function calculates the power of
 *@param  base will be passed as float
 *@param  pow is integer (power of)
 *@return the calculated results to float
 */
float power(float base, int pow) {

    int i;
    float mem = 1;
    for (i = 0; i < pow; i++) {
        mem *= base;
    }
    return mem;
}

/*
 *Function calculates the sine function
 *@param radius will be passed as float
 *@return the calculated sine
 */
float sine(float radius) {

    float val, sin;
    val = radius * (PI / 180);
    sin = val - (power(val, 3) / factorial(3)) + (power(val, 5) / factorial(5)
            (power(val, 7) / factorial(7));
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
 * Prints range, x_bar, max and min
 *@param screen is the beginning of the message to be printed
 *@param ans is the calculated result
 */
float Aryprint(char *screen, float ans) {
    printf("%s : %.4f\n", screen, ans);

    return 0;
}

int main(int argc, char *argv[]) {
    float a, b, c;
    float r1, r2;
    char sym;
    int menu, rmenu, smenu;

    do {
        printf("\n======\n");
        printf("Menu\n");
        printf("======\n");
        printf("1.Regular Calculator\n");
        printf("2.Scientific Calculator\n");
        printf("3.Acountant Calculator\n");
        printf("4.Read Help and Notice\n");
        printf("0.Exit\n");
        menu = input("Select Menu: ");
        system("clear");

        if (menu == 1) {

            do {
                printf("\n======================\n");
                printf("Regular Calculator Menu\n");
                printf("=======================\n");
                printf("1.PLUS\n");
                printf("2.MINUS\n");
                printf("3.MULTIPLY\n");
                printf("4.DIVIDE\n");
                printf("0.BACK\n");
                rmenu = input("Select Menu: ");
                system("clear");

                if (rmenu == 1) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = plus(a, b);
                    printf("\n");
                    print("sum of", "plus", a, b, c);
                }

                if (rmenu == 2) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = minus(a, b);
                    printf("\n");
                    print("result of", "minus", a, b, c);
                }

                if (rmenu == 3) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = mult(a, b);
                    printf("\n");
                    print("result of", "x", a, b, c);
                }

                if (rmenu == 4) {
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    c = divind(a, b);
                    printf("\n");
                    print("result", "/", a, b, c);
                }

            } while (rmenu != 0);
        }

        if (menu == 2) {

            do {
                printf("\n===========================\n");
                printf("Scientific Calculator Menu\n");
                printf("===========================\n");
                printf("1.Power function (x^y)\n");
                printf("2.Factorial Series (x!)\n");
                printf("3.Fibonacci Series \n");
                printf("4.Sine (Sin x)\n");
                printf("5.Cosine (cos x)\n");
                printf("6.Tangent (Tan x)\n");
                printf("7.Cosec (cosec x)\n");
                printf("8.Sec (sec x)\n");
                printf("9.Cot (cot x)\n");
                printf("10.Matrix functions\n");
                printf("11.Conversion functions\n");
                printf("0.Back\n");
                smenu = input("Select Menu: ");
                system("clear");

                if (smenu == 1) {
                    a = input("Enter base(x): ");
                    b = input("Enter power(y): ");
                    c = powerfn(a, b);
                    printf("\n");
                    print("result of", "^", a, b, c);
                }

                if (smenu == 2) {
                    a = input("Enter numbers of term: ");
                    c = fact(a);
                    printf("\n");
                    spprint("Factorial of", "!", a, c);
                }

                if (smenu == 3) {
                    a = input("Enter numbers of term: ");
                    c = fib(a);
                    printf("\n");
                    spprint("Fibonacci of", " ", a, c);
                }

                if (smenu == 4) {
                    a = input("Enter your value: ");
                    c = sine(a);
                    printf("\n");
                    spprintf("Sine of", " ", a, c);
                }

                if (smenu == 5) {
                    a = input("Enter your value: ");
                    c = cosine(a);
                    printf("\n");
                    spprintf("Cosine of", " ", a, c);
                }

                if (smenu == 6) {
                    a = input("Enter your value: ");
                    r1 = sine(a);
                    r2 = cosine(a);
                    c = r1 / r2;
                    printf("\n");
                    spprintf("Tangent of", " ", a, c);
                }

                if (smenu == 7) {
                    a = input("Enter your value: ");
                    c = sine(a);
                    printf("\n");
                    spprintf("Cosec of", " ", a, 1 / c);
                }

                if (smenu == 5) {
                    a = input("Enter your value: ");
                    c = cosine(a);
                    printf("\n");
                    spprintf("Sec of", " ", a, 1 / c);
                }

                if (smenu == 8) {
                    a = input("Enter your value: ");
                    r1 = sine(a);
                    r2 = cosine(a);
                    c = r1 / r2;
                    printf("\n");
                    spprintf("Cot of", " ", a, 1 / c);
                }

                if (smenu == 10) {
                    int operation_number = 0;
                    printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
                    printf("\n\tEnter an operation command:");
                    scanf("%d", &operation_number);

                    switch (operation_number) {
                        case 1:
                            matrix_sum();
                            break;
                        case 2:
                            matrix_transpose();
                            break;
                        case 3:
                            matrix_product();
                            break;
                    }
                }

                if (smenu == 11) {
                    int operation_number = 0;
                    printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
                    printf("\n\n\n\t\tPlease choose an operation number:");
                    scanf("%d", &operation_number);

                    switch (operation_number) {
                        case 1:
                            temp();
                            break;
                        case 2:
                            time();
                            break;
                    }
                    break;

                }


            } while (smenu != 0);
        }

        if (menu == 3) {

            warp:

            //system("clear");
            printf("\n===========================\n");
            printf("Accountant Calculator Menu\n");
            printf("===========================\n");
            printf("Please set value first\n");
            printf("\n");

            int n, i, j, amenu;
            float rest, max, min, x_bar = 0, sum = 0;
            float med, mod, count;
            int temp;

            n = input("Enter number of term: ");

            float set[n];
            int numtemp[n];

            for (i = 0; i < n; i++) {
                set[i] = inputAccountCalculator("Enter value terms", i);
            }

            for (i = 0; i < n; i++) {
                for (j = 0; j <= i; j++) {
                    if (set[j] > set[i]) {
                        rest = set[j];
                        set[j] = set[i];
                        set[i] = rest;
                    }
                }
            }

            min = set[0];
            max = set[n - 1];

            for (i = 0; i < n; i++) {
                sum += set[i];
            }
            x_bar = (sum / n);

            if ((n % 2) != 0) {
                med = set[((n + 1) / 2) - 1];
            } else {
                med = (set[((n + 1) / 2)] + set[((n + 1) / 2) - 1]) / 2;
            }

            for (i = 0; i < n; i++) {
                numtemp[i] = 0;
            }
            for (i = 0; i < n; i++) {
                temp = set[i];
                for (j = i; j < n; j++) {
                    if (set[j] == temp) {
                        numtemp[i]++;
                    }
                }
            }

            temp = numtemp[0];
            for (i = 1; i < n; i++) {
                if (numtemp[i] > temp) {
                    temp = numtemp[i];
                }
            }

            if (i == 999) {//Always False If

                warp1://Warp form menu
                j = 0;

                for (i = 0; i < n; i++) {
                    if (numtemp[i] == temp) {
                        j++;
                    }
                }
                /*this small part might be off in alignment rn, I'm waiting for the above code to be realigned so I know where this goes (This comment while be deleted when I do that thing)*/
                if (j == 1) {
                    for (i = 0; i < n; i++) {
                        if (numTemp[i] == temp) {
                            printf("%.4f\n", set[i]);
                        }
                    }
                } else {
                    printf("Not have mode value\n");
                }
            }

            /**
             * This portion of the program outputs a menu, gathers the
             * input from the user, and outputs the appropriate response.
             */

            do {
                printf("\n===========================\n");
                printf("Accountant Calculator Menu\n");
                printf("===========================\n");
                printf("1.Show max\n");
                printf("2.Show min\n");
                printf("3.Show x-bar\n");
                printf("4.Show range\n");
                printf("5.Show Med\n");
                printf("6.Show Mode\n");
                printf("7.Show value(sort)\n");
                printf("8.Set new value\n");
                printf("0.Back\n");
                aMenu = input("Select Menu: ");
                system("clear");

                /*
                 * Menu options use the function Aryprint:
                 * a print function specifically for the accountant calculator
                 * menu. It has two parameters, a string and a floating number.
                 */

                if (aMenu == 1) {
                    printf("\n");
                    Aryprint("Max is", max);
                }

                if (aMenu == 2) {
                    printf("\n");
                    Aryprint("Min is", min);
                }

                if (aMenu == 3) {
                    printf("\n");
                    Aryprint("X-bar is", xBar);
                }

                if (aMenu == 4) {
                    printf("\n");
                    Aryprint("Range is", max - min);
                }

                if (aMenu == 5) {
                    printf("\n");
                    Aryprint("Med is", med);
                }

                if (aMenu == 6) {
                    printf("\n");
                    printf("Mode is: ");
                    goto warp1;
                }

                if (aMenu == 7) {
                    printf("\n");
                    printf("Set of number is(sort): ");
                    for (i = 0; i < n; i++) {
                        printf("%.3f ", set[i]);
                    }
                }

                if (aMenu == 8) {
                    goto warp;
                }

                /**
                 * Accountant menu loop runs as long as the user input for menu does
                 * not equal to zero (the back condition)
                 */

            } while (aMenu != 0);
        }

        /*
         * Checks menu flag for the fourth user option: help and notice
         * Opens and saves the contents of the file User_helping.txt to the
         * text variable and outputs it to the screen (one character at a time)
         */

        if (menu == 4) {
            char text;
            help = fopen("User_helping.txt", "r");
            while ((text = fgetc(help)) != EOF) {
                fprintf(stdout, "%c", text);
            }
            fclose(help);
        }

        /*
         * Runs the overarching menu program while the user does not choose to quit
         * (Option 0: Exit)
         */

    } while (menu != 0);

    return 0;
}