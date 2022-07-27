#include <stdio.h>

void pyramid() {
    int row, space, star, num;
    
    printf("This function will create pyramid!\n");
    printf("Print number of stars: ");
    scanf("%d", &num);
    
    for(row = 1; row <= num; row++)
    {
      for(space = num; space >= row; space--)
      {
        printf(" ");
      }
      for(star = 1; star <= row*2-1; star++)
      {
        printf("*");
      }
      printf("\n");
    }
  }

void add() {
    int num1, num2;
    
    printf("This function will add 2 number!\n");
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Sum: %d", num1 + num2);
    }
    
void minus() {
    int num1, num2;
    
    printf("This function will subtract\n");
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Difference: %d", num1 - num2);
    }
   
void multiply() {
    int num1, num2;
    
    printf("This function will multiply\n");
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Product: %d", num1 * num2);
    }

void divide() {
    float num1, num2;
    printf("This function will divide\n");
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Quotient: %.2f", num1 / num2);
    }
          
int main() {
  char quart;

  printf("Enter p for pyramid \nEnter a for addition \nEnter s for subtraction \nEnter m for multiplication \nEnter d for division \n\n");
  printf("Enter letter: ");
  scanf("%c", &quart);
  if (quart == 'p') {
    pyramid();
  } else if (quart == 'a') {
    add();
  } else if (quart == 's') {
    minus();
  } else if (quart == 'm') {
    multiply();
  } else if (quart == 'd') {
    divide();
  } else {
    printf("End of program");
  }
    
}
