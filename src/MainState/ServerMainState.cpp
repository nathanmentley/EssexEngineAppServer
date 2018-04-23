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

#include <EssexEngineAppServer/ServerMainState.h>

EssexEngine::Apps::Server::ServerMainState::ServerMainState(WeakPointer<Context> _context)
:Core::Models::State(_context) {
}

EssexEngine::Apps::Server::ServerMainState::~ServerMainState() {
}

void EssexEngine::Apps::Server::ServerMainState::Setup() {
}

void EssexEngine::Apps::Server::ServerMainState::Logic() {
}

void EssexEngine::Apps::Server::ServerMainState::Render() {
    /*
    ImGui::Begin("Debug Console");
    ImGui::Text("Hello");
    ImGui::End();
    */
}

bool EssexEngine::Apps::Server::ServerMainState::PauseUnder() {
    return true;
}
