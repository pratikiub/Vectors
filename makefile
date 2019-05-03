CC=g++
CFLAGS=-Wall
DEPS=my_vector.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)	

my_vector: vector.o test_vector.o
	$(CC) -o my_vector vector.o test_vector.o
