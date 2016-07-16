#pragma once

#include "pebble.h"

#define NUM_CLOCK_TICKS 13

static const struct GPathInfo ANALOG_BG_POINTS[] = {
  // Hour Points (1)
  { 4,
    (GPoint []) {
      {68, 0},
      {71, 0},
      {71, 12},
      {68, 12}
    }
  },
  // Hour Points (2)
  { 4, (GPoint []){
      {72, 0},
      {75, 0},
      {75, 12},
      {72, 12}
    }
  },
  // 1 o'clock
  { 4, (GPoint []){
      {112, 10},
      {114, 12},
      {108, 23},
      {106, 21}
    }
  },
  // 2 o'clock
  { 4, (GPoint []){
      {132, 47},
      {144, 40},
      {144, 44},
      {135, 49}
    }
  },
  // 3 o'clock
  { 4, (GPoint []){
      {140, 84},
      {154, 84},
      {154, 86},
      {140, 86}
    }
  },
  // 4 o'clock
  { 4, (GPoint []){
      {135, 118},
      {144, 123},
      {144, 126},
      {132, 120}
    }
  },
  // 5 o'clock
  { 4, (GPoint []){
      {108, 144},
      {114, 154},
      {112, 157},
      {106, 147}
    }
  },
  // 6 o'clock
  { 4, (GPoint []){
      {70, 155},
      {73, 155},
      {73, 167},
      {70, 167}
    }
  },
  // 7 o'clock
  { 4, (GPoint []){
      {32, 10},
      {30, 12},
      {36, 23},
      {38, 21}
    }
  },
  // 8 o'clock
  { 4, (GPoint []){
      {12, 47},
      {-1, 40},
      {-1, 44},
      {9, 49}
    }
  },
  // 9 o'clock
  { 4, (GPoint []){
      {2, 84},
      {-12, 84},
      {-12, 86},
      {2, 86}
    }
  },
  // 10 o'clock
  { 4, (GPoint []){
      {9, 118},
      {-1, 123},
      {-1, 126},
      {12, 120}
    }
  },
  // 11 o'clock
  { 4, (GPoint []){
      {36, 144},
      {30, 154},
      {32, 157},
      {38, 147}
    }
  },

};

static const GPathInfo MINUTE_HAND_POINTS = {
  5, (GPoint []) {
    { -3, 0 },
    { 3, 0 },
    { 3, -75 },
    { 0, -80 },
    {-3, -75 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  5, (GPoint []){
    {-4, 0 },
    { 4, 0 },
    { 4, -55 },
    { 0, -60 },
    {-4, -55 }
  }
};
