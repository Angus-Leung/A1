p1:	main.o Pirate.o PirateArray.o Cell.o CellArray.o Brig.o
	g++ -o p1 main.o Pirate.o PirateArray.o Cell.o CellArray.o Brig.o

main.o:	main.cc Pirate.h PirateArray.h Cell.h CellArray.h Brig.h
	g++ -c main.cc

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

