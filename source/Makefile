all: all.out 

PROJECT_NAME = all
BUILD = build

TEST_SRC = src/*.cpp

TEST_OUTPUT = $(BUILD)/$(PROJECT_NAME).out



all.out : cropparent.o cropchild.o cropdb.o croptest.o cropdbtest.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
cropdbtest.o: cropdbtest.cpp cropparent.h cropchild.h cropdb.h
	g++ $< -c
croptest.o: croptest.cpp cropparent.h cropchild.h
	g++ $< -c
cropdb.o:cropdb.cpp cropdb.h cropchild.h cropparent.h
	g++ $< -c
cropchild.o : cropchild.cpp cropchild.h cropparent.h
	g++ $< -c    
cropparent.o : cropparent.cpp cropparent.h
	g++ $< -c
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)
clean:
	rm -rf *.o *.out
$(BUILD):
	mkdir build
