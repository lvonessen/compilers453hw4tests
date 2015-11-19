/** Check char array access for local variable */

extern void print_int(int x), print_string(char x[]);

void print_char(char c){
	char temp[2];
	temp[0] = c;
	temp[1] = '\0';
	print_int(c);
	print_string(":");
	print_int(temp[0]);
	print_string(":");
	print_string(temp);
}

void print_char_i(int i, char str[]){
	print_string("str[");
	print_int(i);
	print_string("] = ");
	print_char(str[i]);
	print_string("\n");
}

/** test print char[] */
void main( void){
	char str[40];
	print_string("Put hello0 in str[0-5] and print:\n");
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	print_string(str);
	print_string("\n");
	
	print_string("Put 'w' in str[6]\n");
	str[6] = 'w';
	
	/* print chars 3 and 4 */
	print_string("Should be 'H' and 'o':\n");
	print_char_i(0,str);
	print_char_i(4,str);
	
	
	/* print the string */
	print_string("str[] is now 'Hello0w' (so it should print 'Hello')\n");
	print_string(str);
	
	/* print chars 3 and 4 */
	print_string("\nThese characters should still be 'l' and 'o':\n");
	print_char_i(3,str);
	print_char_i(4,str);
	
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = '!';
	str[12] = '\n';
	str[13] = '\0';
	print_string("Still Hello: ");
	print_string(str);
	print_string("\n");
	str[5] = ' ';
	print_string("And finally...\n");
	print_string(str);
}
