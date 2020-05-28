# GPLv3 License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the GPLv3 License.
#
#
GCFLAGS=-std=c++11 -O2 -g -Wall $(shell pkg-config --cflags ncursesw)
GLDFLAGS=$(shell pkg-config --libs ncursesw)
SRCAPPSDIREC = ./src/Apps/
PREFIX = /bin/
SRCLIBDIREC = ./src/Library/
SRCSYNTAXDIREC = ./src/Syntax/
INCLUDEDIR = ./include/src/
CFLAGS = -c -Wall -I$(INCLUDEDIR)
GAMESDIREC = ./src/Games/
SRCDIREC = ./src/
GCC = gcc
GPP = g++
COMP = g++ -c
HECOMP = g++ -c $< -std=gnu++17 -o
# CLEAN
CLEANALL = scrift /src/Games/Castle/castle
CLEAN = *.o
HEADERFILE = CommandFunc.o GetNameFunction.o FileFunction.o RunFunction.o Linker.o \
Log.o History.o Configuration.o

ifeq ($(OS),Windows_NT)
	echo Windows_NT is not supported!
	#CLEAN := del $(CLEAN)
	#CLEANALL := del $(CLEANALL)
else
	CLEAN := rm -f $(CLEAN)
	CLEANALL := rm -f $(CLEANALL)
endif


all: conio headersfile main clean

allp: conio headersfile mainc castle edifor fetcheya date \
	 pong tictactoe clean 

removeall: uninstall cleanall


runall: all run

gra: runall git

git:
	git add .
	git commit -a
	git push origin master

push:
	git push origin master

nall: cleanall

headersfile: $(HEADERFILE)


conio: $(SRCLIBDIREC)FConio.c
	$(GCC) -c $(SRCLIBDIREC)FConio.c -o fconio.o

%.o: $(SRCSYNTAXDIREC)%.cpp
	$(GPP) $(CFLAGS) -c $< -o $@


main: $(SRCDIREC)Scrift.cpp
	$(GPP) $< $(HEADERFILE) -o scrift
	echo Scrift building successfully!

mainc: $(SRCDIREC)Scrift.cpp
	$(GPP) $< $(HEADERFILE) -o /bin/scrift
	echo Scrift building successfully in Bin Directory!

# Edifor
edifor:
	$(GPP) $(SRCDIREC)Edifor.cpp -o /bin/edifor
	echo Edifor building successfully in Bin Directory!

# Castle
castle: $(GAMESDIREC)/Castle/Castle.hpp
	$(GPP) $(GCFLAGS) $(GAMESDIREC)/Castle/Castle.cpp -o $(PREFIX)castle $(GLDFLAGS)
	echo Castle building successfully in Bin Directory

# TicTacToe
tictactoe: $(GAMESDIREC)/TicTacToe/TicTacToeMain.cpp
	$(GPP) -Wall $(GAMESDIREC)/TicTacToe/TicTacToeMain.cpp $(GAMESDIREC)/TicTacToe/tictactoe.cpp -o $(PREFIX)tictactoe 
	echo TicTacToe building successfully in Bin Directory!
	
# Pong	
pong: $(GAMESDIREC)/Pong/Pong.cpp
	$(GPP) -Wall $(GAMESDIREC)/Pong/Pong.cpp -o $(PREFIX)pong -lncurses
	echo Pong building successfully in Bin Directory!

# Calendar
date: $(SRCAPPSDIREC)/FDate/FDate.cpp
	$(GPP)  $(SRCAPPSDIREC)/FDate/FDate.cpp -o $(PREFIX)fdate 
	echo FDate building successfully in Bin Directory!

# Fetcheya
fetcheya: $(SRCSYNTAXDIREC)Fetcheya.cpp
	$(GPP) $(SRCSYNTAXDIREC)Fetcheya.cpp -o $(PREFIX)fetcheya
	echo Fetcheya building successfully in Bin Directory!

uninstall:
	rm -f /bin/scrift
	rm -f /bin/edifor
	rm -f /bin/castle
	rm -f /src/Games/Castle/castle
	rm -f /bin/fdate
	rm -f /bin/pong
	rm -f /bin/tictactoe
	
run:
	./scrift
clean:
		$(CLEAN)

cleanall:
		echo Cleaning build directory!
		$(CLEANALL)
