// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <config/Ascii.h>
#include <config/CryptoNoteConfig.h>
#include <sstream>
#include <version.h>

namespace CryptoNote
{
    inline std::string getProjectCLIHeader()
    {
        std::stringstream programHeader;
        programHeader
            << std::endl
            << asciiArt << std::endl
            << " " << CryptoNote::CRYPTONOTE_NAME << " v" << PROJECT_VERSION_LONG << " TESTNET" << std::endl
            << std::endl;

        return programHeader.str();
    }
} // namespace CryptoNote