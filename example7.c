/* More int/char conversions */

extern void print_int(int x), print_string(char x[]);

int convert(char c){
	return c;
}

char otherConvert(int x){
	return x;
}

void main(void){
	print_int(convert(23456));
	print_int(otherConvert(23456));
}
