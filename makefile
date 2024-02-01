.PHONEY: clean

GCCFLAGS=-g

main: main.o calculator.o scientific.o
	g++ $(GCCFLAGS) -o main main.o calculator.o scientific.o

main.o: main.cpp calculator.h scientific.h
	g++ $(GCCFLAGS)  -c main.cpp

calculator.o: calculator.cpp calculator.h
	g++ $(GCCFLAGS)  -c calculator.cpp

scientific.o: scientific.cpp scientific.h
	g++ $(GCCFLAGS)  -c scientific.cpp

clean:
		rm main calculator.o main.o scientific.o
