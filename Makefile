CFLAGS=-Wall -g


all: ex1 ex3 ex4 ex5
	make ex1
	make ex3
	make ex4
	make ex5

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4
	rm -f ex5


