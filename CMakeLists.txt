#files

file(GLOB EssexEngineAppServer_HEADERS
    "src/Apps/Server/*.h"
    "src/Apps/Server/*/*.h"
)
file(GLOB EssexEngineAppServer_SRC
    ${EssexEngineAppServer_HEADERS}
    "src/Apps/Server/*.cpp"
    "src/Apps/Server/*/*.cpp"
)

#setup headers

file(COPY ${EssexEngineAppServer_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineAppServer/")

#setup build

add_library(EssexEngineAppServer SHARED ${EssexEngineAppServer_SRC})
target_link_libraries(EssexEngineAppServer EssexEngineCore)
target_link_libraries(EssexEngineAppServer EssexEngineLibIsoMap)
target_link_libraries(EssexEngineAppServer EssexEngineAppGame)

#run

add_custom_target(runServer
    COMMAND EssexEngineBootloader --server
    DEPENDS EssexEngineBootloader
    WORKING_DIRECTORY ../filesystem
)