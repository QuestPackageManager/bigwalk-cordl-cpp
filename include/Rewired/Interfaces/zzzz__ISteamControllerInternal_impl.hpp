#pragma once
// IWYU pragma private; include "Rewired/Interfaces/ISteamControllerInternal.hpp"
#include "Rewired/Interfaces/zzzz__ISteamControllerInternal_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerActionOrigin_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerPadType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.get_MaxActionSourceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::ISteamControllerInternal::*)()>(&::Rewired::Interfaces::ISteamControllerInternal::get_MaxActionSourceCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::ISteamControllerInternal::*)()>(&::Rewired::Interfaces::ISteamControllerInternal::get_IsConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetActionSetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetActionSetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetActionSetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetActionSetHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.SetActiveActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::SetActiveActionSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.SetActiveActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::SetActiveActionSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetActiveActionSetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Interfaces::ISteamControllerInternal::*)()>(&::Rewired::Interfaces::ISteamControllerInternal::GetActiveActionSetHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetActiveActionSetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::ISteamControllerInternal::*)()>(&::Rewired::Interfaces::ISteamControllerInternal::GetActiveActionSetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.ShowBindingPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::ISteamControllerInternal::*)()>(&::Rewired::Interfaces::ISteamControllerInternal::ShowBindingPanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.SetHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::ISteamControllerInternal::*)(::Rewired::ControllerExtensions::SteamControllerPadType, float_t)>(&::Rewired::Interfaces::ISteamControllerInternal::SetHapticPulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.SetHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::ISteamControllerInternal::*)(::Rewired::ControllerExtensions::SteamControllerPadType, uint16_t)>(&::Rewired::Interfaces::ISteamControllerInternal::SetHapticPulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>, ::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionOrigins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetDigitalActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t, uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionOrigins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::Interfaces::ISteamControllerInternal::*)(::by_ref<::StringW>, ::by_ref<::StringW>)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionOrigins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::ISteamControllerInternal.GetAnalogActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* (::Rewired::Interfaces::ISteamControllerInternal::*)(uint64_t, uint64_t)>(&::Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionOrigins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(),
                    {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 22}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::Interfaces::ISteamControllerInternal::get_MaxActionSourceCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Interfaces::ISteamControllerInternal::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::Interfaces::ISteamControllerInternal::GetActionSetName(uint64_t  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline ::StringW Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionName(uint64_t  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline ::StringW Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionName(uint64_t  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, handle);
}
inline uint64_t Rewired::Interfaces::ISteamControllerInternal::GetActionSetHandle(::by_ref<::StringW>  actionSetName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionSetName);
}
inline uint64_t Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionHandle(::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionName);
}
inline uint64_t Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionHandle(::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, actionName);
}
inline bool Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionValue(uint64_t  actionHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionHandle);
}
inline bool Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionValue(::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionName);
}
inline ::UnityEngine::Vector2 Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionValue(uint64_t  actionHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, actionHandle);
}
inline ::UnityEngine::Vector2 Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionValue(::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, actionName);
}
inline bool Rewired::Interfaces::ISteamControllerInternal::SetActiveActionSet(uint64_t  actionSetHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionSetHandle);
}
inline bool Rewired::Interfaces::ISteamControllerInternal::SetActiveActionSet(::by_ref<::StringW>  actionSetName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionSetName);
}
inline uint64_t Rewired::Interfaces::ISteamControllerInternal::GetActiveActionSetHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::StringW Rewired::Interfaces::ISteamControllerInternal::GetActiveActionSetName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Interfaces::ISteamControllerInternal::ShowBindingPanel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Interfaces::ISteamControllerInternal::SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targetPad, float_t  durationSeconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPad, durationSeconds);
}
inline void Rewired::Interfaces::ISteamControllerInternal::SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targetPad, uint16_t  durationMicroSeconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPad, durationMicroSeconds);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionOrigins(::by_ref<::StringW>  actionSetName, ::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetName, actionName);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::Interfaces::ISteamControllerInternal::GetDigitalActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetHandle, actionHandle);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionOrigins(::by_ref<::StringW>  actionSetName, ::by_ref<::StringW>  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetName, actionName);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired::Interfaces::ISteamControllerInternal::GetAnalogActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::ISteamControllerInternal*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>*>(this, ___internal_method, actionSetHandle, actionHandle);
}
