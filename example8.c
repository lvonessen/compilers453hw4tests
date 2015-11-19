/** A method to print a char as a character */

extern void print_int(int x), print_string(char x[]);

void print_char(char c){
	char temp[2];
	temp[0] = c;
	temp[1] = '\0';
	print_string(temp);
}

/** test print char */
void main( void){
	print_char('a');
}
