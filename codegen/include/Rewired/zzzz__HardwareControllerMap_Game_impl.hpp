#pragma once
// IWYU pragma private; include "Rewired/HardwareControllerMap_Game.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareAxisInfo_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareButtonInfo_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_impl.hpp"
#include "Rewired/zzzz__AxisCalibrationData_impl.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_impl.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_impl.hpp"
#include "Rewired/zzzz__JoystickType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareAxisInfo_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareButtonInfo_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ADictionary_2_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA()   {
}
constexpr ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA  Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA::Error{static_cast<int32_t>(0x0)};
constexpr ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA  Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA::FoundIndex{static_cast<int32_t>(0x1)};
constexpr ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA  Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA::IsWholeElement{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.get_deviceLocalizationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::Localization::DeviceLocalizationInfo* (::Rewired::HardwareControllerMap_Game::*)()>(&::Rewired::HardwareControllerMap_Game::get_deviceLocalizationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"get_deviceLocalizationInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareControllerMap_Game::*)(::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, int32_t, ::ArrayW<::Rewired::ControllerElementIdentifier*>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::Rewired::AxisCalibrationData>, ::ArrayW<::Rewired::AxisRange>, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>)>(&::Rewired::HardwareControllerMap_Game::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a1ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareControllerMap_Game::*)(::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::HardwareControllerMapIdentifier, ::ArrayW<::Rewired::JoystickType>, ::ArrayW<::Rewired::ControllerElementIdentifier*>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::Rewired::AxisCalibrationData>, ::ArrayW<::Rewired::AxisRange>, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>)>(&::Rewired::HardwareControllerMap_Game::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819a2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::JoystickType>>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareControllerMap_Game::*)(::StringW, ::Rewired::HardwareControllerMapIdentifier, ::ArrayW<::Rewired::ControllerElementIdentifier*>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::Rewired::AxisCalibrationData>, ::ArrayW<::Rewired::AxisRange>, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>)>(&::Rewired::HardwareControllerMap_Game::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1819a19c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareControllerMap_Game::*)(::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::ArrayW<::Rewired::ControllerElementIdentifier*>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::Rewired::AxisCalibrationData>, ::ArrayW<::Rewired::AxisRange>, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>)>(&::Rewired::HardwareControllerMap_Game::_ctor)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x1819a1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetElementIdentifierName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetElementIdentifierName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a1330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetElementIdentifierPositiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetElementIdentifierPositiveName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a13f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierPositiveName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetElementIdentifierNegativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetElementIdentifierNegativeName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a1390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierNegativeName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetAxisIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetAxisIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a0ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetAxisIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HardwareControllerMap_Game::*)(::StringW)>(&::Rewired::HardwareControllerMap_Game::GetAxisIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819a0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetButtonIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a10b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HardwareControllerMap_Game::*)(::StringW)>(&::Rewired::HardwareControllerMap_Game::GetButtonIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819a1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetElementIdentifierById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetElementIdentifierById)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a12a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetButtonElementIdentifierById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetButtonElementIdentifierById)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a1040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetAxisElementIdentifierById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetAxisElementIdentifierById)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetAxis2DData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetAxis2DData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a0de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxis2DData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetHatData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetHatData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a14c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetHatData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetDPadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetDPadData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a1210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetDPadData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.GetElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::HardwareControllerMap_Game::*)(int32_t)>(&::Rewired::HardwareControllerMap_Game::GetElementType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a1450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.TryGetCompoundElementMemberCombinedLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HardwareControllerMap_Game::*)(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*, ::by_ref<::StringW>)>(&::Rewired::HardwareControllerMap_Game::TryGetCompoundElementMemberCombinedLocalizedName)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1819a17f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"TryGetCompoundElementMemberCombinedLocalizedName", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.TryGetCompoundElementMemberCombinedGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HardwareControllerMap_Game::*)(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*, bool, bool, ::by_ref<::System::Object*>, ::by_ref<::StringW>)>(&::Rewired::HardwareControllerMap_Game::TryGetCompoundElementMemberCombinedGlyph)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1819a1550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"TryGetCompoundElementMemberCombinedGlyph", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.DgAjihXXBMHXfaetSwPHxfgpLVaqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HardwareControllerMap_Game::*)(::ArrayW<::Rewired::ControllerElementIdentifier*>, int32_t)>(&::Rewired::HardwareControllerMap_Game::DgAjihXXBMHXfaetSwPHxfgpLVaqA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"DgAjihXXBMHXfaetSwPHxfgpLVaqA", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMap_Game.fUhOVmNVjWkAOhjkChKNPhLglmnx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA (*)(::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*, ::Rewired::ControllerElementIdentifier*, ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*, ::by_ref<int32_t>)>(&::Rewired::HardwareControllerMap_Game::fUhOVmNVjWkAOhjkChKNPhLglmnx)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1819a29f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"fUhOVmNVjWkAOhjkChKNPhLglmnx", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::HardwareControllerMap_Game::__cordl_internal_get_controllerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr ::StringW const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_controllerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_controllerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerName = value;
}
constexpr ::Rewired::HardwareControllerMapIdentifier& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hardwareMapIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareMapIdentifier;
}
constexpr ::Rewired::HardwareControllerMapIdentifier const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hardwareMapIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareMapIdentifier;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hardwareMapIdentifier(::Rewired::HardwareControllerMapIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareMapIdentifier = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_customControllerSourceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControllerSourceId;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_customControllerSourceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControllerSourceId;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_customControllerSourceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControllerSourceId = value;
}
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_elementIdentifiers(::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifiers = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_elementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifiers_cache = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_buttonElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonElementIdentifiers_cache = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axisElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisElementIdentifiers_cache = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axis2DElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis2DElementIdentifiers_cache = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hatElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatElementIdentifiers_cache = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifiers_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifiers_cache;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifiers_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifiers_cache;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_dpadElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadElementIdentifiers_cache = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_elementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifiers_readOnly = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_buttonElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonElementIdentifiers_readOnly = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axisElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisElementIdentifiers_readOnly = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axis2DElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis2DElementIdentifiers_readOnly = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hatElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatElementIdentifiers_readOnly = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifiers_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifiers_readOnly;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifiers_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifiers_readOnly;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_dpadElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadElementIdentifiers_readOnly = value;
}
constexpr ::ArrayW<int32_t>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifierIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifierIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonElementIdentifierIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonElementIdentifierIds;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_buttonElementIdentifierIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonElementIdentifierIds = value;
}
constexpr ::ArrayW<int32_t>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifierIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifierIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisElementIdentifierIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisElementIdentifierIds;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axisElementIdentifierIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisElementIdentifierIds = value;
}
constexpr ::ArrayW<int32_t>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifierIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifierIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DElementIdentifierIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DElementIdentifierIds;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axis2DElementIdentifierIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis2DElementIdentifierIds = value;
}
constexpr ::ArrayW<int32_t>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifierIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifierIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatElementIdentifierIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatElementIdentifierIds;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hatElementIdentifierIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatElementIdentifierIds = value;
}
constexpr ::ArrayW<int32_t>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifierIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifierIds;
}
constexpr ::ArrayW<int32_t> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadElementIdentifierIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadElementIdentifierIds;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_dpadElementIdentifierIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadElementIdentifierIds = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifierCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_elementIdentifierCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_elementIdentifierCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifierCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_compoundElementCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElementCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_compoundElementCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElementCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_compoundElementCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compoundElementCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_axis2DCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_axis2DCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis2DCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hatCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hatCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatCount = value;
}
constexpr int32_t& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadCount;
}
constexpr int32_t const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_dpadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadCount;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_dpadCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadCount = value;
}
constexpr ::ArrayW<::Rewired::JoystickType>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_joystickTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTypes;
}
constexpr ::ArrayW<::Rewired::JoystickType> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_joystickTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTypes;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_joystickTypes(::ArrayW<::Rewired::JoystickType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickTypes = value;
}
constexpr ::ArrayW<::Rewired::AxisCalibrationData>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisCalibrationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisCalibrationData;
}
constexpr ::ArrayW<::Rewired::AxisCalibrationData> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisCalibrationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisCalibrationData;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hwAxisCalibrationData(::ArrayW<::Rewired::AxisCalibrationData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hwAxisCalibrationData = value;
}
constexpr ::ArrayW<::Rewired::AxisRange>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisRanges;
}
constexpr ::ArrayW<::Rewired::AxisRange> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisRanges;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hwAxisRanges(::ArrayW<::Rewired::AxisRange>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hwAxisRanges = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisInfo;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwAxisInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwAxisInfo;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hwAxisInfo(::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hwAxisInfo = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwButtonInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwButtonInfo;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_hwButtonInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hwButtonInfo;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_hwButtonInfo(::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hwButtonInfo = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>& Rewired::HardwareControllerMap_Game::__cordl_internal_get_compoundElements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElements;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*> const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_compoundElements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElements;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_compoundElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compoundElements = value;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& Rewired::HardwareControllerMap_Game::__cordl_internal_get_TQqVpAUKfkMlWPCgkrLMKXtMqtjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TQqVpAUKfkMlWPCgkrLMKXtMqtjA;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& Rewired::HardwareControllerMap_Game::__cordl_internal_get_TQqVpAUKfkMlWPCgkrLMKXtMqtjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TQqVpAUKfkMlWPCgkrLMKXtMqtjA;
}
constexpr void Rewired::HardwareControllerMap_Game::__cordl_internal_set_TQqVpAUKfkMlWPCgkrLMKXtMqtjA(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TQqVpAUKfkMlWPCgkrLMKXtMqtjA = value;
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::HardwareControllerMap_Game::get_deviceLocalizationInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"get_deviceLocalizationInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(this, ___internal_method);
}
inline void Rewired::HardwareControllerMap_Game::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_10)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void Rewired::HardwareControllerMap_Game::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_10, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::JoystickType>>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void Rewired::HardwareControllerMap_Game::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9);
}
inline void Rewired::HardwareControllerMap_Game::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::ArrayW<::Rewired::AxisRange>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9);
}
inline ::StringW Rewired::HardwareControllerMap_Game::GetElementIdentifierName(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elementIdentifierId);
}
inline ::StringW Rewired::HardwareControllerMap_Game::GetElementIdentifierPositiveName(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierPositiveName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elementIdentifierId);
}
inline ::StringW Rewired::HardwareControllerMap_Game::GetElementIdentifierNegativeName(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierNegativeName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elementIdentifierId);
}
inline int32_t Rewired::HardwareControllerMap_Game::GetAxisIndex(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIdentifierId);
}
inline int32_t Rewired::HardwareControllerMap_Game::GetAxisIndex(::StringW  elementIdentifierName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIdentifierName);
}
inline int32_t Rewired::HardwareControllerMap_Game::GetButtonIndex(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIdentifierId);
}
inline int32_t Rewired::HardwareControllerMap_Game::GetButtonIndex(::StringW  elementIdentifierName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIdentifierName);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::HardwareControllerMap_Game::GetElementIdentifierById(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, id);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::HardwareControllerMap_Game::GetButtonElementIdentifierById(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetButtonElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, id);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::HardwareControllerMap_Game::GetAxisElementIdentifierById(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxisElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, id);
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* Rewired::HardwareControllerMap_Game::GetAxis2DData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetAxis2DData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>(this, ___internal_method, index);
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* Rewired::HardwareControllerMap_Game::GetHatData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetHatData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>(this, ___internal_method, index);
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* Rewired::HardwareControllerMap_Game::GetDPadData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetDPadData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>(this, ___internal_method, index);
}
inline ::Rewired::ControllerElementType Rewired::HardwareControllerMap_Game::GetElementType(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"GetElementType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method, elementIdentifierId);
}
inline bool Rewired::HardwareControllerMap_Game::TryGetCompoundElementMemberCombinedLocalizedName(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  aems, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"TryGetCompoundElementMemberCombinedLocalizedName", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aems, result);
}
inline bool Rewired::HardwareControllerMap_Game::TryGetCompoundElementMemberCombinedGlyph(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  aems, bool  getGlyph, bool  getFinalKey, ::by_ref<::System::Object*>  glyphResult, ::by_ref<::StringW>  finalKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"TryGetCompoundElementMemberCombinedGlyph", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aems, getGlyph, getFinalKey, glyphResult, finalKey);
}
inline int32_t Rewired::HardwareControllerMap_Game::DgAjihXXBMHXfaetSwPHxfgpLVaqA(::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"DgAjihXXBMHXfaetSwPHxfgpLVaqA", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA Rewired::HardwareControllerMap_Game::fUhOVmNVjWkAOhjkChKNPhLglmnx(::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMap_Game*>(),
                        {"fUhOVmNVjWkAOhjkChKNPhLglmnx", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::HardwareControllerMap_Game::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_10)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HardwareControllerMap_Game*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10));
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::HardwareControllerMap_Game::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_10, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_11)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HardwareControllerMap_Game*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11));
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::HardwareControllerMap_Game::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HardwareControllerMap_Game*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9));
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::HardwareControllerMap_Game::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HardwareControllerMap_Game*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9));
}
// Ctor Parameters []
constexpr ::Rewired::HardwareControllerMap_Game::HardwareControllerMap_Game()   {
}
