bin/main.exe : src/main.cpp src/Metodo.cpp src/Trapecio.cpp
	g++ -o bin/main src/main.cpp src/Metodo.cpp src/Trapecio.cpp -Iinclude

run : bin/main.exe
	./bin/main.exe

clean : bin/main.exe
	rm -f bin/*.exe

print : 
	@echo "Hola mundo"