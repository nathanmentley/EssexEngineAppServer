/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/State.h>

namespace EssexEngine{
namespace Apps{
namespace Server{
    class ServerMainState: public Core::Models::State
    {
    public:
        ServerMainState(WeakPointer<Context> _context);
        ~ServerMainState();
        
        //override
        void Setup();
        void Logic();
        void Render();
        bool PauseUnder();
    private:
    };
}}};
