
#make file f=x
f:=x
x:=./c/$(f).c
y:=./c/$(f)


run: $(x) $(y)
		gcc -g $(x) -o $(y)
		$(y)

redirect: $(x) $(y)
		gcc -g $(x) -o $(y) 
		$(y) < ./input.txt > ./output.txt