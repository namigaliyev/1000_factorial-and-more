hepsi: derle test calistir

derle:
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/Stack.o -c ./src/Stack.cpp
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/ArrayList.o -c ./src/ArrayList.cpp

test:
	g++ -I ./include/ -o ./bin/Test ./lib/Sayi.o ./lib/Stack.o ./lib/Dugum.o ./lib/ArrayList.o ./src/test.cpp
calistir:
		./bin/Test
