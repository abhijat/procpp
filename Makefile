CPP=g++
CPPFLAGS=-Wall -g

test: test.cpp SpreadsheetCell.cpp SpreadsheetCell.h
	$(CPP) $(CPPFLAGS) -o test SpreadsheetCell.cpp test.cpp

clean:
	rm -f test
