1.a.wap to swap without third variable 
#include<stdio.h> 
void main() 
{ 
 // Declare variables to store input and temporary value for swapping 
 int a, b, c;
 
 // Prompt the user to enter two numbers 
 printf("Enter two numbers: ");
 
 // Read the input values from the user 
 scanf("%d %d", &a, &b);
 
 // Display the values before swapping 
 printf("\nBefore swapping:" 
 "\na = %d \nb = %d", a, b);
 
 // Swap the values of a and b using a temporary variable c 
 c = a;
 a = b;
 b = c;
 
 // Display the values after swapping 
 printf("\nAfter swapping:" 
 "\na = %d \nb = %d", a, b);
} 
1.b.wap to find without third 
#include <stdio.h> 
int main() { 
 int a, b;
 
 // Input two numbers from the user 
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 
 // Display the numbers before swapping 
 printf("Before swapping: a = %d, b = %d\n", a, b);
 
 // Swapping without using a third variable 
 // Adding both numbers and assigning the result to 'a' 
 a = a + b;
 // Subtracting 'b' from 'a' and assigning the result to 'b' 
 b = a - b;
 // Subtracting 'b' (which now holds the original value of 'a') from 
'a' and assigning the result to 'a' 
 a = a - b;
 
 // Display the numbers after swapping 
 printf("After swapping: a = %d, b = %d\n", a, b);
 
 return 0;
} 
2.wap to find a lagest number 
#include <stdio.h> 
int main() { 
 // Declare variables to store three numbers and the largest number 
 int num1, num2, num3, largest;
 
 // Input three numbers from the user 
 printf("Enter three numbers: ");
 scanf("%d %d %d", &num1, &num2, &num3);
 
 // Using ternary operator to find the largest number 
 largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > 
num3) ? num2 : num3);
 
 // Display the largest number 
 printf("The largest number is: %d\n", largest);
 
 return 0;
} 
3.wap to find simple interest 
#include <stdio.h> 
int main() { 
 float principal, rate, time, simple_interest;
 // Input principal amount, rate of interest, and time period 
 printf("Enter principal amount: ");
 scanf("%f", &principal);
 printf("Enter rate of interest: ");
 scanf("%f", &rate);
 printf("Enter time period (in years): ");
 scanf("%f", &time);
 // Calculate simple interest 
 simple_interest = (principal * rate * time) / 100;
 // Display the simple interest 
 printf("Simple interest = %f\n", simple_interest);
 return 0;
} 
4.wap to convert given digit into word format 
#include <stdio.h> 
int main() { 
 int digit;
 // Input the digit from the user 
 printf("Enter a digit (0-9): ");
 scanf("%d", &digit);
 // Convert the digit into word format using a switch statement 
 switch (digit) { 
 case 0: 
 printf("Zero\n");
 break;
 case 1: 
 printf("One\n");
 break;
 case 2: 
 printf("Two\n");
 break;
 case 3: 
 printf("Three\n");
 break;
 case 4: 
 printf("Four\n");
 break;
 case 5: 
 printf("Five\n");
 break;
 case 6: 
 printf("Six\n");
 break;
 case 7: 
 printf("Seven\n");
 break;
 case 8: 
 printf("Eight\n");
 break;
 case 9: 
 printf("Nine\n");
 break;
 default: 
 // Handle invalid input 
 printf("Invalid input! Please enter a digit between 0 and 
9.\n");
 } 
 return 0;
} 
5.wap to find Armstrong or not 
#include<stdio.h> 
void main() 
{ 
 int n, d, sum = 0, temp;
 
 // Input a number from the user 
 printf("\nEnter a number: ");
 scanf("%d", &n);
 
 // Store the original number in a temporary variable 
 temp = n;
 
 // Calculate the sum of cubes of digits 
 while (n != 0) 
 { 
 // Extract the last digit 
 d = n % 10;
 
 // Cube the digit and add it to the sum 
 sum = sum + (d * d * d);
 
 // Remove the last digit from the number 
 n = n / 10;
 } 
 
 // Check if the sum of cubes of digits is equal to the original 
number 
 if (sum == temp) 
 { 
 printf("\nThe number is an Armstrong number.");
 } 
 else 
 { 
 printf("\nThe number is not an Armstrong number.");
 } 
} 
6.wap to find first 100 prime number 
#include <stdio.h> 
// Function to check if a number is prime 
int isPrime(int n) { 
 if (n <= 1) 
 return 0; // 0 and 1 are not prime
 // Loop through numbers from 2 to the square root of n 
 for (int i = 2; i * i <= n; i++) {
 // If n is divisible by any number from 2 to sqrt(n), it's not 
prime 
 if (n % i == 0) 
 return 0;
 } 
 // If n is not divisible by any number from 2 to sqrt(n), it's prime 
 return 1;
} 
int main() { 
 int count = 0; // Counter for prime numbers
 int num = 2; // Starting from 2, the first prime number
 printf("First 100 prime numbers:\n");
 // Loop until 100 prime numbers are printed 
 while (count < 100) { 
 if (isPrime(num)) { 
 printf("%d ", num);
 count++;
 } 
 num++;
 } 
 return 0;
} 
7.wap to add two integer 
#include<stdio.h> 
int main() { 
 int first, second, *p, *q, sum; 
 // Input two integers to add 
 printf("Enter two integers to add: "); 
 scanf("%d %d", &first, &second); 
 // Assign addresses of the integers to pointers p and q 
 p = &first; 
 q = &second; 
 // Calculate the sum using dereferenced pointers 
 sum = *p + *q; 
 // Display the sum of the entered numbers 
 printf("Sum of entered numbers = %d\n", sum); 
 return 0; 
} 
8.wap to structure a display 
#include <stdio.h> 
// Define structure for employee 
struct Employee { 
 char name[50]; 
 int age; 
 float salary; 
 char joining_date[20]; 
}; 
int main() { 
 // Declare an array of structures to hold multiple employees 
 struct Employee employees[5]; // Assuming there are 5 employees 
 // Input employee information 
 for (int i = 0; i < 5; i++) { 
 printf("Enter name of employee %d: ", i + 1); 
 scanf("%s", employees[i].name); 
 
 printf("Enter age of employee %d: ", i + 1); 
 scanf("%d", &employees[i].age); 
 
 printf("Enter salary of employee %d: ", i + 1); 
 scanf("%f", &employees[i].salary); 
 
 printf("Enter joining date of employee %d (dd-mm-yyyy): ", i + 
1); 
 scanf("%s", employees[i].joining_date); 
 } 
 // Display employee information 
 printf("\nEmployee Information:\n"); 
 printf("-------------------------------------------------------------
-----\n"); 
 printf("Name\t\tAge\t\tSalary\t\tJoining Date\n"); 
 printf("-------------------------------------------------------------
-----\n"); 
 for (int i = 0; i < 5; i++) { 
 printf("%s\t\t%d\t\t%.2f\t\t%s\n", employees[i].name, 
employees[i].age, employees[i].salary, employees[i].joining_date); 
 } 
 return 0; 
} 
9.wap to find given string is palidrome 
#include <stdio.h> 
#include <string.h> 
int main() { 
 char str[100]; 
 int i, len; 
 int isPalindrome = 1; // Assume the string is a palindrome by default 
 // Input a string 
 printf("Enter a string: "); 
 scanf("%s", str); 
 len = strlen(str); 
 // Check if the string is a palindrome 
 for (i = 0; i < len / 2; i++) { 
 // Compare characters from the beginning and end of the string 
 if (str[i] != str[len - 1 - i]) { 
 isPalindrome = 0; // If characters don't match, it's not a 
palindrome 
 break; 
 } 
 } 
 // Display the result 
 if (isPalindrome) { 
 printf("%s is a palindrome.\n", str); 
 } else { 
 printf("%s is not a palindrome.\n", str); 
 } 
 return 0; 
} 
10. wap to find a given number from an array uning linear 
#include <stdio.h> 
int main() { 
 int arr[100], n, i, key; 
 int found = 0; // Flag to indicate if the key is found 
 // Input the number of elements in the array 
 printf("Enter the number of elements in the array: "); 
 scanf("%d", &n); 
 // Input the elements of the array 
 printf("Enter %d elements:\n", n); 
 for (i = 0; i < n; i++) { 
 scanf("%d", &arr[i]); 
 } 
 // Input the number to search for 
 printf("Enter the number you want to search for: "); 
 scanf("%d", &key); 
 // Linear search algorithm 
 for (i = 0; i < n; i++) { 
 if (arr[i] == key) { 
 found = 1; // Update the flag 
 printf("%d found at position %d.\n", key, i + 1); 
 break; // Exit the loop if the key is found 
 } 
 } 
 // If the key is not found, print a message 
 if (!found) { 
 printf("%d not found in the array.\n", key); 
 } 
 return 0; 
} 
11.factorial using recursion 
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 
 int factorial(int); 
 int n,f; 
 printf("enter number:"); 
 scanf("%d",&n); 
 f=factorial(n); 
 printf("factorial of no is %d ",f); 
 getch(); 
 
} 
int factorial(int n) 
{ 
 int f; 
 if(n==1) 
 return 1; 
 else 
 f= n*factorial(n-1); 
 return f; 
} 
12.n! in easy.c 
#include <stdio.h> 
// Function to calculate the factorial of a number 
int factorial(int num) { 
 if (num == 0 || num == 1) { 
 return 1; 
 } else { 
 int fact = 1; 
 // Calculate the factorial of num 
 for (int i = 2; i <= num; i++) { 
 fact *= i; 
 } 
 return fact; 
 } 
} 
int main() { 
 int n; 
 double sum = 0.0; 
 // Input the value of n 
 printf("Enter the value of n: "); 
 scanf("%d", &n); 
 // Loop through each term of the series 
 for (int i = 1; i <= n; i++) { 
 // Calculate the current term of the series 
 double term = (double)i / factorial(i); 
 
 // Add or subtract the term based on its position in the series 
 if (i % 2 == 0) { // For even terms, subtract from the sum 
 sum -= term; 
 } else { // For odd terms, add to the sum 
 sum += term; 
 } 
 } 
 // Print the sum of the series 
 printf("Sum of the series: %.4lf\n", sum); 
 return 0; 
} 
13.wap to find transpose of a matrix 
#include<stdio.h> 
int main() 
{ 
 int a[10][10], transpose[10][10], r, c; 
 // Input the number of rows and columns 
 printf("Enter rows and columns: "); 
 scanf("%d %d", &r, &c); 
 // Input matrix elements 
 printf("\nEnter matrix elements:\n"); 
 for(int i = 0; i < r; i++) 
 { 
 for (int j = 0; j < c; j++) 
 { 
 printf("Enter element a%d%d: ", i + 1, j + 1); 
 scanf("%d", &a[i][j]); 
 } 
 } 
 // Display the entered matrix 
 printf("\nEntered matrix:\n"); 
 for (int i = 0; i < r; ++i) 
 { 
 for (int j = 0; j < c; ++j) 
 { 
 printf("%d\t", a[i][j]); 
 } 
 printf("\n"); 
 } 
 // Transpose the matrix 
 for (int i = 0; i < r; ++i) 
 { 
 for (int j = 0; j < c; ++j) 
 { 
 transpose[j][i] = a[i][j]; 
 } 
 } 
 // Display the transpose of the matrix 
 printf("\nTranspose of the matrix:\n"); 
 for (int i = 0; i < c; ++i) 
 { 
 for (int j = 0; j < r; ++j) 
 { 
 printf("%d\t", transpose[i][j]); 
 } 
 printf("\n"); 
 } 
 return 0; 
} 
14.wap to check given file is palindrome 
#include<stdio.h> 
#include<string.h> 
void main() 
{ 
 char s1[100],s2[100]; 
 int n,i,j,flag=0; 
 printf("Enter the string:"); 
 scanf("%s",s1); 
 n=strlen(s1); 
 for(i=0;j=n-1;j<=n-1;i++;j--) 
 s2[j]=s1[i]; 
flag = strcmp(s1,s2); 
if(flag==0) 
printf("String is palindrome"); 
else 
printf("String is not palindrome"); 
} 
15.wap to swap two number using call by value.c 
#include<stdio.h> 
void swap(int,int);//prottype of the function 
int main() 
{ 
 int a,b; 
 printf("\nEnter value of a and b:"); 
 scanf("%d",&a,&b); 
 printf("\nBefore swapping the values in main a=%d,b=%d\n,a,b"); 
} 
void swap(int a,int b) 
{ 
 a=a+b; 
 b=a-b; 
 a=a-b; 
 printf("After swapping values in function a=%d,b=%d\n,a,b"); 
} 
16.wap to swap two number using call by reference 
#include<stdio.h> 
void swap(int*x,int*y);//prototype of function 
int main() 
{ 
 int a,b; 
 printf("\nEnter value of a and b"); 
 scanf("%d %d",&a,&b); 
 printf("Before swapping the values in main a=%d,b=%d\n",a,b); 
 swap(&a,&b); 
 printf("After swapping values in main a=%d,b=%d\n"a,b); 
} 
void swap(int*x,int*y) 
{ 
 *x=*x+*y; 
 *y=*x-*y; 
 *x=*x-*y; 
 printf("After swapping values in function a=%d,b=%d\n",x*,*y); 
} 
17.gcd or lcm 
#include<stdio.h> 
#include<conio.h> 
int gcd(int,int); 
int lcm(int,int); 
void main() 
{ 
 int a,b,g,l,ll; 
 clrscr(); 
 printf("\nEnter two numbers"); 
 scanf("%d %d",&a,&b); 
 g=gcd(a,b); 
 l=lcm(a,b); 
 printf("\n GCD=%d and LCM=%d\n",g,l); 
 getch(); 
} 
int gcd(int n1,int n2); 
{ 
 int x; 
 if(n1<n2){ 
 x=n1; 
 } 
 else{ 
 x=n2; 
 } 
 while(n1%x!= || n2%x!=0) 
 { 
 x--; 
 } 
 return x; 
} 
int lcm(int m1,int m2) 
{ 
 int y; 
 if(m1>m2) 
 { 
 y=m1; 
 } 
 else{ 
 y=m2; 
 } 
 while(y%m1!=0 || y%m2!=0) 
 { 
 y++; 
 } 
 return y; 
} 
18. wap to find gcd and lcm of two number 
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 int n1,n2,lcm,gcd; 
 clrscr(); 
 printf("Enter two numbers:"); 
 scanf("%d %d",&n1,&n2); 
 if(n1>n2) 
 { 
 lcm=n1; 
 gcd=n2; 
 } 
 else 
 { 
 lcm=n2; 
 gcd=n1; 
 } 
 while(lcm%n1!=0 || lcm%n2!=0) 
 { 
 lcm++; 
 } 
 while(n1%gcd!=0 || n2%gcd!=0) 
 { 
 gcd--; 
 } 
 printf("LCM=%d\n GCD=%d",lcm,gcd); 
 getch(); 
} 
19.wap to find a given number from an array using linear serch 
#include<stdio.h> 
void main() 
{ 
 int a[100],n,i,k; 
 printf("\nEnter no. of elements of array:\n"); 
 scanf("%d",&n); 
 printf("\nEnter array elements:\n"); 
 for(i=0;i<n;i++) 
 scanf("%d",&a[i]); 
printf("\nEnter no to search:"); 
for(i=0;i<n;i++) 
if(k==a[i]) 
{ 
 printf("\nNumbers %d found at location %d",k,i+1); 
 break; 
} 
if(i>=n) 
printf("\nNumbers does not exist:"); 
} 
 
20.wap to print a given pattern 
// Do not copy this commment // 
// Question : following patter we to printf 
// 1 
// 121 
// 12321 
// 1234321 
// 123454321 
// Code starts from here : 
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 int i,j; 
 clrscr(); 
 for(i=1;i<=5;i++) 
 { 
 for(j=1;j<=5-i;j++) 
 { 
 printf(""); 
 } 
 for(j=1;j<=i;j++) 
 { 
 printf("%d",j); 
 } 
 for(j=i-1;j>=1;j--) 
 { 
 printf("%d",j); 
 } 
 printf("\n"); 
 } 
 getch(); 
} 
// Another patter: 
// ABCDE 
// ABCD 
// ABC 
// AB 
// a 
// code: 
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 int i,j; 
 clrscr(); 
 for(i=1;i<=5;i++) 
 { 
 for(j=1;j<=6-i;j++) 
 { 
 printf("%C",64+j); 
 } 
 printf("\n"); 
 } 
 getch(); 
}
