CXX = g++
CXXFLAGS = -Wall -O
LDFLAGS = -I ../googletest-release-1.8.1/googletest/include/ -L ../googletest-release-1.8.1/googletest/build/ -lgtest

all: main

.PHONY: clean
clean:
	rm -rf main *.o *~

OBJS1 = main.o

main:$(OBJS1) 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $(OBJS1)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(INCLUDE) -c -o $@ $<

main.o: main.cpp
