#include <stdio.h>

int square_number(int num){

    int newNum = num*num;
    return newNum;
}


int main(){
    printf("This program uses a method other than main to print the squares of numbers");

    int x = 2;
    int y;
    y = square_number(x);
    printf("The sum of %d squared equals %d\n", x, y);
    return 0;
    

}

