// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "carla/Memory.h"
#include "carla/road/Map.h"
#include "parser/OpenDriveParser.h"

#include <istream>
#include <ostream>

namespace carla {
namespace opendrive {

    class OpenDrive {
    public:

      static SharedPtr<road::Map> Load(std::istream &input);
      static SharedPtr<road::Map> Load(const std::string &file, XmlInputType inputType);

      static void Dump(const road::Map &map, std::ostream &output);
    };

} // namespace opendrive
} // namespace carla
