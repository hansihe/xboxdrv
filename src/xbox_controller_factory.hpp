/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2011 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_XBOXDRV_XBOX_CONTROLLER_FACTORY_HPP
#define HEADER_XBOXDRV_XBOX_CONTROLLER_FACTORY_HPP

#include <memory>
#include <libusb.h>

#include "xpad_device.hpp"
#include "options.hpp"

class XboxGenericController;

class XboxControllerFactory
{
public:
  static std::auto_ptr<XboxGenericController> create(const XPadDevice& dev_type, 
                                                     libusb_device* dev, 
                                                     const Options& opts);

private:
  XboxControllerFactory(const XboxControllerFactory&);
  XboxControllerFactory& operator=(const XboxControllerFactory&);
};

#endif

/* EOF */