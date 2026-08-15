#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Rewired/Data/Mapping/ActionCategoryMap.hpp"
#include "Rewired/Data/Mapping/AlternateAxisCalibrationType.hpp"
#include "Rewired/Data/Mapping/AxisCalibrationInfo.hpp"
#include "Rewired/Data/Mapping/AxisCalibrationType.hpp"
#include "Rewired/Data/Mapping/AxisDirection.hpp"
#include "Rewired/Data/Mapping/ControllerMap_Editor.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateDPadMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateHatMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateSpecialElementMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateStick6DMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateStickMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateThrottleMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateThumbStickMapping.hpp"
#include "Rewired/Data/Mapping/ControllerTemplateYokeMapping.hpp"
#include "Rewired/Data/Mapping/CustomCalculation.hpp"
#include "Rewired/Data/Mapping/CustomCalculation_Accelerometer.hpp"
#include "Rewired/Data/Mapping/CustomCalculation_CompareElementValues.hpp"
#include "Rewired/Data/Mapping/CustomCalculation_FirstNonZero.hpp"
#include "Rewired/Data/Mapping/CustomCalculation_LogitechGRacingWheelPedals.hpp"
#include "Rewired/Data/Mapping/HardwareAxisInfo.hpp"
#include "Rewired/Data/Mapping/HardwareAxisType.hpp"
#include "Rewired/Data/Mapping/HardwareButtonInfo.hpp"
#include "Rewired/Data/Mapping/HardwareControllerTemplateMap.hpp"
#include "Rewired/Data/Mapping/HardwareElementSourceType.hpp"
#include "Rewired/Data/Mapping/HardwareElementSourceTypeWithHat.hpp"
#include "Rewired/Data/Mapping/HardwareJoystickMap.hpp"
#include "Rewired/Data/Mapping/HardwareJoystickTemplateMap.hpp"
#include "Rewired/Data/Mapping/HatDirection.hpp"
#include "Rewired/Data/Mapping/HatType.hpp"
#include "Rewired/Data/Mapping/IControllerTemplateMapMapping_Internal.hpp"
#include "Rewired/Data/Mapping/IControllerTemplateMapSpecialElement_Internal.hpp"
#include "Rewired/Data/Mapping/IHardwareControllerMap.hpp"
#include "Rewired/Data/Mapping/IHardwareControllerMap_Internal.hpp"
#include "Rewired/Data/Mapping/IHardwareControllerTemplateMap.hpp"
#include "Rewired/Data/Mapping/IHardwareControllerTemplateMap_Internal.hpp"
#include "Rewired/Data/Mapping/SpecialAxisType.hpp"
#ifdef __cpp_modules
                    export module Mapping;
                    #endif
                
