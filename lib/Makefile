CXX ?= g++
CXXFLAGS = -Wall -W
LDFLAGS =

SRC = Job.cpp Node.cpp Cluster.cpp

OBJ = $(SRC:.cpp=.o)

all: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)
