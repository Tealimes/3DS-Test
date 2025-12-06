#include <3ds.h>
#include <citro2d.h>
#include <citro3d.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  gfxInitDefault();
  consoleInit(GFX_TOP, NULL);

  printf("That's a wrap\n");
  printf("Press start to exit\n");

  while (aptMainLoop) {
    gspWaitForVBlank();
    gfxSwapBuffers();
    hidScanInput();
    u32 keyPressed = hidKeysDown();

    if (keyPressed & KEY_START) {
      return 0;
    }
  }
  gfxExit();
  return 0;
}