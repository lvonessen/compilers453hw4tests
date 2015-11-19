#!/bin/bash

# file names are 
# example%d.c
# idea: iterate over them, and if something unexpected happens,
# print the first line of the file, which should be a comment explaining the test case

# 1 through numtests
numtests=10
count=0
for ((i=1;i<=numtests;i++));
do
#	test file, the assembly code, the output of running the assembly code
	f=$(printf "example%d.c" $i)
	fout=$(printf "my%d.s" $i)
	spimout=$(printf "spim%d.out" $i)
	
#	run your executable
	./compile < $f > $fout
	r=$?
	if [ "$r" -eq "1" ]
		then
#		your compiler found an error with the program
		echo $f " expected no error, but found following:\n"
		cat err.out
		echo "This test tests:\n"
		head -1 $f
	else
#		your compiler generated code, supposedly successfully
		printf "Running assembly code from test %d\n" $i
		spim -file $fout > my$spimout
		diff $spimout my$spimout
		r=$?
		if [ "$r" -eq "1" ]
			then
			echo $f " created unexpected output\n"
			echo "This test tests:\n"
			head -1 $f
		else
			printf "Test %d passed.\n" $i
			count=$((count+1))
		fi
	fi
done
printf "Passed %d of %d tests.\n" $count $numtests
