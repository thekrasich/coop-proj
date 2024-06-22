#pragma once
#include "imgui.h"
#include <cstdlib>
#include<string>

class MainMenuBar
{
private:
	bool _showExitDialog = false;
	bool _showSettingsWindow = false;
	bool _showAboutDialog = false;

	void showExitDialog();
	void showSettingsWindow();
	void showAboutDialog();
	void openDocummentation();

public:
	void render();
};

