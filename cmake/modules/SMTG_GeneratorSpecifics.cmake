cmake_minimum_required(VERSION 3.14.0)

# Output directory of the generated plug-in.
set(SMTG_GENERATOR_OUTPUT_DIRECTORY ${SMTG_CMAKE_SCRIPT_DIR}/output)
if(SMTG_GENERATOR_OUTPUT_DIRECTORY_CLI)
    set(SMTG_GENERATOR_OUTPUT_DIRECTORY ${SMTG_GENERATOR_OUTPUT_DIRECTORY_CLI})
endif()

# Directory to the cmake script's template files.
set(SMTG_TEMPLATE_FILES_PATH ${SMTG_CMAKE_SCRIPT_DIR}/cmake/templates)
if(SMTG_TEMPLATE_FILES_PATH_CLI)
    set(SMTG_TEMPLATE_FILES_PATH ${SMTG_TEMPLATE_FILES_PATH_CLI})
endif()

function(smtg_print_generator_specifics)
    message(STATUS "SMTG_GENERATOR_OUTPUT_DIRECTORY : ${SMTG_GENERATOR_OUTPUT_DIRECTORY}")
    message(STATUS "SMTG_TEMPLATE_FILES_PATH        : ${SMTG_TEMPLATE_FILES_PATH}")
    message("")
endfunction()