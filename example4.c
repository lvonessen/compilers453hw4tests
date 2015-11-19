/** Test if, while, for, and some compound expressions */

extern void print_int(int x), print_string(char x[]);

/* check operator precedence */
void foo_if( int x, int y){
	/* (x>10) || ((x<-10) && (y>0)) ) */
	if ( x>10 || x<-10 && y>0 ) {
		print_string("if 1: ");
	} else {
		print_string("else 1: ");
	}
	print_int(x);
	print_string(", ");
	print_int(y);
	print_string("\n");
}

/** test integer division, too */
void foo_while( int x){
	while (x > 0){
		x = x / 2;
		print_int(x);
		print_string(", ");
	}
	print_string("\n-->done with while\n");
}

void foo_for( int x){
	int i;
	for (i=0;i<2*x;i=i+2){
		print_int(i);
		print_string(", ");
	}
	print_string("\n-->done with for\n");
}

void main( void ){
	/******** IF ************/
	/* if 1: 11, 97 */
	foo_if(11,'a');
	/* if 1: 11, -97 */
	foo_if(11,-'a');
	/* else 1: 10, 97 */
	foo_if(10,'a');
	/* if 1: -122, 97 */
	foo_if(-'z','a');
	/* else 1: 10, -97 */
	foo_if(10,-'a');
	/* else 1: -122, -97 */
	foo_if(-'z',-'a');
	
	/******** WHILE *********/
	/* 8, 4, 2, 1, 0,
	   -->done with while */
	foo_while(16);
	/* 15, 7, 3, 1, 0,
	   -->done with while */
	foo_while(31);
	
	/******** FOR ***********/
	/* 0, 2, 4, 6, 8, 
	   -->done with for */
	foo_for(10);
	/* 0, 2, 4, 6, 8, 
	   -->done with for */
	foo_for(9);
}
