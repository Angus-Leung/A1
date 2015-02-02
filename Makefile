p1:	main.o Pirate.o PirateArray.o Cell.o CellArray.o Brig.o Display.o Control.o Random.o
	g++ -o p1 main.o Pirate.o PirateArray.o Cell.o CellArray.o Brig.o Display.o Control.o Random.o

main.o:	main.cc Pirate.h PirateArray.h Cell.h CellArray.h Brig.h Display.h Control.h
	g++ -c main.cc

Control.o:	Control.cc Control.h Display.h Brig.h CellArray.h Cell.h PirateArray.h 
Pirate.h
	g++ -c Control.cc

Display.o:	Display.cc Display.h Brig.h
	g++ -c Display.cc

Brig.o:	Brig.cc Brig.h CellArray.h Cell.h PirateArray.h Pirate.h
	g++ -c Brig.cc

CellArray.o:	CellArray.cc CellArray.h Cell.h
	g++ -c CellArray.cc

Cell.o:	Cell.cc Cell.h PirateArray.h Pirate.h
	g++ -c Cell.cc

PirateArray.o:	PirateArray.cc PirateArray.h Pirate.h
	g++ -c PirateArray.cc

Pirate.o:	Pirate.cc Pirate.h
	g++ -c Pirate.cc

Random.o:	Random.cc Random.h
	g++ -c Random.cc

