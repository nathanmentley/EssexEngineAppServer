ee_setup_project("EssexEngineAppServer" "src/Apps/Server/")

target_link_libraries(EssexEngineAppServer EssexEngineCore)
target_link_libraries(EssexEngineAppServer EssexEngineLibIsoMap)
target_link_libraries(EssexEngineAppServer EssexEngineAppGame)

add_custom_target(runServer
    COMMAND EssexEngineBootloader --server
    DEPENDS EssexEngineBootloader
    WORKING_DIRECTORY ../filesystem
)
