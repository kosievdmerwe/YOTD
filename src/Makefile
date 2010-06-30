export DEBUGBUILD = no
ifeq ($(DEBUGBUILD), yes)
    DEBUGFLAGS = -g -DDEBUG
else
    DEBUGFLAGS = -O2 -DNDEBUG
endif

CC=gcc
CCFLAGS=-Wall -O2

CXX = g++
CXXFLAGS = -Wall -I../include

BIN = ../bin/enginetest

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

SRCSOIL = $(wildcard ./SOIL/*.c)
OBJSOIL = $(SRCSOIL:.c=.o)

#LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lGLU -lGL
LIBS=-lSDL -lGLU -lGL

all: $(BIN)
	
$(BIN): $(OBJ) $(OBJSOIL)
	$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) $(OBJ) $(OBJSOIL) -o $(BIN) $(LIBS)

clean:
	rm -f $(OBJ) $(BIN) $(OBJSOIL)


$(OBJ): %.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) -c $< -o $@

$(OBJSOIL): %.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@ -DSTBI_FAILURE_USERMSG

