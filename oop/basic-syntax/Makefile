# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -std=c++11 -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

.PHONY: all clean

all: bytelen-bitlen-types.exe max-min-types.exe enum-typedef.exe errno.exe

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

%.o: %.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

bytelen-bitlen-types.o: bytelen-bitlen-types.cxx
enum-typedef.o: enum-typedef.cxx
max-min-types.o: max-min-types.cxx
errno.o: errno.cxx

%.exe:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

bytelen-bitlen-types.exe: bytelen-bitlen-types.o
enum-typedef.exe: enum-typedef.o
max-min-types.exe: max-min-types.o
errno.exe: errno.o

clean:
	rm -f *~ *.o a.out core *.exe
