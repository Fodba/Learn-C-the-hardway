CFLAGS=-Wall -g


all: ex1 ex3 ex4 ex5 ex6
	make ex1
	make ex3
	make ex4
	make ex5
	make ex6

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4
	rm -f ex5
	rm -f ex6


