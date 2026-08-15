#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectRigidbodyControls.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectRigidbodyControls_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectRigidbodyControls_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting.ApplyToRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting::*)(::UnityEngine::Rigidbody*)>(&::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting::ApplyToRigidbody)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180456150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>(),
                        {"ApplyToRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting::ApplyToRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>(),
                        {"ApplyToRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rigidbody);
}
// Ctor Parameters [CppParam { name: "drag", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "angularDrag", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting::PeckEffectRigidbodyControls_RigidbodySetting(float_t  drag, float_t  angularDrag) noexcept  {
this->drag = drag;
this->angularDrag = angularDrag;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting::PeckEffectRigidbodyControls_RigidbodySetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectRigidbodyControls.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectRigidbodyControls::*)()>(&::GlobalNamespace::PeckEffectRigidbodyControls::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectRigidbodyControls.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectRigidbodyControls::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectRigidbodyControls::Peck)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18044d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectRigidbodyControls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectRigidbodyControls::*)()>(&::GlobalNamespace::PeckEffectRigidbodyControls::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_targetRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_targetRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr void GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRigidbody = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_rigidbodySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodySettings;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting> const& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_rigidbodySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodySettings;
}
constexpr void GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_set_rigidbodySettings(::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbodySettings = value;
}
constexpr bool& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectRigidbodyControls::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectRigidbodyControls::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectRigidbodyControls::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectRigidbodyControls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectRigidbodyControls*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectRigidbodyControls* GlobalNamespace::PeckEffectRigidbodyControls::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectRigidbodyControls*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectRigidbodyControls::PeckEffectRigidbodyControls()   {
}
