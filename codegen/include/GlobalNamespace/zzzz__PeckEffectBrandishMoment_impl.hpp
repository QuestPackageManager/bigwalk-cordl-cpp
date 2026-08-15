#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectBrandishMoment.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectBrandishMoment_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectBrandishMoment_def.hpp"
// Ctor Parameters [CppParam { name: "fire", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting::PeckEffectBrandishMoment_MomentSetting(bool  fire, int32_t  id) noexcept  {
this->fire = fire;
this->id = id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting::PeckEffectBrandishMoment_MomentSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBrandishMoment.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBrandishMoment::*)()>(&::GlobalNamespace::PeckEffectBrandishMoment::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180448840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBrandishMoment.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBrandishMoment::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectBrandishMoment::Peck)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804488e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBrandishMoment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBrandishMoment::*)()>(&::GlobalNamespace::PeckEffectBrandishMoment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>& GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_get_momentSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentSettings;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting> const& GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_get_momentSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentSettings;
}
constexpr void GlobalNamespace::PeckEffectBrandishMoment::__cordl_internal_set_momentSettings(::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___momentSettings = value;
}
inline void GlobalNamespace::PeckEffectBrandishMoment::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectBrandishMoment::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectBrandishMoment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBrandishMoment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectBrandishMoment* GlobalNamespace::PeckEffectBrandishMoment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectBrandishMoment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectBrandishMoment::PeckEffectBrandishMoment()   {
}
