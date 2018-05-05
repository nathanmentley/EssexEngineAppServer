/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/BaseApp.h>

namespace EssexEngine{
namespace Apps{
namespace Server{
    class ServerApp: public Core::BaseApp
    {
        public:
            ServerApp(): BaseApp() { }
            ~ServerApp() {}
            std::string GetAppName() { return "Server"; }
            std::string GetAppVersion() { return ESSEX_ENGINE_VERSION; }
    };
}}};
