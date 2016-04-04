lab3a: laba.o maina.o
	g++ -o lab3a maina.o laba.o

laba.o: laba.cpp laba.h
	g++ -c laba.cpp

maina.o: maina.cpp laba.h
	g++ -c maina.cpp

clean:
	rm maina.o laba.o lab3a
