/* mixed if-then-elses, for loops, and while loops */

int bar(int z);
extern void print_int(int x);
extern void print_string(char x[]);

int foo(int x, int y, int z)
{
  if (x > 0 && x < 100) {
    for (y = 0; y < 10 && y != bar(bar(foo(x+1, y-1, z*2))); y = x+1)
      if (x > 1 && x < 99) {
	    while (y > 0) {
	      y = y+1;
	      while (y > 1) {
	        y = y+2;
	        while (y > 3) {
	          for (z = 0; z != x; z = z-1)
		        for (z = 1; z != x+1; z = z-1)
         		  for (z = 2; z != foo(x,x+1,x+2); z = z-1)
		            while (y > 4)
		              ;
	        }
	      }
	    }
      }
      else if (x > y && y > z && z > x)
		if (y > z || z > x || x > y)
		  if (!(z > x) && !(x > y && !(y > z)))
	    	x = x+1;
	  	  else 
	    	x = x-1;
		else 
	  	  y = y*2;
      else
		z = foo(y, z, x);
  }
  return x+y+z;
}

int bar (int z) {
	return z;
}

void main ( void ) {
	int x;
	x = foo('a', -30, 1234567 );
	print_int(x);
}

