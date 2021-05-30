run:
	g++ main.cpp -std=c++17 -I .
	oj t
random_test:
	g++ main.cpp -std=c++17 -I .
	g++ generator.cpp -std=c++17 -I . -o generator
	g++ naive.cpp -std=c++17 -I . -o naive
	oj g/i ./generator
	oj g/o -c ./naive
	oj t
