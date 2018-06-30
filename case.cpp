void control(SDL_Event& event) {
	while (SDL_PollEvent(&event) != 0) {
		switch (event.type) {
		case SDL_QUIT:
			RUNNING = false;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
				break;
			case SDLK_w:
				//KEY_NONE= false;
				//KEY_UP= true;
				std::cout << "KEY pressed \n";
				break;
			case SDLK_a:
				//KEY_NONE= false;
				KEY_LEFT = true;
				break;
			case SDLK_s:
				//KEY_NONE= false;
				KEY_DOWN = true;
				break;
			case SDLK_d:
				//KEY_NONE= false;
				KEY_RIGHT = false;
				break;
			}
		case SDL_KEYUP:
			switch (event.key.keysym.sym) {
			case SDLK_w:
				//KEY_NONE= true; 
				KEY_UP = true;
				std::cout << "KEY released \n";
				break;
			case SDLK_a:
				//KEY_NONE= true; 
				//KEY_LEFT= false;
				break;
			case SDLK_s:
				//KEY_NONE= true; 
				//KEY_DOWN= false;
				break;
			case SDLK_d:
				//KEY_NONE= true; 
				KEY_RIGHT = true;
				break;
			}
			break;
		}

	}
}