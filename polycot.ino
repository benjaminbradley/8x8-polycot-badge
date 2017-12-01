/** \file
 */

#include "Badge.h"
#include "matrixAnimation.h"
#include "frame-polycot-spin.h"
#include "scroll-polycot-associates.h"

Badge badge;

uint32_t last_draw_millis, last_move_millis;



void setup()
{
    badge.begin();
    badge.matrix.setBrightness(100);
}


void loop()
{
  // play the logo spin
  logo_animation.play(badge.matrix);
  // show the name scroller
  scroll_animation.play(badge.matrix);
}


