export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH

sort:
	g++ -std=c++20 -c -o sort.o sort.cpp --save-temps
	g++ -std=c++20 -shared -o libsort.so sort.o
	g++ -std=c++20 -Wall -L./ -o main main.cpp -lsort
	./main 'input.txt' 'bubbleSort' 'output.txt'

print: $(wildcard *.c)
	ls -la  $?

.PHONY: clean

clean:
	rm -rf *.o
