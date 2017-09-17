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
#include <EssexEngineAppServer/ServerApp.h>

extern "C" {
    void app_init(EssexEngine::Context* context) {
        context->RegisterApp(
            new EssexEngine::Apps::Server::ServerApp(
                new EssexEngine::Apps::Server::ServerMainState(context)
            )
        );
    }
}