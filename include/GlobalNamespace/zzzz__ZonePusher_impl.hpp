#pragma once
// IWYU pragma private; include "GlobalNamespace/ZonePusher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ZonePusher_def.hpp"
#include "GlobalNamespace/zzzz__PropZone_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__ZonePusher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZonePusher_PushProp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher_PushProp::*)(::GlobalNamespace::Prop*, float_t)>(&::GlobalNamespace::ZonePusher_PushProp::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180388980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher_PushProp>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ZonePusher_PushProp::_ctor(::GlobalNamespace::Prop*  prop, float_t  entryTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher_PushProp>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop, entryTime);
}
// Ctor Parameters [CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: Some("{}") }, CppParam { name: "entryTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ZonePusher_PushProp::ZonePusher_PushProp(::UnityW<::GlobalNamespace::Prop>  prop, float_t  entryTime) noexcept  {
this->prop = prop;
this->entryTime = entryTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZonePusher_PushProp::ZonePusher_PushProp()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)()>(&::GlobalNamespace::ZonePusher::OnEnable)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18038f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)()>(&::GlobalNamespace::ZonePusher::OnDisable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18038f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::ZonePusher::OnEnter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18038fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::ZonePusher::OnExit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18038fdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)()>(&::GlobalNamespace::ZonePusher::FixedUpdate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18038f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)()>(&::GlobalNamespace::ZonePusher::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18038f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZonePusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZonePusher::*)()>(&::GlobalNamespace::ZonePusher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropZone>& GlobalNamespace::ZonePusher::__cordl_internal_get_propZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZone;
}
constexpr ::UnityW<::GlobalNamespace::PropZone> const& GlobalNamespace::ZonePusher::__cordl_internal_get_propZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propZone;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set_propZone(::UnityW<::GlobalNamespace::PropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propZone = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ZonePusher::__cordl_internal_get_magnetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ZonePusher::__cordl_internal_get_magnetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetPoint;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set_magnetPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetPoint = value;
}
constexpr float_t& GlobalNamespace::ZonePusher::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::ZonePusher::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& GlobalNamespace::ZonePusher::__cordl_internal_get_magnetDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetDuration;
}
constexpr float_t const& GlobalNamespace::ZonePusher::__cordl_internal_get_magnetDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetDuration;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set_magnetDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetDuration = value;
}
constexpr bool& GlobalNamespace::ZonePusher::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ZonePusher::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*& GlobalNamespace::ZonePusher::__cordl_internal_get__pushProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushProps;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>* const& GlobalNamespace::ZonePusher::__cordl_internal_get__pushProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushProps;
}
constexpr void GlobalNamespace::ZonePusher::__cordl_internal_set__pushProps(::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushProps = value;
}
inline void GlobalNamespace::ZonePusher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZonePusher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZonePusher::OnEnter(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::ZonePusher::OnExit(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::ZonePusher::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZonePusher::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZonePusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZonePusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZonePusher* GlobalNamespace::ZonePusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZonePusher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZonePusher::ZonePusher()   {
}
