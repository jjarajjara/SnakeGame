#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_mixer.h"
#include "SDL_image.h"

void InitGame();
void ClearGame();

enum Phase {
	Phase_INTRO,
	PHASE_ENDING
};

extern bool g_flag_running;

class PhaseInterface {

private:

	

};