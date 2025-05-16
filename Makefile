all:
	g++ main.cpp classe1.cpp classe2.cpp -o main

clean: main
	rm main

run: main
	./main
