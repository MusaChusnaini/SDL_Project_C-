#include <SDL3/SDL.h>
#include <stdio.h>

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("Gagal inisialisasi SDL: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Tes SDL3", 800, 600, 0);
    if (!window) {
        printf("Gagal membuat jendela: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Delay(2000); // Tampilkan window selama 2 detik
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
