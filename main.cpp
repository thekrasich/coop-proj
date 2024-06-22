#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "scr/gui/components/mainmenubar/MainMenuBar.h"

void preWindowCreateInit();

int main(int, char**)
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Project");
    ImGui::SFML::Init(window);
    
    //Initialization
    MainMenuBar mainMenuBar;
    preWindowCreateInit();



    sf::Clock deltaClock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        }
        ImGui::SFML::Update(window, deltaClock.restart());

        // MAIN MENU BAR
        mainMenuBar.render();
       
        window.clear(sf::Color(0, 33, 43));
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
    return 0;
}

void preWindowCreateInit()
{
}
