FLAGS=-Wall -g


all: ex1 ex3 ex4
	make ex1
	make ex3
	make ex4

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4


