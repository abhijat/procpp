CPP=g++
CPPFLAGS=-Wall -g

test: test.cpp SpreadsheetCell.cpp SpreadsheetCell.h
	$(CPP) $(CPPFLAGS) -o test SpreadsheetCell.cpp test.cpp

clean:
	find . -maxdepth 1 -type f -a ! -name '*cpp' -a ! -name '*h' -a ! -name Makefile -a ! -name 'READ*' -a ! -name '*txt*' -exec rm -f {} \;
