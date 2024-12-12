#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n , numEntered , oddNumbers = 0 , sumOdd = 0 , productOdd = 1 ; // sumOdd => sum of odd numbers (set to 0) ; productOdd => product of odd numbers (set to 1) ""
    // we put 1 not 0 because if it's 0 it will still 0 when we multiply it for the odd number checked
    // we create small loop th confirm that the user entered a positive n such that enable him to enter values
    do{
        printf("*** Enter the number of values : ");
        scanf("%i",&n);
    } while (n<=0);
    // A loop to enter 'n' value by user :
    for (int i=1;i<=n;i++){
        printf("Enter value %i : ",i);
        scanf("%i",&numEntered);
        if (numEntered%2 != 0){ // this condition is to check if the number entred is odd or not
            // if true , the program will execute these instructions :
            sumOdd += numEntered; // add the number to the sum of odd number
            productOdd *= numEntered; // multiplication the Product we have to the odd number and stock the result in the variable
            oddNumbers = oddNumbers*10 + numEntered;
        }
    }
    printf("odd numbers : ");
    // the while to print the odd numbers
    while(oddNumbers!=0){
        printf("%i ",oddNumbers%10);
        oddNumbers = oddNumbers/10;
    }
    // print the sum and product of odd numbers the user entred :
    printf("\nSum of odd numbers : %i\nProduct of odd numbers : %i",sumOdd,productOdd);
     

    return 0;
}