#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  gfxInitDefault();
  consoleInit(GFX_TOP, NULL);

  printf("JOE\n");
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