// The ship has 3 vertices that define its outline.
// The vertices are used for collision detection, not drawing.
// There are 16 different bitmap representations of the ship.
// For each representation, below is the list of x coordinates
// and y coordinates for each vertex.  Coordinates are relative
// to the upper left pixel of the ship bitmap.

#include "ship_vertices.h"

const uint8_t ship_vertices[] PROGMEM = {

  // 0
  3, 0, 6,
  0, 6, 6,

  // 1
  4, 0, 3,
  0, 5, 7,

  // 2
  6, 0, 3,
  0, 2, 6,

  // 3
  7, 0, 2,
  1, 2, 5,

  // 4
  0, 6, 0,
  0, 3, 6,

  // 5
  2, 0, 7,
  0, 3, 4,
  
  // 6
  3, 0, 6,
  0, 3, 6,

  // 7
  3, 0, 4,
  0, 2, 7,

  // 8
  0, 6, 3,
  0, 0, 6,

  // 9
  2, 5, 1,
  0, 2, 7,

  // 10
  3, 0, 6,
  0, 6, 3,

  // 11
  5, 7, 0,
  0, 3, 4,

  // 12
  6, 0, 6,
  0, 3, 6,

  // 13
  0, 7, 5,
  1, 2, 5,

  // 14
  0, 6, 3,
  0, 3, 6, 

  // 15
  1, 5, 2,
  0, 5, 7
};


