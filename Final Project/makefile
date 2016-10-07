desertion: main.o Game.o Player.o Space.o Shack.o Garden.o Beach.o Lighthouse.o Boat.o
	g++ main.o Game.o Player.o Space.o Shack.o Garden.o Beach.o Lighthouse.o Boat.o -o desertion

main.o: main.cpp 
	g++ -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp

Player.o: Player.cpp Player.hpp
	g++ -c Player.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

Shack.o: Shack.cpp Shack.hpp
	g++ -c Shack.cpp

Garden.o: Garden.cpp Garden.hpp
	g++ -c Garden.cpp

Beach.o: Beach.cpp Beach.hpp
	g++ -c Beach.cpp

Lighthouse.o: Lighthouse.cpp Lighthouse.hpp
	g++ -c Lighthouse.cpp

Boat.o: Boat.cpp Boat.hpp
	g++ -c Boat.cpp

clean: 
	rm *.o desertion
