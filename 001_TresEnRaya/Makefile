TARGET = tresEnRaya
CC = g++
LIBS = -lallegro -lallegro_image

tresEnRaya: juego.o tresEnRaya.o
	$(CC) juego.o tresEnRaya.o -o tresEnRaya $(LIBS)
juego.o: juego.cpp juego.h
	$(CC) -c juego.cpp
tresEnRaya.o: tresEnRaya.cpp juego.h
	$(CC) -o tresEnRaya.cpp

.PHONY: clean

clean:
	rm *.o tresEnRaya
