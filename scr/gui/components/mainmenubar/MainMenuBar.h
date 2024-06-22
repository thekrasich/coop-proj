#pragma once
#include "imgui.h"

class MainMenuBar
{
private:
	bool _showExitDialog = false;
	void showExitDialog();

public:
	void render();
};

