CPP=g++
CPPFLAGS=-Wall -g

test: test.cpp
	$(CPP) $(CPPFLAGS) -o test *.cpp

clean:
	rm -f test
