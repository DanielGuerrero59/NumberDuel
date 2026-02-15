CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

SOURCES = Rotation.cpp EulerRotation.cpp AxisAngleRotation.cpp QuaternionRotation.cpp Vector3D.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: main

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o main main.o $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o main