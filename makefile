all: connect4

connect4: game.o player.o playing_entity.o board.o
	g++ game.o player.o playing_entity.o board.o -o connect4

game.o: game.cpp player.h playing_entity.h board.h
	g++ -c game.cpp

player.o: player.cpp player.h playing_entity.h board.h
	g++ -c player.cpp

playing_entity.o: playing_entity.cpp playing_entity.h board.h
	g++ -c playing_entity.cpp

board.o: board.cpp board.h
	g++ -c board.cpp

clean:
	rm *.o connect4

#all: rayT

#rayT:  main.o ray.o primitives.o light.o
#       g++ main.o ray.o primitives.o light.o -lglut -lGL -lGLU -lGLEW -o rayT

#main.o: main.cpp ray.h primitives.h light.h
#       g++ -c main.cpp

#ray.o: ray.cpp ray.h
#       g++ -c ray.cpp

#primitives.o: primitives.cpp primitives.h
#       g++ -c primitives.cpp

#light.o: light.cpp light.h