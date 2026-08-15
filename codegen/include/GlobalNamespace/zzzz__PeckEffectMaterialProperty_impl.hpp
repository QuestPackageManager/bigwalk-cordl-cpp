#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectMaterialProperty.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectMaterialProperty_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectMaterialProperty_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName::PeckEffectMaterialProperty_PresetName(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName::PeckEffectMaterialProperty_PresetName()   {
}
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  GlobalNamespace::PeckEffectMaterialProperty_PresetName::Custom{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  GlobalNamespace::PeckEffectMaterialProperty_PresetName::EmissiveMask0{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  GlobalNamespace::PeckEffectMaterialProperty_PresetName::EmissiveMask1{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  GlobalNamespace::PeckEffectMaterialProperty_PresetName::EmissiveMask2{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  GlobalNamespace::PeckEffectMaterialProperty_PresetName::EmissiveMask3{static_cast<int32_t>(0xd)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMaterialProperty.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMaterialProperty::*)()>(&::GlobalNamespace::PeckEffectMaterialProperty::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMaterialProperty.SetEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMaterialProperty::*)(int32_t)>(&::GlobalNamespace::PeckEffectMaterialProperty::SetEffect)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18044a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"SetEffect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMaterialProperty.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMaterialProperty::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectMaterialProperty::Peck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18044a400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMaterialProperty.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMaterialProperty::*)()>(&::GlobalNamespace::PeckEffectMaterialProperty::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18044a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMaterialProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMaterialProperty::*)()>(&::GlobalNamespace::PeckEffectMaterialProperty::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr bool& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_isGlobal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr bool const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_isGlobal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_isGlobal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGlobal = value;
}
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_presetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetName;
}
constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_presetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetName;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_presetName(::GlobalNamespace::PeckEffectMaterialProperty_PresetName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetName = value;
}
constexpr ::StringW& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_customName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customName;
}
constexpr ::StringW const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_customName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customName;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_customName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customName = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_floatsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatsPerState;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_floatsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatsPerState;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_floatsPerState(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatsPerState = value;
}
constexpr bool& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectMaterialProperty::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectMaterialProperty::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectMaterialProperty::SetEffect(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"SetEffect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::PeckEffectMaterialProperty::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectMaterialProperty::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectMaterialProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMaterialProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectMaterialProperty* GlobalNamespace::PeckEffectMaterialProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectMaterialProperty*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectMaterialProperty::PeckEffectMaterialProperty()   {
}
