# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

.PHONY: all clean

all: calc-tmpl-main.exe \
	particle-table.exe \
	dict-particle-mass-c++98.exe \
	dict-particle-mass-c++11.exe \
	dict-particle-mass-c++17.exe

%.o: %.cxx
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

calc-tmpl-main.o: calc-tmpl-main.cxx ThreeVector.h CalculatorT.h CalculatorT.tpp
particle-table.o: particle-table.cxx Particle.h unit.h

%.o: %.cpp
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

ThreeVector.o: ThreeVector.cpp ThreeVector.h
Particle.o: Particle.cpp Particle.h ThreeVector.h

%.exe:
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

calc-tmpl-main.exe: calc-tmpl-main.o ThreeVector.o
particle-table.exe: particle-table.o Particle.o ThreeVector.o

dict-particle-mass-c++98.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++98 -DCXXSTD=98 -ansi $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<
dict-particle-mass-c++11.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<
# For GCC, required gcc-c++ 7.1 or later
dict-particle-mass-c++17.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f *~ *.o a.out core *.exe
