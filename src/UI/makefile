APP=Main
SRC=Main.c
OUT=output/$(APP)

CFLAGS=-Wall -Wextra -g3 $(shell pkg-config --cflags gtk+-3.0)
LDFLAGS=$(shell pkg-config --libs gtk+-3.0)

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p output
	gcc $(CFLAGS) $< -o $@ $(LDFLAGS)

run: all
	./$(OUT)

clean:
	rm -rf output