#pragma once
// IWYU pragma private; include "GlobalNamespace/PropZone.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropZone_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PropZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x180396160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PropZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803964b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropZone.IsRelevant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropZone::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropZone::IsRelevant)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180396120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"IsRelevant", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropZone.GetRelevantProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Prop> (::GlobalNamespace::PropZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PropZone::GetRelevantProp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180396090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"GetRelevantProp", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropZone::*)()>(&::GlobalNamespace::PropZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PropGroup>& GlobalNamespace::PropZone::__cordl_internal_get_specificGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificGroups;
}
constexpr ::ArrayW<::GlobalNamespace::PropGroup> const& GlobalNamespace::PropZone::__cordl_internal_get_specificGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificGroups;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_specificGroups(::ArrayW<::GlobalNamespace::PropGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specificGroups = value;
}
constexpr bool& GlobalNamespace::PropZone::__cordl_internal_get_isRadioDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRadioDeadZone;
}
constexpr bool const& GlobalNamespace::PropZone::__cordl_internal_get_isRadioDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRadioDeadZone;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_isRadioDeadZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRadioDeadZone = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PropZone::__cordl_internal_get_onEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PropZone::__cordl_internal_get_onEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_onEnter(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnter = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropZone::__cordl_internal_get_onEnterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropZone::__cordl_internal_get_onEnterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSound;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_onEnterSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterSound = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PropZone::__cordl_internal_get_onPropEnterZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPropEnterZone;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PropZone::__cordl_internal_get_onPropEnterZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPropEnterZone;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_onPropEnterZone(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPropEnterZone = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PropZone::__cordl_internal_get_onPropExitZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPropExitZone;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PropZone::__cordl_internal_get_onPropExitZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPropExitZone;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_onPropExitZone(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPropExitZone = value;
}
constexpr bool& GlobalNamespace::PropZone::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PropZone::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& GlobalNamespace::PropZone::__cordl_internal_get_contacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contacts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& GlobalNamespace::PropZone::__cordl_internal_get_contacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contacts;
}
constexpr void GlobalNamespace::PropZone::__cordl_internal_set_contacts(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contacts = value;
}
inline void GlobalNamespace::PropZone::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PropZone::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline bool GlobalNamespace::PropZone::IsRelevant(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"IsRelevant", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline ::UnityW<::GlobalNamespace::Prop> GlobalNamespace::PropZone::GetRelevantProp(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {"GetRelevantProp", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Prop>>(this, ___internal_method, collider);
}
inline void GlobalNamespace::PropZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropZone* GlobalNamespace::PropZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropZone::PropZone()   {
}
