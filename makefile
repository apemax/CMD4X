CC = g++
CXXFLAGS = -no-pie -Wall
DEPS = global.h

ODIR = obj

BIN = CMD4X

_OBJ = main.o game.o global.o load.o options.o save.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

CMD4X: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BIN)
