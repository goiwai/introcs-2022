# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

.PHONY: all clean

all: 	file-main-c++11.exe file-main-c++17.exe \
	variable-arguments-main.exe

%.o: %.cxx
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

file-main.o: file-main.cxx

%.o: %.cpp
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

File-c++11.o: File.cpp File.h
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
File-c++17.o: File.cpp File.h
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

%.exe:
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

variable-arguments-main.exe: variable-arguments-main.cxx

# For GCC, required gcc-c++ 7.1 or later
file-main-c++11.exe: file-main.o File-c++11.o
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^
# For GCC, required gcc-c++ 7.1 or later
file-main-c++17.exe: file-main.o File-c++17.o
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f *~ *.o a.out core *.exe
