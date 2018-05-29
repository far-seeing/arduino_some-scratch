CC = g++
CFLAG = -c
OUTPUT = -o

test: main.cpp
	$(CC) main.cpp $(OUTPUT) $@

clean:
	rm -f main

install:
	@echo "Start installing ..."