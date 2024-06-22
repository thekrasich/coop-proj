#include "MainMenuBar.h"
#include <stdlib.h>

void MainMenuBar::showExitDialog()
{
    //TODO. Add Localization
    ImGui::OpenPopup("Exit Confirmation");
    if (ImGui::BeginPopupModal("Exit Confirmation", NULL, ImGuiWindowFlags_AlwaysAutoResize))
    {
        ImGui::Text("Are you sure you want to exit?\n\n");
        ImGui::Separator();

        if (ImGui::Button("Yes", ImVec2(120, 0)))
        {
            exit(0); 
        }
        ImGui::SameLine();
        if (ImGui::Button("No", ImVec2(120, 0)))
        {
            this->_showExitDialog = false;
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
    }
}

void MainMenuBar::showSettingsWindow()
{
    //TODO. Add Localization
    ImGui::Begin("Settings window", &_showSettingsWindow);
    ImGui::Text("Settings go here.");
    ImGui::End();
}

void MainMenuBar::showAboutDialog()
{

    //TODO. Add Localization
    ImGui::OpenPopup("About program");
    if (ImGui::BeginPopupModal("About program", NULL, ImGuiWindowFlags_AlwaysAutoResize))
    {
        ImGui::Text("Made by DMK Team");
        ImGui::Separator();
        if (ImGui::Button("Close", ImVec2(120, 0)))
        {
            this->_showAboutDialog = false;
            ImGui::CloseCurrentPopup();
        }

        ImGui::EndPopup();
    }

}

void MainMenuBar::openDocummentation()
{
    const char* url = "http://example.com"; 

    #if defined(_WIN32)
        system((std::string("start ") + url).c_str());
    #elif defined(__APPLE__)
        system((std::string("open ") + url).c_str());
    #elif defined(__linux__)
        system((std::string("xdg-open ") + url).c_str());
    #endif
}

void MainMenuBar::render()
{
    //TODO. Add localization
    ImGui::BeginMainMenuBar();

    if (ImGui::MenuItem("Exit"))
    {
        this->_showExitDialog = true;
    }
    if (ImGui::MenuItem("Settings"))
    {
        this->_showSettingsWindow = true;
    }
    if (ImGui::MenuItem("About"))
    {
        this->_showAboutDialog = true;
    }
    if (ImGui::MenuItem("Documentation"))
    {
        this->openDocummentation();
    }

    ImGui::EndMainMenuBar();

    if (this->_showExitDialog)
    {
        this->showExitDialog();
    }

    if (this->_showSettingsWindow)
    {
        this->showSettingsWindow();
    }

    if (this->_showAboutDialog) 
    {
        this->showAboutDialog();
    }
}
