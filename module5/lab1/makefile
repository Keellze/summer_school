OBJ = Eltex.o f1.o f2.o
rez: $(OBJ)
	gcc -o rez $(OBJ)
Eltex.o: Eltex.c
	gcc -c Eltex.c
f1.o: f1.c
	gcc -c f1.c
f2.o: f2.c
	gcc -c f2.c
clean:
	rm rez $(OBJ)