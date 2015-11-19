/** Check char/int conversion */

extern void print_int(int x), print_string(char x[]);

/* check operator conversion */
void foo_conversion( int x){
	int y;
	char c;
	c = x;/* could be different due to sign extension */
	y = c;
	print_string("x, c, y: ");
	print_int(x);
	print_string(", ");
	print_int(c);
	print_string(", ");
	print_int(y);
	print_string("\n");
}

void foo_operator_conversion(int x, char c){
	print_int(x);
	print_string(", ");
	x = c;
	print_int(c);
	print_string(", ");
	print_int(x);
	print_string("\n");
}

void main( void ){
	/******** CONVERSION ************/
	/* x, c, y: 128, -128, -128 */
	foo_conversion (128);
	/* x, c, y: 127, 127, 127 */
	foo_conversion (127);
	
	/* 23456, -96 */
	foo_operator_conversion(23456,23456);
	/* 97, 97 */
	foo_operator_conversion('a','a');
}
