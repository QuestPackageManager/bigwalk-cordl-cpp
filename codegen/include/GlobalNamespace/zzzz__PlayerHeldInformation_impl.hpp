#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeldInformation.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerHeldInformation_HeldType::PlayerHeldInformation_HeldType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeldInformation_HeldType::PlayerHeldInformation_HeldType()   {
}
constexpr ::GlobalNamespace::PlayerHeldInformation_HeldType  GlobalNamespace::PlayerHeldInformation_HeldType::Nothing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerHeldInformation_HeldType  GlobalNamespace::PlayerHeldInformation_HeldType::Prop{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeldInformation.get_hasProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHeldInformation::*)()>(&::GlobalNamespace::PlayerHeldInformation::get_hasProp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180360920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"get_hasProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeldInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeldInformation::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerHeldInformation::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803608b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeldInformation.ThrowInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerHeldInformation (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PlayerHeldInformation::ThrowInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180360820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"ThrowInfo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeldInformation.DropFromSnatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerHeldInformation (*)()>(&::GlobalNamespace::PlayerHeldInformation::DropFromSnatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803607c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"DropFromSnatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeldInformation.GetProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Prop> (::GlobalNamespace::PlayerHeldInformation::*)()>(&::GlobalNamespace::PlayerHeldInformation::GetProp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803607e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"GetProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PlayerHeldInformation::get_hasProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"get_hasProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeldInformation::_ctor(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
inline ::GlobalNamespace::PlayerHeldInformation GlobalNamespace::PlayerHeldInformation::ThrowInfo(float_t  windUp, ::UnityEngine::Vector3  dropPosition, ::UnityEngine::Quaternion  launchRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"ThrowInfo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerHeldInformation>(nullptr, ___internal_method, windUp, dropPosition, launchRotation);
}
inline ::GlobalNamespace::PlayerHeldInformation GlobalNamespace::PlayerHeldInformation::DropFromSnatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"DropFromSnatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerHeldInformation>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Prop> GlobalNamespace::PlayerHeldInformation::GetProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHeldInformation>(),
                        {"GetProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Prop>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "identity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: Some("{}") }, CppParam { name: "heldType", ty: "::GlobalNamespace::PlayerHeldInformation_HeldType", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasDropData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "windUp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dropPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "launchRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isResultOfSnatch", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerHeldInformation::PlayerHeldInformation(::UnityW<::Mirror::NetworkIdentity>  identity, ::GlobalNamespace::PlayerHeldInformation_HeldType  heldType, bool  hasDropData, float_t  windUp, ::UnityEngine::Vector3  dropPosition, ::UnityEngine::Quaternion  launchRotation, int32_t  actionNumber, bool  isResultOfSnatch) noexcept  {
this->identity = identity;
this->heldType = heldType;
this->hasDropData = hasDropData;
this->windUp = windUp;
this->dropPosition = dropPosition;
this->launchRotation = launchRotation;
this->actionNumber = actionNumber;
this->isResultOfSnatch = isResultOfSnatch;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeldInformation::PlayerHeldInformation()   {
}
