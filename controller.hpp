#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.hpp"

using namespace std;

class Controller
{
public:
    void HandleInput(bool &running, Snake &snake) const;

private:
    void ChangeDirection(Snake &snake, Snake::Direction input,
                         Snake::Direction opposite) const;
};

#endif