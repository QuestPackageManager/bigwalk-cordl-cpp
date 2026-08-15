#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Rewired/Data/ConfigVars.hpp"
#include "Rewired/Data/ControllerDataFiles.hpp"
#include "Rewired/Data/ControllerMapEnabler_RuleSet_Editor.hpp"
#include "Rewired/Data/ControllerMapEnabler_Rule_Editor.hpp"
#include "Rewired/Data/ControllerMapLayoutManager_RuleSet_Editor.hpp"
#include "Rewired/Data/ControllerMapLayoutManager_Rule_Editor.hpp"
#include "Rewired/Data/ControllerSetSelector_Editor.hpp"
#include "Rewired/Data/ControllerTemplateElementIdentifier_Editor.hpp"
#include "Rewired/Data/CustomController_Editor.hpp"
#include "Rewired/Data/EditorPlatformData.hpp"
#include "Rewired/Data/EditorSettings.hpp"
#include "Rewired/Data/IConfigVars_Internal.hpp"
#include "Rewired/Data/Player_Editor.hpp"
#include "Rewired/Data/RuntimeData.hpp"
#include "Rewired/Data/UserData.hpp"
#include "Rewired/Data/UserDataStore.hpp"
#include "Rewired/Data/UserDataStore_File.hpp"
#include "Rewired/Data/UserDataStore_KeyValue.hpp"
#include "Rewired/Data/UserDataStore_PlayerPrefs.hpp"
#ifdef __cpp_modules
                    export module Data;
                    #endif
                
