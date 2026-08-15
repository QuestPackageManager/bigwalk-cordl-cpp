#pragma once
// IWYU pragma private; include "Rewired/InputManagers/CustomInputManager.hpp"
#include "Rewired/zzzz__InputSource_impl.hpp"
#include "Rewired/zzzz__PlatformInputManager_impl.hpp"
#include "Rewired/zzzz__UpdateLoopType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/InputManagers/zzzz__CustomInputManager_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/InputManagers/zzzz__CustomInputManager_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystickPublic_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystick_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedMouseSource_def.hpp"
#include "Rewired/Internal/Localization/zzzz__ITryGetLocalizedName_def.hpp"
#include "Rewired/Internal/Localization/zzzz__LocalizedString_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "Rewired/zzzz__BridgedControllerHWInfo_def.hpp"
#include "Rewired/zzzz__BridgedController_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerDisconnectedEventArgs_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareJoystickMap_InputManager_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__PlatformInputManager_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.pKNvCEdtReSnfbXhQGqMsBKTjAkW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::pKNvCEdtReSnfbXhQGqMsBKTjAkW)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181888c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"pKNvCEdtReSnfbXhQGqMsBKTjAkW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.FqAoUQLzMXTcoKlVverkDsegEIWkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::FqAoUQLzMXTcoKlVverkDsegEIWkA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181887670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"FqAoUQLzMXTcoKlVverkDsegEIWkA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_rewiredId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_rewiredId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_rewiredId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.set_rewiredId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(int32_t)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::set_rewiredId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"set_rewiredId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_inputManagerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_inputManagerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_inputManagerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.set_inputManagerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(int32_t)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::set_inputManagerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"set_inputManagerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_name)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818889b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_systemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_systemId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_systemId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_unityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_unityId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_unityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_instanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_instanceGuid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181888910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_instanceGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_persistentGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_persistentGuid)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181888a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_persistentGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.get_extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_extension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_extension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(float_t, int32_t)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::SetVibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::StopVibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::Platforms::Custom::CustomInputSource*, ::System::Nullable_1<int64_t>, int32_t, ::Rewired::Platforms::Custom::CustomInputSource_Joystick*, ::Rewired::InputSource, ::Rewired::Controller_Extension*, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1818884a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource*>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.pePinqIBGwouBbFMvcJpdveJmnYuA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::pePinqIBGwouBbFMvcJpdveJmnYuA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181888cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"pePinqIBGwouBbFMvcJpdveJmnYuA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181887f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.gAbZRxHjpXPVipiotEWxViYjwLjE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::gAbZRxHjpXPVipiotEWxViYjwLjE)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181888800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"gAbZRxHjpXPVipiotEWxViYjwLjE", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.ZPiMiyWjErGQGfLKCliklsrecLtz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::BridgedControllerHWInfo*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ZPiMiyWjErGQGfLKCliklsrecLtz)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818883f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ZPiMiyWjErGQGfLKCliklsrecLtz", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.QEfXDoAHixndGsLPoJBMGNgypPas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::BridgedController*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::QEfXDoAHixndGsLPoJBMGNgypPas)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181887820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"QEfXDoAHixndGsLPoJBMGNgypPas", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.FillData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::FillData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181887560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"FillData", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.UvxCOZucwQRJGOHdnyhksCXKHwos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::BridgedControllerHWInfo* (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::UvxCOZucwQRJGOHdnyhksCXKHwos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818881e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"UvxCOZucwQRJGOHdnyhksCXKHwos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.ToBridgedController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::BridgedController* (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ToBridgedController)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181887d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ToBridgedController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.ToControllerDisconnectedEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerDisconnectedEventArgs* (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ToControllerDisconnectedEventArgs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181887ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ToControllerDisconnectedEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.inpSfgmpmxCJhwyCkuTibIqCHjye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::inpSfgmpmxCJhwyCkuTibIqCHjye)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181888b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"inpSfgmpmxCJhwyCkuTibIqCHjye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.xtRklQqfMbzwYOKMLjoUqERXhBQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::xtRklQqfMbzwYOKMLjoUqERXhBQA)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181889090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"xtRklQqfMbzwYOKMLjoUqERXhBQA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.NhyuGHBGkMEAjKGJwgBnQsBLpMgHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*, ::by_ref<float_t>)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::NhyuGHBGkMEAjKGJwgBnQsBLpMgHA)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181887700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"NhyuGHBGkMEAjKGJwgBnQsBLpMgHA", {}, {::i2c::type_of<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.HIbUjBdcsACbEFKNvDWxFrcGEoIJb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(float_t, float_t)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::HIbUjBdcsACbEFKNvDWxFrcGEoIJb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818876b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"HIbUjBdcsACbEFKNvDWxFrcGEoIJb", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.wWprSmvnbruWmOOzYhjegNjJmXuJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::wWprSmvnbruWmOOzYhjegNjJmXuJ)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181888fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"wWprSmvnbruWmOOzYhjegNjJmXuJ", {}, {::i2c::type_of<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.KCqFRBlmZacmQblXdJicgtWZmXubb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(int32_t)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::KCqFRBlmZacmQblXdJicgtWZmXubb)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818876d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"KCqFRBlmZacmQblXdJicgtWZmXubb", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.yvseQBjvPLCmFhJLxbuKlyrfVBBdA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(int32_t, ::by_ref<float_t>)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::yvseQBjvPLCmFhJLxbuKlyrfVBBdA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181889240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"yvseQBjvPLCmFhJLxbuKlyrfVBBdA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.WdpSzDwucuEZldSubmTHeXSkRprg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::WdpSzDwucuEZldSubmTHeXSkRprg)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181888220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"WdpSzDwucuEZldSubmTHeXSkRprg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.gajaOqcwRInwSMKrWCjeLqUEdOXqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::gajaOqcwRInwSMKrWCjeLqUEdOXqA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818888a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"gajaOqcwRInwSMKrWCjeLqUEdOXqA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.tCPFrzcDInuTgKbyGWDKCIdtcZXAb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)()>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::tCPFrzcDInuTgKbyGWDKCIdtcZXAb)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181888ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"tCPFrzcDInuTgKbyGWDKCIdtcZXAb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::*)(::by_ref<::StringW>)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1818879a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.EmTSVeKFKaAiYGDripAfnzKSqJpNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::EmTSVeKFKaAiYGDripAfnzKSqJpNA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181887520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"EmTSVeKFKaAiYGDripAfnzKSqJpNA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn.cbdQZIICUiJfCHGQCDdDMRACITUu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*)>(&::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::cbdQZIICUiJfCHGQCDdDMRACITUu)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181888770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"cbdQZIICUiJfCHGQCDdDMRACITUu", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputSource& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_XCxGpjcpiRTHYMteggVvIfXWfWXGb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XCxGpjcpiRTHYMteggVvIfXWfWXGb;
}
constexpr ::Rewired::InputSource const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_XCxGpjcpiRTHYMteggVvIfXWfWXGb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XCxGpjcpiRTHYMteggVvIfXWfWXGb;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_XCxGpjcpiRTHYMteggVvIfXWfWXGb(::Rewired::InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XCxGpjcpiRTHYMteggVvIfXWfWXGb = value;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XaGLtEeDlwgBDbdVWrIbTMRLcDRZ;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XaGLtEeDlwgBDbdVWrIbTMRLcDRZ;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ(::Rewired::Platforms::Custom::CustomInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XaGLtEeDlwgBDbdVWrIbTMRLcDRZ = value;
}
constexpr ::Rewired::Controller_Extension*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wvKByePABaeriIMviCUWBjomHWRGb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wvKByePABaeriIMviCUWBjomHWRGb;
}
constexpr ::Rewired::Controller_Extension* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wvKByePABaeriIMviCUWBjomHWRGb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wvKByePABaeriIMviCUWBjomHWRGb;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_wvKByePABaeriIMviCUWBjomHWRGb(::Rewired::Controller_Extension*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wvKByePABaeriIMviCUWBjomHWRGb = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_UmaagpWFFGSPAPkMbJKHJKzMSkiq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UmaagpWFFGSPAPkMbJKHJKzMSkiq;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_UmaagpWFFGSPAPkMbJKHJKzMSkiq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UmaagpWFFGSPAPkMbJKHJKzMSkiq;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_UmaagpWFFGSPAPkMbJKHJKzMSkiq(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UmaagpWFFGSPAPkMbJKHJKzMSkiq = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wbbFpHKIputiVcBhfachcSZnbIgBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbbFpHKIputiVcBhfachcSZnbIgBA;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wbbFpHKIputiVcBhfachcSZnbIgBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbbFpHKIputiVcBhfachcSZnbIgBA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_wbbFpHKIputiVcBhfachcSZnbIgBA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wbbFpHKIputiVcBhfachcSZnbIgBA = value;
}
constexpr ::System::Nullable_1<int64_t>& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_srgJkhfrpKfYhaLyLMUflCKORXsh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srgJkhfrpKfYhaLyLMUflCKORXsh;
}
constexpr ::System::Nullable_1<int64_t> const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_srgJkhfrpKfYhaLyLMUflCKORXsh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srgJkhfrpKfYhaLyLMUflCKORXsh;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_srgJkhfrpKfYhaLyLMUflCKORXsh(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srgJkhfrpKfYhaLyLMUflCKORXsh = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_SSOSdXiyYYeZjPwwXphyiGqnSJYN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SSOSdXiyYYeZjPwwXphyiGqnSJYN;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_SSOSdXiyYYeZjPwwXphyiGqnSJYN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SSOSdXiyYYeZjPwwXphyiGqnSJYN;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_SSOSdXiyYYeZjPwwXphyiGqnSJYN(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SSOSdXiyYYeZjPwwXphyiGqnSJYN = value;
}
constexpr ::System::Guid& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wPMpDvQskipJlwEoZCqehRIAjMhpA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wPMpDvQskipJlwEoZCqehRIAjMhpA;
}
constexpr ::System::Guid const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_wPMpDvQskipJlwEoZCqehRIAjMhpA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wPMpDvQskipJlwEoZCqehRIAjMhpA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_wPMpDvQskipJlwEoZCqehRIAjMhpA(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wPMpDvQskipJlwEoZCqehRIAjMhpA = value;
}
constexpr ::StringW& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ZWkWWdxyMjBssjMZbCRxTiPhXaWU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZWkWWdxyMjBssjMZbCRxTiPhXaWU;
}
constexpr ::StringW const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ZWkWWdxyMjBssjMZbCRxTiPhXaWU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZWkWWdxyMjBssjMZbCRxTiPhXaWU;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_ZWkWWdxyMjBssjMZbCRxTiPhXaWU(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZWkWWdxyMjBssjMZbCRxTiPhXaWU = value;
}
constexpr ::StringW& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_MhCCDUcKgxKpqHEdSrbeMCwcPPUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MhCCDUcKgxKpqHEdSrbeMCwcPPUV;
}
constexpr ::StringW const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_MhCCDUcKgxKpqHEdSrbeMCwcPPUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MhCCDUcKgxKpqHEdSrbeMCwcPPUV;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_MhCCDUcKgxKpqHEdSrbeMCwcPPUV(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MhCCDUcKgxKpqHEdSrbeMCwcPPUV = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_nzelYugYhQwOfSXKkvTuVKsAzuWu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nzelYugYhQwOfSXKkvTuVKsAzuWu;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_nzelYugYhQwOfSXKkvTuVKsAzuWu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nzelYugYhQwOfSXKkvTuVKsAzuWu;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_nzelYugYhQwOfSXKkvTuVKsAzuWu(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nzelYugYhQwOfSXKkvTuVKsAzuWu = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ZbgQwCUHPlGIzTARNTzwdQXojElR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZbgQwCUHPlGIzTARNTzwdQXojElR;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ZbgQwCUHPlGIzTARNTzwdQXojElR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZbgQwCUHPlGIzTARNTzwdQXojElR;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_ZbgQwCUHPlGIzTARNTzwdQXojElR(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZbgQwCUHPlGIzTARNTzwdQXojElR = value;
}
constexpr ::ArrayW<float_t>& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrMEzKhGWrMyVRqmzrcWBfjYkyGfA;
}
constexpr ::ArrayW<float_t> const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrMEzKhGWrMyVRqmzrcWBfjYkyGfA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrMEzKhGWrMyVRqmzrcWBfjYkyGfA = value;
}
constexpr ::ArrayW<bool>& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_qAiIjhcwHuvrbavsGKwoAvtPWgUyA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qAiIjhcwHuvrbavsGKwoAvtPWgUyA;
}
constexpr ::ArrayW<bool> const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_qAiIjhcwHuvrbavsGKwoAvtPWgUyA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qAiIjhcwHuvrbavsGKwoAvtPWgUyA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_qAiIjhcwHuvrbavsGKwoAvtPWgUyA(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qAiIjhcwHuvrbavsGKwoAvtPWgUyA = value;
}
constexpr ::ArrayW<float_t>& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_mqTAFiDWzTtbzABlAyKXExIEsJac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mqTAFiDWzTtbzABlAyKXExIEsJac;
}
constexpr ::ArrayW<float_t> const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_mqTAFiDWzTtbzABlAyKXExIEsJac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mqTAFiDWzTtbzABlAyKXExIEsJac;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_mqTAFiDWzTtbzABlAyKXExIEsJac(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mqTAFiDWzTtbzABlAyKXExIEsJac = value;
}
constexpr ::ArrayW<bool>& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ysprvzzSVUvcfNgEhkYwGoHEwddp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ysprvzzSVUvcfNgEhkYwGoHEwddp;
}
constexpr ::ArrayW<bool> const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_ysprvzzSVUvcfNgEhkYwGoHEwddp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ysprvzzSVUvcfNgEhkYwGoHEwddp;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_ysprvzzSVUvcfNgEhkYwGoHEwddp(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ysprvzzSVUvcfNgEhkYwGoHEwddp = value;
}
constexpr ::Rewired::HardwareJoystickMap_InputManager*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_brULvREuvWjGYGnPbfHQtidnpWEm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brULvREuvWjGYGnPbfHQtidnpWEm;
}
constexpr ::Rewired::HardwareJoystickMap_InputManager* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_brULvREuvWjGYGnPbfHQtidnpWEm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brULvREuvWjGYGnPbfHQtidnpWEm;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_brULvREuvWjGYGnPbfHQtidnpWEm(::Rewired::HardwareJoystickMap_InputManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brULvREuvWjGYGnPbfHQtidnpWEm = value;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Joystick*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_RsiFntgSiCgBMwSODqzcaOPcbIjmb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RsiFntgSiCgBMwSODqzcaOPcbIjmb;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Joystick* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_RsiFntgSiCgBMwSODqzcaOPcbIjmb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RsiFntgSiCgBMwSODqzcaOPcbIjmb;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_RsiFntgSiCgBMwSODqzcaOPcbIjmb(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RsiFntgSiCgBMwSODqzcaOPcbIjmb = value;
}
constexpr bool& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_MsoStfUpzrKDRvojZeVeofSKaXIhA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MsoStfUpzrKDRvojZeVeofSKaXIhA;
}
constexpr bool const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_MsoStfUpzrKDRvojZeVeofSKaXIhA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MsoStfUpzrKDRvojZeVeofSKaXIhA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_MsoStfUpzrKDRvojZeVeofSKaXIhA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MsoStfUpzrKDRvojZeVeofSKaXIhA = value;
}
constexpr bool& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_GVGxgVgfTnRsGcemUJsyfIAfaZIw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GVGxgVgfTnRsGcemUJsyfIAfaZIw;
}
constexpr bool const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_GVGxgVgfTnRsGcemUJsyfIAfaZIw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GVGxgVgfTnRsGcemUJsyfIAfaZIw;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_GVGxgVgfTnRsGcemUJsyfIAfaZIw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GVGxgVgfTnRsGcemUJsyfIAfaZIw = value;
}
constexpr ::Rewired::Internal::Localization::LocalizedString*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_uBoyeitdXCWnsvZhErXutfzFAuZL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uBoyeitdXCWnsvZhErXutfzFAuZL;
}
constexpr ::Rewired::Internal::Localization::LocalizedString* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_uBoyeitdXCWnsvZhErXutfzFAuZL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uBoyeitdXCWnsvZhErXutfzFAuZL;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_uBoyeitdXCWnsvZhErXutfzFAuZL(::Rewired::Internal::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uBoyeitdXCWnsvZhErXutfzFAuZL = value;
}
constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_qIdXmasDBREpHdmrdRtgbCKTQYqTA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qIdXmasDBREpHdmrdRtgbCKTQYqTA;
}
constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>* const& Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_get_qIdXmasDBREpHdmrdRtgbCKTQYqTA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qIdXmasDBREpHdmrdRtgbCKTQYqTA;
}
constexpr void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::__cordl_internal_set_qIdXmasDBREpHdmrdRtgbCKTQYqTA(::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qIdXmasDBREpHdmrdRtgbCKTQYqTA = value;
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::pKNvCEdtReSnfbXhQGqMsBKTjAkW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"pKNvCEdtReSnfbXhQGqMsBKTjAkW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::FqAoUQLzMXTcoKlVverkDsegEIWkA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"FqAoUQLzMXTcoKlVverkDsegEIWkA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_rewiredId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_rewiredId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::set_rewiredId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"set_rewiredId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_inputManagerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_inputManagerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::set_inputManagerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"set_inputManagerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Nullable_1<int64_t> Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_systemId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_systemId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_unityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_unityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_instanceGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_instanceGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Guid Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_persistentGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_persistentGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::get_extension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"get_extension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::SetVibration(float_t  amount, int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount, motorIndex);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_5, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource*>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::pePinqIBGwouBbFMvcJpdveJmnYuA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"pePinqIBGwouBbFMvcJpdveJmnYuA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::gAbZRxHjpXPVipiotEWxViYjwLjE(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"gAbZRxHjpXPVipiotEWxViYjwLjE", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ZPiMiyWjErGQGfLKCliklsrecLtz(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ZPiMiyWjErGQGfLKCliklsrecLtz", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::QEfXDoAHixndGsLPoJBMGNgypPas(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"QEfXDoAHixndGsLPoJBMGNgypPas", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::FillData(::Rewired::ControllerDataUpdater*  dataUpdater)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"FillData", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUpdater);
}
inline ::Rewired::BridgedControllerHWInfo* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::UvxCOZucwQRJGOHdnyhksCXKHwos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"UvxCOZucwQRJGOHdnyhksCXKHwos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::BridgedControllerHWInfo*>(this, ___internal_method);
}
inline ::Rewired::BridgedController* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ToBridgedController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ToBridgedController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::BridgedController*>(this, ___internal_method);
}
inline ::Rewired::ControllerDisconnectedEventArgs* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::ToControllerDisconnectedEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"ToControllerDisconnectedEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerDisconnectedEventArgs*>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::inpSfgmpmxCJhwyCkuTibIqCHjye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"inpSfgmpmxCJhwyCkuTibIqCHjye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::xtRklQqfMbzwYOKMLjoUqERXhBQA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"xtRklQqfMbzwYOKMLjoUqERXhBQA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::NhyuGHBGkMEAjKGJwgBnQsBLpMgHA(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*  _cordl_fixed_empty_name_whitespace, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"NhyuGHBGkMEAjKGJwgBnQsBLpMgHA", {}, {::i2c::type_of<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::HIbUjBdcsACbEFKNvDWxFrcGEoIJb(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"HIbUjBdcsACbEFKNvDWxFrcGEoIJb", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::wWprSmvnbruWmOOzYhjegNjJmXuJ(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"wWprSmvnbruWmOOzYhjegNjJmXuJ", {}, {::i2c::type_of<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::KCqFRBlmZacmQblXdJicgtWZmXubb(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"KCqFRBlmZacmQblXdJicgtWZmXubb", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::yvseQBjvPLCmFhJLxbuKlyrfVBBdA(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"yvseQBjvPLCmFhJLxbuKlyrfVBBdA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::WdpSzDwucuEZldSubmTHeXSkRprg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"WdpSzDwucuEZldSubmTHeXSkRprg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::gajaOqcwRInwSMKrWCjeLqUEdOXqA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"gajaOqcwRInwSMKrWCjeLqUEdOXqA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::tCPFrzcDInuTgKbyGWDKCIdtcZXAb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"tCPFrzcDInuTgKbyGWDKCIdtcZXAb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName(::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::EmTSVeKFKaAiYGDripAfnzKSqJpNA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"EmTSVeKFKaAiYGDripAfnzKSqJpNA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::cbdQZIICUiJfCHGQCDdDMRACITUu(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(),
                        {"cbdQZIICUiJfCHGQCDdDMRACITUu", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::New_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_5, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_6)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6));
}
/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystick"
constexpr  Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::operator ::Rewired::Interfaces::IInputManagerJoystick*() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystick*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystick"
constexpr ::Rewired::Interfaces::IInputManagerJoystick* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::i___Rewired__Interfaces__IInputManagerJoystick() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr  Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::operator ::Rewired::Interfaces::IInputManagerJoystickPublic*() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystickPublic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::i___Rewired__Interfaces__IInputManagerJoystickPublic() noexcept {
return static_cast<::Rewired::Interfaces::IInputManagerJoystickPublic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr  Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::operator ::Rewired::Internal::Localization::ITryGetLocalizedName*() noexcept {
return static_cast<::Rewired::Internal::Localization::ITryGetLocalizedName*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName* Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::i___Rewired__Internal__Localization__ITryGetLocalizedName() noexcept {
return static_cast<::Rewired::Internal::Localization::ITryGetLocalizedName*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA()   {
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA::Exact{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA::Approximate{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::*)(int32_t, ::System::Nullable_1<int64_t>, ::StringW, int32_t, int32_t, int32_t)>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18188a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt.XNgYcXlDxZFKCyTlhiWuwfETUmWi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA)>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::XNgYcXlDxZFKCyTlhiWuwfETUmWi)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18188a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(),
                        {"XNgYcXlDxZFKCyTlhiWuwfETUmWi", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_ZJHBmHXyhNrfFylYuRsnpMEVVlpC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZJHBmHXyhNrfFylYuRsnpMEVVlpC;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_ZJHBmHXyhNrfFylYuRsnpMEVVlpC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZJHBmHXyhNrfFylYuRsnpMEVVlpC;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_ZJHBmHXyhNrfFylYuRsnpMEVVlpC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZJHBmHXyhNrfFylYuRsnpMEVVlpC = value;
}
constexpr ::System::Nullable_1<int64_t>& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_LzKtwhhPKgCedAQoBSWttOqJMYkL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LzKtwhhPKgCedAQoBSWttOqJMYkL;
}
constexpr ::System::Nullable_1<int64_t> const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_LzKtwhhPKgCedAQoBSWttOqJMYkL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LzKtwhhPKgCedAQoBSWttOqJMYkL;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_LzKtwhhPKgCedAQoBSWttOqJMYkL(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LzKtwhhPKgCedAQoBSWttOqJMYkL = value;
}
constexpr ::StringW& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_FiEmnedUUBdEGnOQQgsYhqEhyZIH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FiEmnedUUBdEGnOQQgsYhqEhyZIH;
}
constexpr ::StringW const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_FiEmnedUUBdEGnOQQgsYhqEhyZIH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FiEmnedUUBdEGnOQQgsYhqEhyZIH;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_FiEmnedUUBdEGnOQQgsYhqEhyZIH(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FiEmnedUUBdEGnOQQgsYhqEhyZIH = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_aAKzpLmyYbNXAshNXhaSrmuEJALt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aAKzpLmyYbNXAshNXhaSrmuEJALt;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_aAKzpLmyYbNXAshNXhaSrmuEJALt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aAKzpLmyYbNXAshNXhaSrmuEJALt;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_aAKzpLmyYbNXAshNXhaSrmuEJALt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aAKzpLmyYbNXAshNXhaSrmuEJALt = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_pBofHVMdFLGBmRVVKGbyjhPfECciA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pBofHVMdFLGBmRVVKGbyjhPfECciA;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_pBofHVMdFLGBmRVVKGbyjhPfECciA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pBofHVMdFLGBmRVVKGbyjhPfECciA;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_pBofHVMdFLGBmRVVKGbyjhPfECciA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pBofHVMdFLGBmRVVKGbyjhPfECciA = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_iVfCfsMGsdTmfhraQfwxFfxbrvaK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iVfCfsMGsdTmfhraQfwxFfxbrvaK;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_get_iVfCfsMGsdTmfhraQfwxFfxbrvaK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iVfCfsMGsdTmfhraQfwxFfxbrvaK;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::__cordl_internal_set_iVfCfsMGsdTmfhraQfwxFfxbrvaK(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iVfCfsMGsdTmfhraQfwxFfxbrvaK = value;
}
inline void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline bool Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::XNgYcXlDxZFKCyTlhiWuwfETUmWi(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(),
                        {"XNgYcXlDxZFKCyTlhiWuwfETUmWi", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5));
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt()   {
}
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)(int32_t)>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181889560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_Collections_Generic_IEnumerable_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_Generic_IEnumerable_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181889640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::*)()>(&::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181889640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_RtreqBEJpCtDXeotMSeSofxXvWhm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RtreqBEJpCtDXeotMSeSofxXvWhm;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_RtreqBEJpCtDXeotMSeSofxXvWhm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RtreqBEJpCtDXeotMSeSofxXvWhm;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_RtreqBEJpCtDXeotMSeSofxXvWhm(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RtreqBEJpCtDXeotMSeSofxXvWhm = value;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_JccqhRTGiOubqqeithVHCovKniOyA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JccqhRTGiOubqqeithVHCovKniOyA;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_JccqhRTGiOubqqeithVHCovKniOyA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JccqhRTGiOubqqeithVHCovKniOyA;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_JccqhRTGiOubqqeithVHCovKniOyA(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JccqhRTGiOubqqeithVHCovKniOyA = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_cZlDlbBVqRRrOaafhUTQjZsCphpTA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cZlDlbBVqRRrOaafhUTQjZsCphpTA;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_cZlDlbBVqRRrOaafhUTQjZsCphpTA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cZlDlbBVqRRrOaafhUTQjZsCphpTA;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_cZlDlbBVqRRrOaafhUTQjZsCphpTA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cZlDlbBVqRRrOaafhUTQjZsCphpTA = value;
}
constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_MJDqmVGFlrKMEOXdVwuKlMJFIEKp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MJDqmVGFlrKMEOXdVwuKlMJFIEKp;
}
constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_MJDqmVGFlrKMEOXdVwuKlMJFIEKp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MJDqmVGFlrKMEOXdVwuKlMJFIEKp;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_MJDqmVGFlrKMEOXdVwuKlMJFIEKp(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MJDqmVGFlrKMEOXdVwuKlMJFIEKp = value;
}
constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_BNdBNyDukNkrlClxkDLriHKitghu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BNdBNyDukNkrlClxkDLriHKitghu;
}
constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_BNdBNyDukNkrlClxkDLriHKitghu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BNdBNyDukNkrlClxkDLriHKitghu;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_BNdBNyDukNkrlClxkDLriHKitghu(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BNdBNyDukNkrlClxkDLriHKitghu = value;
}
constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_hrQrLkaQGQSHNSShzHzxDGgkQesR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrQrLkaQGQSHNSShzHzxDGgkQesR;
}
constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_hrQrLkaQGQSHNSShzHzxDGgkQesR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrQrLkaQGQSHNSShzHzxDGgkQesR;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_hrQrLkaQGQSHNSShzHzxDGgkQesR(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hrQrLkaQGQSHNSShzHzxDGgkQesR = value;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_ZOfEfLiicqhXBQflPdXjZFPHGIZBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZOfEfLiicqhXBQflPdXjZFPHGIZBA;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_ZOfEfLiicqhXBQflPdXjZFPHGIZBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZOfEfLiicqhXBQflPdXjZFPHGIZBA;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_ZOfEfLiicqhXBQflPdXjZFPHGIZBA(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZOfEfLiicqhXBQflPdXjZFPHGIZBA = value;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_JcIeRAyCGdEwTinLoMjjUujWEQCW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JcIeRAyCGdEwTinLoMjjUujWEQCW;
}
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_JcIeRAyCGdEwTinLoMjjUujWEQCW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JcIeRAyCGdEwTinLoMjjUujWEQCW;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_JcIeRAyCGdEwTinLoMjjUujWEQCW(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JcIeRAyCGdEwTinLoMjjUujWEQCW = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_SKEBNGYchTkEKfwozptYhFPwqYyB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SKEBNGYchTkEKfwozptYhFPwqYyB;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_SKEBNGYchTkEKfwozptYhFPwqYyB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SKEBNGYchTkEKfwozptYhFPwqYyB;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_SKEBNGYchTkEKfwozptYhFPwqYyB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SKEBNGYchTkEKfwozptYhFPwqYyB = value;
}
constexpr int32_t& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_zZGUHFFaHqdLhBHdrBANTsgAPMag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zZGUHFFaHqdLhBHdrBANTsgAPMag;
}
constexpr int32_t const& Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_get_zZGUHFFaHqdLhBHdrBANTsgAPMag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zZGUHFFaHqdLhBHdrBANTsgAPMag;
}
constexpr void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::__cordl_internal_set_zZGUHFFaHqdLhBHdrBANTsgAPMag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zZGUHFFaHqdLhBHdrBANTsgAPMag = value;
}
inline void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>(this, ___internal_method);
}
inline void Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_Generic_IEnumerable_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::i___System__Collections__Generic__IEnumerable_1___Rewired__InputManagers__NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::i___System__Collections__Generic__IEnumerator_1___Rewired__InputManagers__NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA()   {
}
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)()>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181882a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.aeUQzXOgATFbKkBVlnpbDNIbhDEHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)()>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::aeUQzXOgATFbKkBVlnpbDNIbhDEHA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"aeUQzXOgATFbKkBVlnpbDNIbhDEHA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.CIuSgIXqgeVPmVNqCZRavsyBEiCHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*)>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::CIuSgIXqgeVPmVNqCZRavsyBEiCHA)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x181882580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"CIuSgIXqgeVPmVNqCZRavsyBEiCHA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.vUBdwGhUMkNRVdthnGWZYosfIjQRA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA)>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::vUBdwGhUMkNRVdthnGWZYosfIjQRA)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181882b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"vUBdwGhUMkNRVdthnGWZYosfIjQRA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.ocyUZTtTqxveUcdubZEzGYRygDVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA)>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::ocyUZTtTqxveUcdubZEzGYRygDVs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181882ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"ocyUZTtTqxveUcdubZEzGYRygDVs", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.TrQECzUXPEFcVqfbbHdEHOuBPPqGb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*)>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::TrQECzUXPEFcVqfbbHdEHOuBPPqGb)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181882a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"TrQECzUXPEFcVqfbbHdEHOuBPPqGb", {}, {::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz.CmiRuwQTjwacOaWypPgZxuzLtUOo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::*)(int32_t, int32_t)>(&::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::CmiRuwQTjwacOaWypPgZxuzLtUOo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181882980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"CmiRuwQTjwacOaWypPgZxuzLtUOo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*& Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::__cordl_internal_get_PoJYMRJDsBiFIIIbwsXzxsiMkNFf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoJYMRJDsBiFIIIbwsXzxsiMkNFf;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* const& Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::__cordl_internal_get_PoJYMRJDsBiFIIIbwsXzxsiMkNFf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoJYMRJDsBiFIIIbwsXzxsiMkNFf;
}
constexpr void Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::__cordl_internal_set_PoJYMRJDsBiFIIIbwsXzxsiMkNFf(::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoJYMRJDsBiFIIIbwsXzxsiMkNFf = value;
}
inline void Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::aeUQzXOgATFbKkBVlnpbDNIbhDEHA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"aeUQzXOgATFbKkBVlnpbDNIbhDEHA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::CIuSgIXqgeVPmVNqCZRavsyBEiCHA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"CIuSgIXqgeVPmVNqCZRavsyBEiCHA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::vUBdwGhUMkNRVdthnGWZYosfIjQRA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"vUBdwGhUMkNRVdthnGWZYosfIjQRA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::ocyUZTtTqxveUcdubZEzGYRygDVs(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"ocyUZTtTqxveUcdubZEzGYRygDVs", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::TrQECzUXPEFcVqfbbHdEHOuBPPqGb(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"TrQECzUXPEFcVqfbbHdEHOuBPPqGb", {}, {::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::CmiRuwQTjwacOaWypPgZxuzLtUOo(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>(),
                        {"CmiRuwQTjwacOaWypPgZxuzLtUOo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz()   {
}
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::Rewired::Platforms::Custom::CustomInputSource*, ::Rewired::Config::UpdateLoopSetting, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*, ::System::Func_1<int32_t>*)>(&::Rewired::InputManagers::CustomInputManager::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18187dbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource*>(), ::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*>(), ::i2c::type_of<::System::Func_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.get_deviceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::get_deviceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.get_primaryInputManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlatformInputManager* (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::get_primaryInputManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.get_inputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IInputSource* (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::get_inputSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.get_inputSourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::get_inputSourceType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::Initialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18187cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::Rewired::UpdateLoopType)>(&::Rewired::InputManagers::CustomInputManager::Update)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187d4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.GetInputDataUpdateDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::GetInputDataUpdateDelegate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.UpdateControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(int32_t, ::Rewired::ControllerDataUpdater*)>(&::Rewired::InputManagers::CustomInputManager::UpdateControllerData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18187d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.SystemDeviceConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::SystemDeviceConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187d270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.SystemDeviceDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::SystemDeviceDisconnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187d290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.SetUnityJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(int32_t, int32_t)>(&::Rewired::InputManagers::CustomInputManager::SetUnityJoystickId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.GetUnifiedMouseSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedMouseSource* (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::GetUnifiedMouseSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.GetUnifiedKeyboardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource* (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::GetUnifiedKeyboardSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                    {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.YRDfekdWLJcLwjJegLyRhnckoBXAb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>)>(&::Rewired::InputManagers::CustomInputManager::YRDfekdWLJcLwjJegLyRhnckoBXAb)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18187d820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"YRDfekdWLJcLwjJegLyRhnckoBXAb", {}, {::i2c::type_of<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.JCgmrJBDckzZdHUuLrGBSHYSmmPc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::JCgmrJBDckzZdHUuLrGBSHYSmmPc)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18187ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"JCgmrJBDckzZdHUuLrGBSHYSmmPc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.qjWftTALBLVAHnRJDJrgVCODYhoE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(int32_t, int32_t, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*)>(&::Rewired::InputManagers::CustomInputManager::qjWftTALBLVAHnRJDJrgVCODYhoE)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18187e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"qjWftTALBLVAHnRJDJrgVCODYhoE", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.hwZdMciVfxumQLjLeOOTRtvGgAKj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, int32_t, int32_t)>(&::Rewired::InputManagers::CustomInputManager::hwZdMciVfxumQLjLeOOTRtvGgAKj)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"hwZdMciVfxumQLjLeOOTRtvGgAKj", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.bbVUgTkzOuBpyyYalSzRqqjOFBNH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager::*)(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, int32_t)>(&::Rewired::InputManagers::CustomInputManager::bbVUgTkzOuBpyyYalSzRqqjOFBNH)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"bbVUgTkzOuBpyyYalSzRqqjOFBNH", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.cHZMZuoAehSZajYyLAriLaUKAkzCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputManagers::CustomInputManager::*)(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*)>(&::Rewired::InputManagers::CustomInputManager::cHZMZuoAehSZajYyLAriLaUKAkzCA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187de10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"cHZMZuoAehSZajYyLAriLaUKAkzCA", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.fTvDkwCHkyEohYspuntjeUbxQkgD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager::*)(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, int32_t)>(&::Rewired::InputManagers::CustomInputManager::fTvDkwCHkyEohYspuntjeUbxQkgD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"fTvDkwCHkyEohYspuntjeUbxQkgD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.IPDLSklCojpZNDzitzMzJBzLefox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, int32_t, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA)>(&::Rewired::InputManagers::CustomInputManager::IPDLSklCojpZNDzitzMzJBzLefox)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"IPDLSklCojpZNDzitzMzJBzLefox", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.doWgTzgDUgFilKWUcXhrnsDeZtve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA)>(&::Rewired::InputManagers::CustomInputManager::doWgTzgDUgFilKWUcXhrnsDeZtve)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18187de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"doWgTzgDUgFilKWUcXhrnsDeZtve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.kmneZGFzygBnxVFFSterDsccynuDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)()>(&::Rewired::InputManagers::CustomInputManager::kmneZGFzygBnxVFFSterDsccynuDA)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18187e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"kmneZGFzygBnxVFFSterDsccynuDA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.XXwKeJsUVSSWnKexTWrbsYRjbFFd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManagers::CustomInputManager::*)(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>)>(&::Rewired::InputManagers::CustomInputManager::XXwKeJsUVSSWnKexTWrbsYRjbFFd)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18187d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"XXwKeJsUVSSWnKexTWrbsYRjbFFd", {}, {::i2c::type_of<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.TCmgCFJnKtBsABinBzXJOSzblYxcb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*, bool)>(&::Rewired::InputManagers::CustomInputManager::TCmgCFJnKtBsABinBzXJOSzblYxcb)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18187d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"TCmgCFJnKtBsABinBzXJOSzblYxcb", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.iASZzQRDaVvDqcXjqCOcEPWTDDlN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, bool)>(&::Rewired::InputManagers::CustomInputManager::iASZzQRDaVvDqcXjqCOcEPWTDDlN)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18187e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"iASZzQRDaVvDqcXjqCOcEPWTDDlN", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::CustomInputManager.MPWeZWfImWQHAziiWibpWEZBEmGaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::CustomInputManager::*)(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, bool)>(&::Rewired::InputManagers::CustomInputManager::MPWeZWfImWQHAziiWibpWEZBEmGaA)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18187d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"MPWeZWfImWQHAziiWibpWEZBEmGaA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_tWqBHhKeTHJlbkEJiBglhlVBjoxcA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tWqBHhKeTHJlbkEJiBglhlVBjoxcA;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_tWqBHhKeTHJlbkEJiBglhlVBjoxcA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tWqBHhKeTHJlbkEJiBglhlVBjoxcA;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_tWqBHhKeTHJlbkEJiBglhlVBjoxcA(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tWqBHhKeTHJlbkEJiBglhlVBjoxcA = value;
}
constexpr int32_t& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_ctYUkGBgxkURyrJxrBwyIWPZgSEy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctYUkGBgxkURyrJxrBwyIWPZgSEy;
}
constexpr int32_t const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_ctYUkGBgxkURyrJxrBwyIWPZgSEy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctYUkGBgxkURyrJxrBwyIWPZgSEy;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_ctYUkGBgxkURyrJxrBwyIWPZgSEy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctYUkGBgxkURyrJxrBwyIWPZgSEy = value;
}
constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TtHCMIBpWcQNLTAsUuFPLBTjqZOG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtHCMIBpWcQNLTAsUuFPLBTjqZOG;
}
constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TtHCMIBpWcQNLTAsUuFPLBTjqZOG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtHCMIBpWcQNLTAsUuFPLBTjqZOG;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_TtHCMIBpWcQNLTAsUuFPLBTjqZOG(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TtHCMIBpWcQNLTAsUuFPLBTjqZOG = value;
}
constexpr ::Rewired::UpdateLoopType& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_zgGFBQxykXMSCVplMijLDuBiOaugA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zgGFBQxykXMSCVplMijLDuBiOaugA;
}
constexpr ::Rewired::UpdateLoopType const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_zgGFBQxykXMSCVplMijLDuBiOaugA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zgGFBQxykXMSCVplMijLDuBiOaugA;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_zgGFBQxykXMSCVplMijLDuBiOaugA(::Rewired::UpdateLoopType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zgGFBQxykXMSCVplMijLDuBiOaugA = value;
}
constexpr ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_PiXMDXYkwXxvAEWTNqddUAjVTMjQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PiXMDXYkwXxvAEWTNqddUAjVTMjQ;
}
constexpr ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_PiXMDXYkwXxvAEWTNqddUAjVTMjQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PiXMDXYkwXxvAEWTNqddUAjVTMjQ;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_PiXMDXYkwXxvAEWTNqddUAjVTMjQ(::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PiXMDXYkwXxvAEWTNqddUAjVTMjQ = value;
}
constexpr ::Rewired::PlatformInputManager*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_pXjwGijAVPQjBvecsIxxahikakpc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pXjwGijAVPQjBvecsIxxahikakpc;
}
constexpr ::Rewired::PlatformInputManager* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_pXjwGijAVPQjBvecsIxxahikakpc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pXjwGijAVPQjBvecsIxxahikakpc;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_pXjwGijAVPQjBvecsIxxahikakpc(::Rewired::PlatformInputManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pXjwGijAVPQjBvecsIxxahikakpc = value;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_xsRWpxqXGqvLFCFMxVZdxBteQZSt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xsRWpxqXGqvLFCFMxVZdxBteQZSt;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_xsRWpxqXGqvLFCFMxVZdxBteQZSt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xsRWpxqXGqvLFCFMxVZdxBteQZSt;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_xsRWpxqXGqvLFCFMxVZdxBteQZSt(::Rewired::Platforms::Custom::CustomInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xsRWpxqXGqvLFCFMxVZdxBteQZSt = value;
}
constexpr bool& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_dmKmymHpLFWgvkoICeFXdlbWnrWu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dmKmymHpLFWgvkoICeFXdlbWnrWu;
}
constexpr bool const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_dmKmymHpLFWgvkoICeFXdlbWnrWu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dmKmymHpLFWgvkoICeFXdlbWnrWu;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_dmKmymHpLFWgvkoICeFXdlbWnrWu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dmKmymHpLFWgvkoICeFXdlbWnrWu = value;
}
constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TTScZAHQaOyJtwtCnmVUawfJxkmVA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TTScZAHQaOyJtwtCnmVUawfJxkmVA;
}
constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TTScZAHQaOyJtwtCnmVUawfJxkmVA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TTScZAHQaOyJtwtCnmVUawfJxkmVA;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_TTScZAHQaOyJtwtCnmVUawfJxkmVA(::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TTScZAHQaOyJtwtCnmVUawfJxkmVA = value;
}
constexpr ::System::Func_1<int32_t>*& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TchLOeRkUbLymTjfvnNFAidFOvrE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TchLOeRkUbLymTjfvnNFAidFOvrE;
}
constexpr ::System::Func_1<int32_t>* const& Rewired::InputManagers::CustomInputManager::__cordl_internal_get_TchLOeRkUbLymTjfvnNFAidFOvrE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TchLOeRkUbLymTjfvnNFAidFOvrE;
}
constexpr void Rewired::InputManagers::CustomInputManager::__cordl_internal_set_TchLOeRkUbLymTjfvnNFAidFOvrE(::System::Func_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TchLOeRkUbLymTjfvnNFAidFOvrE = value;
}
inline void Rewired::InputManagers::CustomInputManager::_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace_param_1, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_1<int32_t>*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource*>(), ::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*>(), ::i2c::type_of<::System::Func_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::InputManagers::CustomInputManager::get_deviceCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::PlatformInputManager* Rewired::InputManagers::CustomInputManager::get_primaryInputManager()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlatformInputManager*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IInputSource* Rewired::InputManagers::CustomInputManager::get_inputSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IInputSource*>(this, ___internal_method);
}
inline ::Rewired::InputSource Rewired::InputManagers::CustomInputManager::get_inputSourceType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::InputManagers::CustomInputManager::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* Rewired::InputManagers::CustomInputManager::GetInputDataUpdateDelegate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::UpdateControllerData(int32_t  inputManagerId, ::Rewired::ControllerDataUpdater*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputManagerId, data);
}
inline void Rewired::InputManagers::CustomInputManager::SystemDeviceConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::SystemDeviceDisconnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::SetUnityJoystickId(int32_t  joystickId, int32_t  unityJoystickIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystickId, unityJoystickIndex);
}
inline ::Rewired::Interfaces::IUnifiedMouseSource* Rewired::InputManagers::CustomInputManager::GetUnifiedMouseSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedMouseSource*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired::InputManagers::CustomInputManager::GetUnifiedKeyboardSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedKeyboardSource*>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::YRDfekdWLJcLwjJegLyRhnckoBXAb(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"YRDfekdWLJcLwjJegLyRhnckoBXAb", {}, {::i2c::type_of<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager::JCgmrJBDckzZdHUuLrGBSHYSmmPc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"JCgmrJBDckzZdHUuLrGBSHYSmmPc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManagers::CustomInputManager::qjWftTALBLVAHnRJDJrgVCODYhoE(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"qjWftTALBLVAHnRJDJrgVCODYhoE", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::InputManagers::CustomInputManager::hwZdMciVfxumQLjLeOOTRtvGgAKj(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"hwZdMciVfxumQLjLeOOTRtvGgAKj", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::InputManagers::CustomInputManager::bbVUgTkzOuBpyyYalSzRqqjOFBNH(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"bbVUgTkzOuBpyyYalSzRqqjOFBNH", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::InputManagers::CustomInputManager::cHZMZuoAehSZajYyLAriLaUKAkzCA(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"cHZMZuoAehSZajYyLAriLaUKAkzCA", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::InputManagers::CustomInputManager::fTvDkwCHkyEohYspuntjeUbxQkgD(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"fTvDkwCHkyEohYspuntjeUbxQkgD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputManagers::CustomInputManager::IPDLSklCojpZNDzitzMzJBzLefox(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"IPDLSklCojpZNDzitzMzJBzLefox", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::InputManagers::CustomInputManager::doWgTzgDUgFilKWUcXhrnsDeZtve(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"doWgTzgDUgFilKWUcXhrnsDeZtve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputManagers::CustomInputManager::kmneZGFzygBnxVFFSterDsccynuDA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"kmneZGFzygBnxVFFSterDsccynuDA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputManagers::CustomInputManager::XXwKeJsUVSSWnKexTWrbsYRjbFFd(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"XXwKeJsUVSSWnKexTWrbsYRjbFFd", {}, {::i2c::type_of<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManagers::CustomInputManager::TCmgCFJnKtBsABinBzXJOSzblYxcb(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"TCmgCFJnKtBsABinBzXJOSzblYxcb", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputManagers::CustomInputManager::iASZzQRDaVvDqcXjqCOcEPWTDDlN(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"iASZzQRDaVvDqcXjqCOcEPWTDDlN", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputManagers::CustomInputManager::MPWeZWfImWQHAziiWibpWEZBEmGaA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::CustomInputManager*>(),
                        {"MPWeZWfImWQHAziiWibpWEZBEmGaA", {}, {::i2c::type_of<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputManagers::CustomInputManager* Rewired::InputManagers::CustomInputManager::New_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace_param_1, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_1<int32_t>*  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::CustomInputManager*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::CustomInputManager::CustomInputManager()   {
}
