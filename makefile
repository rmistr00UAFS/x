test: ./x.c ./x
	cc ./x.c -o x
	./x < a.txt
	