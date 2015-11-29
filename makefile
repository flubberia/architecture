build:
	g++ main.cpp -o lab1-main -std=c++11 -pg

clean:
	-rm lab1-main
	-rm input
clean_inp:
	-rm input.txt
prepare:
	g++ input.cpp -o input -std=c++11
	make clean_inp
	./input
.PHONY : clean clean_inp build