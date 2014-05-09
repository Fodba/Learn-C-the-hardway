FLAGS=-Wall -g


all: ex1 ex3
	make ex1
	make ex3

clean:
	rm -f ex1
	rm -f ex3


