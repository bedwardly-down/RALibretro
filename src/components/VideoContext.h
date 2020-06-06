/*
Copyright (C) 2018 Andre Leiradella

This file is part of RALibretro.

RALibretro is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RALibretro is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "libretro/Components.h"

#include <SDL.h>

class VideoContext : public libretro::VideoContextComponent
{
public:
  bool init(libretro::LoggerComponent* logger, SDL_Window* window);
  void destroy();

  virtual void swapBuffers() override;

private:
  libretro::LoggerComponent* _logger;
  SDL_Window* _window;
};