// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc2/command/PrintCommand.h"

#include <fmt/format.h>

using namespace frc2;

PrintCommand::PrintCommand(std::string_view message)
    : InstantCommand{[str = std::string(message)] { fmt::print("{}\n", str); },
                    {}} {}

bool PrintCommand::RunsWhenDisabled() const {
  return true;
}
