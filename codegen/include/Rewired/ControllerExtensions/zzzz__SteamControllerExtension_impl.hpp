#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/SteamControllerExtension.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerActionOrigin_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerPadType_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/Interfaces/zzzz__ISteamControllerInternal_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::*)(::Rewired::Interfaces::ISteamControllerInternal*)>(&::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::ISteamControllerInternal*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Interfaces::ISteamControllerInternal*& Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::__cordl_internal_get_GZHRjgeRCrmbGZiqyJrTgWkPCbbW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GZHRjgeRCrmbGZiqyJrTgWkPCbbW;
}
constexpr ::Rewired::Interfaces::ISteamControllerInternal* const& Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::__cordl_internal_get_GZHRjgeRCrmbGZiqyJrTgWkPCbbW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GZHRjgeRCrmbGZiqyJrTgWkPCbbW;
}
constexpr void Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::__cordl_internal_set_GZHRjgeRCrmbGZiqyJrTgWkPCbbW(::Rewired::Interfaces::ISteamControllerInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GZHRjgeRCrmbGZiqyJrTgWkPCbbW = value;
}
inline void Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::ISteamControllerInternal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo* Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::New_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr  Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::operator ::Rewired::Interfaces::IControllerExtensionSource*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::i___Rewired__Interfaces__IControllerExtensionSource() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.uPljBxBFBsrMqNrlThEcljZrEfvjA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::uPljBxBFBsrMqNrlThEcljZrEfvjA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181884250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"uPljBxBFBsrMqNrlThEcljZrEfvjA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.get_internalController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::ISteamControllerInternal* (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::get_internalController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e0230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"get_internalController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::Interfaces::ISteamControllerInternal*)>(&::Rewired::ControllerExtensions::SteamControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e01d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::ISteamControllerInternal*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::ControllerExtensions::SteamControllerExtension*)>(&::Rewired::ControllerExtensions::SteamControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetActionSetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818def30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActionSetHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818df260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818df7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetActionSetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818df030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActionSetName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818df360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818df8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818df5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818df6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818dfbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818dfb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.SetActiveActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818dfdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetActiveActionSet", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.SetActiveActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818dfcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetActiveActionSet", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetActiveActionSetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818df0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActiveActionSetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetActiveActionSetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818df1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActiveActionSetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.ShowBindingPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::ShowBindingPanel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e0090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"ShowBindingPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.SetHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::ControllerExtensions::SteamControllerPadType, float_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818dfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetHapticPulse", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerPadType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.SetHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::ControllerExtensions::SteamControllerPadType, uint16_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818dff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetHapticPulse", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerPadType>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW, ::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818df970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetDigitalActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t, uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818dfa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::StringW, ::StringW)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818df400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.GetAnalogActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::ControllerExtensions::SteamControllerExtension::*)(uint64_t, uint64_t)>(&::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818df510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::SteamControllerExtension::UpdateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::SteamControllerExtension::SourceUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e0110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818deef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::SteamControllerExtension.NbSCVHGrbacKxzLMHnlVqypRTXVJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::SteamControllerExtension::*)()>(&::Rewired::ControllerExtensions::SteamControllerExtension::NbSCVHGrbacKxzLMHnlVqypRTXVJ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"NbSCVHGrbacKxzLMHnlVqypRTXVJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*& Rewired::ControllerExtensions::SteamControllerExtension::__cordl_internal_get_miOCSaPNFkUvzPfgwcoLlVgEudlA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miOCSaPNFkUvzPfgwcoLlVgEudlA;
}
constexpr ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo* const& Rewired::ControllerExtensions::SteamControllerExtension::__cordl_internal_get_miOCSaPNFkUvzPfgwcoLlVgEudlA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miOCSaPNFkUvzPfgwcoLlVgEudlA;
}
constexpr void Rewired::ControllerExtensions::SteamControllerExtension::__cordl_internal_set_miOCSaPNFkUvzPfgwcoLlVgEudlA(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___miOCSaPNFkUvzPfgwcoLlVgEudlA = value;
}
inline ::Rewired::Joystick* Rewired::ControllerExtensions::SteamControllerExtension::uPljBxBFBsrMqNrlThEcljZrEfvjA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"uPljBxBFBsrMqNrlThEcljZrEfvjA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::ISteamControllerInternal* Rewired::ControllerExtensions::SteamControllerExtension::get_internalController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"get_internalController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::ISteamControllerInternal*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::ISteamControllerInternal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::_ctor(::Rewired::ControllerExtensions::SteamControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline uint64_t Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetHandle(::StringW  actionSetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActionSetHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionSetName);
}
inline uint64_t Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionHandle(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionName);
}
inline uint64_t Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionHandle(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionName);
}
inline ::StringW Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetName(uint64_t  actionSetHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActionSetName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actionSetHandle);
}
inline ::StringW Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionName(uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actionHandle);
}
inline ::StringW Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionName(uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actionHandle);
}
inline ::UnityEngine::Vector2 Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, actionName);
}
inline ::UnityEngine::Vector2 Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue(uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, actionHandle);
}
inline bool Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionName);
}
inline bool Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue(uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionHandle);
}
inline bool Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet(uint64_t  actionSetHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetActiveActionSet", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionSetHandle);
}
inline bool Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet(::StringW  actionSetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetActiveActionSet", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionSetName);
}
inline uint64_t Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActiveActionSetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetActiveActionSetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::ShowBindingPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"ShowBindingPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targePad, float_t  durationSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetHapticPulse", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerPadType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targePad, durationSeconds);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targePad, uint16_t  durationMicroSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"SetHapticPulse", {}, {::i2c::type_of<::Rewired::ControllerExtensions::SteamControllerPadType>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targePad, durationMicroSeconds);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins(::StringW  actionSetName, ::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetName, actionName);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetHandle, actionHandle);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins(::StringW  actionSetName, ::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetName, actionName);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetHandle, actionHandle);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::SteamControllerExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::SteamControllerExtension::NbSCVHGrbacKxzLMHnlVqypRTXVJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::SteamControllerExtension*>(),
                        {"NbSCVHGrbacKxzLMHnlVqypRTXVJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::SteamControllerExtension* Rewired::ControllerExtensions::SteamControllerExtension::New_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::SteamControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::SteamControllerExtension* Rewired::ControllerExtensions::SteamControllerExtension::New_ctor(::Rewired::ControllerExtensions::SteamControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::SteamControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::SteamControllerExtension::SteamControllerExtension()   {
}
