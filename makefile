CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -W -Werror -pedantic
OBJECTS = Main.o FindString.o Collection.o DataRead.o

fs : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o fs

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $<
clean:
	rm *o fs
