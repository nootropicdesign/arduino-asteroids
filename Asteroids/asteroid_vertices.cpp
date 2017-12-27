// Each asteroid has up to 12 vertices.  The first number
// of each record is the number of vertices.  The next line
// is the x coordinates of each vertex, and the last line
// is the y coordinates of each vertex.  Each list is padded
// out to 12 values with zeros at the end.

#include "asteroid_vertices.h"

const uint8_t asteroid_vertices[] PROGMEM = {

10,
4, 7, 10, 15, 13, 15, 10,  4,  0, 0, 0, 0,
0, 3,  0,  3,  9, 12, 15, 15, 11, 4, 0, 0,

12,
2, 5, 9, 15, 10, 14, 9, 2, 0, 3, 0, 0,
0, 2, 0, 3, 6, 10, 15, 14, 12, 8, 5, 2,

10,
4, 7, 15, 12, 15, 14, 9, 3, 0, 0, 0, 0,
0, 0, 4, 8, 11, 15, 14, 15, 9, 4, 0, 0,

11,
5, 12, 15, 13, 11, 4, 1, 6, 0, 3, 6, 0,
0, 0, 5, 12, 14, 15, 12, 8, 9, 2, 4, 0,

8,
3, 9, 11, 11,  8,  2, 0, 0, 0, 0, 0, 0,
0, 0,  3,  8, 10, 10, 7, 3, 0, 0, 0, 0,

8,
0, 9, 12, 12,  9,  4, 1, 2, 0, 0, 0, 0,
1, 1, 4,  8, 11, 11, 7, 4, 0, 0, 0, 0,

5,
1, 5, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 3, 7, 7, 0, 0, 0, 0, 0, 0, 0, 

5,
1, 7, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 7, 7, 3, 0, 0, 0, 0, 0, 0, 0


};


