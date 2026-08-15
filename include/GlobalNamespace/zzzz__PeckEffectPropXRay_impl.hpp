#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropXRay.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropXRay_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PropZone_def.hpp"
#include "GlobalNamespace/zzzz__PropZoner_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)()>(&::GlobalNamespace::PeckEffectPropXRay::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18044c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)()>(&::GlobalNamespace::PeckEffectPropXRay::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.OnPropZonerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)(::GlobalNamespace::PropZone*, ::GlobalNamespace::PropZoner_ZoneChangeType)>(&::GlobalNamespace::PeckEffectPropXRay::OnPropZonerChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18044c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"OnPropZonerChange", {}, {::i2c::type_of<::GlobalNamespace::PropZone*>(), ::i2c::type_of<::GlobalNamespace::PropZoner_ZoneChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPropXRay::Peck)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18044cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.SetEffectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)(bool)>(&::GlobalNamespace::PeckEffectPropXRay::SetEffectActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"SetEffectActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.RefreshAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PeckEffectPropXRay::RefreshAll)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18044cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"RefreshAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay.RefreshXRayEffectOnProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PeckEffectPropXRay::RefreshXRayEffectOnProp)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18044ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"RefreshXRayEffectOnProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropXRay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropXRay::*)()>(&::GlobalNamespace::PeckEffectPropXRay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_deadZoneProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZoneProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_deadZoneProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZoneProp;
}
constexpr void GlobalNamespace::PeckEffectPropXRay::__cordl_internal_set_deadZoneProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadZoneProp = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectPropXRay::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_gogglesPropReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gogglesPropReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_gogglesPropReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gogglesPropReference;
}
constexpr void GlobalNamespace::PeckEffectPropXRay::__cordl_internal_set_gogglesPropReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gogglesPropReference = value;
}
constexpr bool& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectPropXRay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_isInDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInDeadZone;
}
constexpr bool const& GlobalNamespace::PeckEffectPropXRay::__cordl_internal_get_isInDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInDeadZone;
}
constexpr void GlobalNamespace::PeckEffectPropXRay::__cordl_internal_set_isInDeadZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInDeadZone = value;
}
inline void GlobalNamespace::PeckEffectPropXRay::setStaticF_activeEffect(::UnityW<::GlobalNamespace::PeckEffectPropXRay>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PeckEffectPropXRay>, "activeEffect", ::GlobalNamespace::PeckEffectPropXRay*>(std::forward<::UnityW<::GlobalNamespace::PeckEffectPropXRay>>(value));
}
inline ::UnityW<::GlobalNamespace::PeckEffectPropXRay> GlobalNamespace::PeckEffectPropXRay::getStaticF_activeEffect()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PeckEffectPropXRay>, "activeEffect", ::GlobalNamespace::PeckEffectPropXRay*>();
}
inline void GlobalNamespace::PeckEffectPropXRay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropXRay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropXRay::OnPropZonerChange(::GlobalNamespace::PropZone*  propZone, ::GlobalNamespace::PropZoner_ZoneChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"OnPropZonerChange", {}, {::i2c::type_of<::GlobalNamespace::PropZone*>(), ::i2c::type_of<::GlobalNamespace::PropZoner_ZoneChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propZone, changeType);
}
inline void GlobalNamespace::PeckEffectPropXRay::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPropXRay::SetEffectActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"SetEffectActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PeckEffectPropXRay::RefreshAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"RefreshAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropXRay::RefreshXRayEffectOnProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {"RefreshXRayEffectOnProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::PeckEffectPropXRay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropXRay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPropXRay* GlobalNamespace::PeckEffectPropXRay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPropXRay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropXRay::PeckEffectPropXRay()   {
}
