#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

     if (argc != 4) {
          printf("Requires 3 arguments\n");
          exit(EXIT_FAILURE);
     }
     
     double lhs, rhs, sum;
     char op;

     lhs = atof(argv[1]);
     rhs = atof(argv[3]);
     op = *argv[2];

     switch(op){
          case '+' : sum = lhs + rhs;
               break;
          case '-' : sum = lhs - rhs;
               break;          
          case '*' : sum = lhs * rhs;
               break;
          case '/' : sum = lhs / rhs;
               break;
     }
          
     printf("%.2f %c %.2f = %.2f\n",lhs,op,rhs,sum);

     return EXIT_SUCCESS;
}
