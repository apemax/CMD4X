CC = g++
CXXFLAGS = -no-pie -Werror -Wall -Wextra
DEPS = global.h

ODIR = obj
BUILD_DIR = build

BIN = cmd4x

_OBJ = main.o game.o global.o load.o options.o save.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

.SECONDEXPANSION:

$(ODIR)/%.o: %.cpp $(DEPS) | $$(@D)
	$(CC) -c -o $@ $< $(CXXFLAGS)

$(BUILD_DIR)/$(BIN): $(OBJ) | $$(@D)
	$(CC) -o $@ $^ $(CXXFLAGS)

$(BUILD_DIR):
	mkdir -p $@

$(ODIR):
	mkdir -p $@

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BUILD_DIR)/$(BIN)
