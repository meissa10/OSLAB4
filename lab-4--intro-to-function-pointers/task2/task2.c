#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int end ();
int (*operations[5])(int a, int b);



int main (void)
{ 
	
	int operanda, operandb,operation;
  
  printf("Operand 'a': ");
  scanf("%d", &operanda);
  printf("Operand 'b': ");
  scanf("%d", &operandb);
  printf("Pick which operation to perform (0: add | 1: subtract | 2: Multiply | 3: divide | 4: exit):\n");
  scanf("%d", &operation);
  
  operations[0]=add;
  operations[1]=subtract;
  operations[2]=multiply;
  operations[3]=divide;
  operations[4]=end;  
	
  int result = (*operations[operation])(operanda,operandb);
  printf("Result = %d\n", result);
  
  return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplyinging 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int end () { printf ("Exiting\n"); exit(0);}