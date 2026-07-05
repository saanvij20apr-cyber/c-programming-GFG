// Q23: Write a program to reverse a string using recursion.

// #include<stdio.h>
// #include<string.h>

// void reverseStr(char str[], int start, int end);
// void printStr(char str[], int n);

// int main() {
//     char str[] = "GEEKS";
//     int n = 5;

//     reverseStr(str, 0, n - 1);
//     printStr(str, n);
//     return 0;
// }

// void reverseStr(char str[], int start, int end) {
//     if(start >= end) {
//         return;
//     }
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     reverseStr(str, start + 1, end - 1);
// }

// void printStr(char str[], int n) {
//     for(int i = 0; i < n; i++) {
//         printf("%c\t", str[i]);
//     }
// }
// x-------------------------------------------------------x

// Q22: Write a program to print the first letter of each word.

// #include<stdio.h>
// #include<string.h>

// void printFirstLetter(char str[]);

// int main() {
//     char str[] = "You cannot reason with a tiger when your head is in its mouth.";
//     printFirstLetter(str);
//     return 0;
// }

// void printFirstLetter(char str[]) {
//     int first = 1;

//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] != ' ' && first) {
//             printf("%c ", str[i]);
//             first = 0;
//         }
//         if(str[i] == ' ') {
//             first = 1;
//         }
//     }
// }

// x-------------------------------------------------------x

// Q16: Write a Program to remove duplicates from the Sorted array. (Later)

// x-------------------------------------------------------x

// Q15: Write a Program to rotate the array to the left. (Later)

// x-------------------------------------------------------x

// Q14: Write a Program to Reverse an Array.

// #include<stdio.h>

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     reverse(arr, 6);
//     printArr(arr, 6);
//     return 0;
// }

// void reverse(int arr[], int n) {
//     for(int i = 0; i < n/2; i++) {
//         int firstVal = arr[i];
//         int secondVal = arr[n - i - 1];

//         arr[i] = secondVal;
//         arr[n - i - 1] = firstVal;
//     }
// }

// void printArr(int arr[], int n) {
//     for(int i = 0; i < n; i++){
//         printf("%d \t", arr[i]);
//     }
// }

// x-------------------------------------------------------x

// Q13: Write a Program to find the maximum and minimum of an Array.

// #include<stdio.h>

// int printMaximum(int arr[], int n);
// int printMinimum(int arr[], int n);


// int main() {
//     int arr[] = {4, 7, 2, 1, 9};
//     printMaximum(arr, 5);
//     printf("Maximum number is : %d \n", printMaximum(arr, 5));
//     printMinimum(arr, 5);
//     printf("Minimum number is : %d \n", printMinimum(arr,5));
//     return 0;
// }

// int printMaximum(int arr[], int n) {
//     int max = arr[0];
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int printMinimum(int arr[], int n) {
//     int min = arr[0];
//     for(int i = 0; i < n; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }

// x-------------------------------------------------------x

// Q12: Write a Program to Calculate the Sum of Natural Numbers using recursion.

// #include<stdio.h>

// int sum(int n);

// int main() {
//     int num = 4;
//     if (num <= 0) {
//         printf("Not a natural number\n");
//     } else {
//         printf("Sum is : %d\n", sum(num));
//     }
    
//     return 0;
// }

// int sum(int n) {
//     if(n == 0) {
//         printf("Not a natural number \n");
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int sumNm = sum(n - 1);
//     int sumN = sumNm + n;
//     return sumN;
// }

// x-------------------------------------------------------x

// Q11: Write a Program to print the Fibonacci series using recursion.

// #include<stdio.h>

// int fib(int n);

// int main() {
//     fib(5);
//     return 0;
// }
// int fib(int n) {
//     if(n == 0) {
//         printf("fib of %d is : 0 \n", n);
//         return 0;
//     }
//     if(n == 1) {
//         printf("fib of %d is : 1 \n", n);
//         return 1;
//     }
//     int fibNm1 = fib(n - 1);
//     int fibNm2 = fib(n - 2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d \n", n, fibN);
//     return fibN;
// }

// x-------------------------------------------------------x

// Q10: Write a Program to Convert Binary to Decimal. (Later)


// x-------------------------------------------------------x

// Q9: Write a Program to find the factorial of a given number.

// #include<stdio.h>

// int fact(int n);

// int main () {
//     printf("Factorial is : %d", fact(5));
//     return 0;
// }

// int fact(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int factNm1 = fact(n -1);
//     int factN = fact(n - 1) * n;
//     return factN;
// }

// x-------------------------------------------------------x

// Q8: Write a Program to make a simple calculator.

// #include<stdio.h>

// int main() {
//     char op;
//     double a, b, result;
    
//     printf("Enter an operator : (+, -, *, /)");
//     scanf("%c", &op);
//     printf("Enter two operands : ");
//     scanf("%lf %lf", &a, &b);

//     switch (op)
//     {
//     case '+' :
//         result = a + b;
//         printf("Result: %.2lf\n", result);
//         break;
//     case '-' :
//         result = a - b;
//         printf("Result: %.2lf\n", result);
//         break;
//     case '*' :
//         result = a * b;
//         printf("Result: %.2lf\n", result);
//         break;
//     case '/' :
//         result = a / b;
//         printf("Result: %.2lf\n", result);
//         break;
//     default:
//         printf("Error! Incorrect Operator Value\n");
//         break;
//     }
//     return 0;
// }

// x-------------------------------------------------------x

// Q7: Write a Program to find the largest number among three numbers.

// #include<stdio.h>

// int main() {
//     int a = 5, b = 50, c = 40;

//     if(a > b && a > c) {
//         printf("Largest number is a");
//     } else if (b > a && b > c) {
//         printf("Largest number is b");
//     } else {
//         printf("Largest number is c");
//     }  
//     return 0;
// }

// x-------------------------------------------------------x

// Q6: Write a Program to check if the given number is Even or Odd.

// #include<stdio.h>

// void checkOddEven(int number);

// int main() {
//     int number = 101;
//     checkOddEven(number);
//     return 0;
// }

// void checkOddEven(int number) {
//     if(number % 2 == 0) {
//         printf("Even \n");
//     } else if(number == 0) {
//         printf("Even \n");
//     } else {
//         printf("Odd");
//     }
// }

// x-------------------------------------------------------x

// Q5: Write a Program to calculate Compound Interest.

// #include<stdio.h>

// int main() {
//     double principal = 10000;
//     double rate = 5;
//     double time = 2;
//     double pow(double base, double exponent);
//     double amount = principal * ((pow((1 + rate/100), time)));
//     double CI = amount - principal;
    
//     printf("Compound Interest is : %lf",CI);
//     return 0;
// }

// x-------------------------------------------------------x

// Q4: Write a Program to Swap the values of two variables.

// #include<stdio.h>

// int main() {
//     int a = 3, b = 5;
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d and b = %d \n", a, b);
    
//     return 0;
// }

// x-------------------------------------------------------x

// Q3: Write a Program to find the size of int, float, double, and char. 

// #include<stdio.h>

// int main() {
//     printf("Size of int: %d bytes\n", sizeof(int));
//     printf("Size of float: %d bytes\n", sizeof(float));
//     printf("Size of double: %d bytes\n", sizeof(double));
//     printf("Size of char: %d bytes\n", sizeof(char));
//     return 0; 
// }

// x-------------------------------------------------------x

// Q2: Write a Program to find the Sum of two numbers entered by the user.

// #include<stdio.h>

// int main() {
//     int a, b;
//     printf("enter two numbers : ");
//     scanf("%d %d", &a, &b);
//     int sum = a + b;
//     printf("sum is %d", sum);
//     return 0;
// }

// x-------------------------------------------------------x

// Q1: Write a Program to Print "Hello World!" on the Console.

// #include<stdio.h>

// int main() {
//     printf("Hello World!");
//     return 0;
// }

// x-------------------------------------------------------x
