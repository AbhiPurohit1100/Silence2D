#include <SFML/Graphics.hpp>
#include<iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace sf;
int main()
{
	ContextSettings set;
	RenderWindow window(VideoMode(800, 600), "Game", Style::Default, set);


	set.antialiasingLevel = 8;


	Texture player1text;
	Sprite player1sprite;


	if (player1text.loadFromFile("Assets/texture/walkk.png")) {

		std::cout << "player loaded" << std::endl;
		player1sprite.setTexture(player1text);
		int Xindex = 0;
		int Yindex = 0;
			

		player1sprite.setTextureRect(IntRect(Xindex * 64, Yindex * 64, 64, 64));

		player1sprite.scale(Vector2f(2, 2));
	}
	else {
		std::cout << "failed to load" << std::endl;
	}


	//main game loop

	while (window.isOpen()) {

		Event event1;

		while (window.pollEvent(event1)) {
			

			if (event1.type == Event::Closed)
				window.close();
		}

		Vector2f Cposition = player1sprite.getPosition();
		if (Keyboard::isKeyPressed(Keyboard::D)) {

			
			player1sprite.setPosition(Cposition + Vector2f(0.3, 0));
		}
		if (Keyboard::isKeyPressed(Keyboard::A)) {

			
			player1sprite.setPosition(Cposition + Vector2f(-0.3, 0));
		}
		if (Keyboard::isKeyPressed(Keyboard::W)) {

			player1sprite.setPosition(Cposition + Vector2f(0, -0.3));
		}
		if (Keyboard::isKeyPressed(Keyboard::S)){

			
			player1sprite.setPosition(Cposition + Vector2f(0, 0.3));
		}



		window.clear(Color::Black);
		window.draw(player1sprite);

		window.display();





	}



	return 0;
}