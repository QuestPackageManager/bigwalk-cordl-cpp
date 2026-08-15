#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerObjectToggle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerObjectToggle_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)()>(&::GlobalNamespace::TriggerObjectToggle::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e1bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TriggerObjectToggle::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803e1df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TriggerObjectToggle::OnTriggerExit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803e1f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)()>(&::GlobalNamespace::TriggerObjectToggle::OnEnter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803e1c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)()>(&::GlobalNamespace::TriggerObjectToggle::OnExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerObjectToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerObjectToggle::*)()>(&::GlobalNamespace::TriggerObjectToggle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get_ToggleObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get_ToggleObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleObjects;
}
constexpr void GlobalNamespace::TriggerObjectToggle::__cordl_internal_set_ToggleObjects(::ArrayW<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggleObjects = value;
}
constexpr bool& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get_Reverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverse;
}
constexpr bool const& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get_Reverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverse;
}
constexpr void GlobalNamespace::TriggerObjectToggle::__cordl_internal_set_Reverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reverse = value;
}
constexpr int32_t& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get__inZoneCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inZoneCounter;
}
constexpr int32_t const& GlobalNamespace::TriggerObjectToggle::__cordl_internal_get__inZoneCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inZoneCounter;
}
constexpr void GlobalNamespace::TriggerObjectToggle::__cordl_internal_set__inZoneCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inZoneCounter = value;
}
inline void GlobalNamespace::TriggerObjectToggle::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerObjectToggle::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TriggerObjectToggle::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TriggerObjectToggle::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerObjectToggle::OnExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {"OnExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerObjectToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerObjectToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TriggerObjectToggle* GlobalNamespace::TriggerObjectToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TriggerObjectToggle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerObjectToggle::TriggerObjectToggle()   {
}
