main:  Cuadrado.o Coordenada.o
	g++ main.cpp Cuadrado.o Coordenada.o -o main
Cuadrado.o:
	g++ -c Cuadrado.cpp
Coordenada.o:
	g++ -c Coordenada.cpp
clean:
	rm Coordenada.o
	rm Cuadrado.o
	rm main
	
