#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
    

int main(int, char**)
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Project");
    ImGui::SFML::Init(window);

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
        ImGui::BeginMainMenuBar();

        ImGui::MenuItem("Exit");
        ImGui::MenuItem("Settings");
        ImGui::MenuItem("About");
        ImGui::MenuItem("Docummentation");

        ImGui::EndMainMenuBar();
       
        window.clear(sf::Color(0, 33, 43));
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
    return 0;
}