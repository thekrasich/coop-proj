#include "MainMenuBar.h"
#include <stdlib.h>

void MainMenuBar::showExitDialog()
{
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
    }
    if (ImGui::MenuItem("About"))
    {
    }
    if (ImGui::MenuItem("Documentation"))
    {
    }

    ImGui::EndMainMenuBar();

    if (this->_showExitDialog)
    {
        this->showExitDialog();
    }
}
