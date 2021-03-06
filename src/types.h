/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 *
 * C++ BattleShip Project
 * 2018-06-02
 * 20163137 이민철
 */


#ifndef BATTLESHIP_TYPES_H_
#define BATTLESHIP_TYPES_H_

struct Position {
  int x, y;
  Position() = default;
  Position(int x, int y) : x(x), y(y) {}
  Position operator+(Position position);
  Position operator-(Position position);
};

enum HitResult { MISS, HIT, DESTROY, GAME_CLEAR };

enum ShipType {
  SHIP_NONE = '0',
  AIRCRAFT = 'A',
  BATTLESHIP = 'B',
  CRUISER = 'C',
  DESTROYER = 'D',
  SHIP_CANT_PLACE = -1
};

enum GameMode {
  PLAY_INPUT, PLAY_RANDOM, PLAY_FOLLOW_AI
};

#endif //BATTLESHIP_TYPES_H_
