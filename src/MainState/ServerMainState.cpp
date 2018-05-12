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

#include <EssexEngineAppServer/ServerMainState.h>

using EssexEngine::Core::Models::State;
using EssexEngine::Apps::Server::ServerMainState;

ServerMainState::ServerMainState(WeakPointer<Context> _context): State(_context) {}

ServerMainState::~ServerMainState() {}

void ServerMainState::Setup() {}

void ServerMainState::Logic() {}

void ServerMainState::Render() {}

bool ServerMainState::PauseUnder() {
    return true;
}
