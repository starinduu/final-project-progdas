TARGET = main
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	g++ -o $(TARGET) $(SRC)

run: $(TARGET) 
	@./$(TARGET)

.PHONY: all run 