/* Example 2 from discussion 11 (a function call with multiple arguments) */
extern void print_int(int x);
extern void print_string(char x[]);

char x;

void foo(char y, int a, int b)
{

  print_int(y);
  print_string("\n");  
  
  print_int(a);
  print_string("\n");
  
  print_int(b);
  print_string("\n");
}

void main(void)
{
  foo('a', 1, 2);
}
