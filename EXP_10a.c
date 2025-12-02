//Name :- Shaikh Mohammed Zaid
//UID :- 251P108
//Roll No:- 31
//Branch :- Comp Eng
//Div:- D
#include <stdio.h>

int SumOfNumbers(int *a, int *b){
    int sum = *a + *b;
    return sum;
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of two numbers: %d\n", SumOfNumbers(&num1, &num2));

    return 0;
}
