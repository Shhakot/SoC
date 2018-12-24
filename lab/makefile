CC=mingw32-g++.exe
TEST_DIR = ./test_TXT

build: 
	mkdir pr_build
	g++ -o ./pr_build/PR stack.cpp main.cpp 

clean: 
	rd /S /Q pr_build

test: 
	./pr_build/PR $(TEST_DIR)/test1_Correct.txt
	./pr_build/PR $(TEST_DIR)/test2_No_Correct.txt
	./pr_build/PR $(TEST_DIR)/test3_No_Correct.txt