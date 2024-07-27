#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	ContextSettings set;
	RenderWindow window(VideoMode(800,600), "Game", Style::Default, set); 

	
	set.antialiasingLevel= 8;

	CircleShape circle1(50);
	circle1.setFillColor(Color::White);
	circle1.setPosition(Vector2f(350, 250));
	circle1.setOutlineThickness(10);
	circle1.setOutlineColor(Color::Black);

	RectangleShape rec1(Vector2f(100, 50));
	rec1.setFillColor(Color::Green);
	rec1.setOutlineColor(Color::Black);
	rec1.setOutlineThickness(10);
	rec1.setPosition(Vector2f(100, 100));

	
	//main game loop

	while (window.isOpen()) {  

		Event event1;  

		while (window.pollEvent(event1)) {
		//-------------------------------------UPDATE-----------------------------------------

			if (event1.type == Event::Closed)  
				window.close();
		}
		//-------------------------------------DRAW-----------------------------------------------
		window.clear(Color::Yellow);
		
		window.draw(circle1);
		window.draw(rec1);
		window.display();





	}
	 


	return 0;
}