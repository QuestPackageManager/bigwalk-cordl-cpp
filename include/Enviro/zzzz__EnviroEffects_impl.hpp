#pragma once
// IWYU pragma private; include "Enviro/EnviroEffects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroEffects_def.hpp"
#include "Enviro/zzzz__EnviroEffectTypes_def.hpp"
#include "Enviro/zzzz__EnviroEffects_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType::EnviroEffects_EnviroEffectSystemType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType::EnviroEffects_EnviroEffectSystemType()   {
}
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType  Enviro::EnviroEffects_EnviroEffectSystemType::ParticleSystem{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType  Enviro::EnviroEffects_EnviroEffectSystemType::VFXGraph{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType  Enviro::EnviroEffects_EnviroEffectSystemType::Both{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Enviro::EnviroEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffects::*)()>(&::Enviro::EnviroEffects::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType& Enviro::EnviroEffects::__cordl_internal_get_enviroEffectSystemType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enviroEffectSystemType;
}
constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType const& Enviro::EnviroEffects::__cordl_internal_get_enviroEffectSystemType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enviroEffectSystemType;
}
constexpr void Enviro::EnviroEffects::__cordl_internal_set_enviroEffectSystemType(::Enviro::EnviroEffects_EnviroEffectSystemType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enviroEffectSystemType = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*& Enviro::EnviroEffects::__cordl_internal_get_effectTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTypes;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>* const& Enviro::EnviroEffects::__cordl_internal_get_effectTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTypes;
}
constexpr void Enviro::EnviroEffects::__cordl_internal_set_effectTypes(::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectTypes = value;
}
constexpr float_t& Enviro::EnviroEffects::__cordl_internal_get_particeEmissionRateModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particeEmissionRateModifier;
}
constexpr float_t const& Enviro::EnviroEffects::__cordl_internal_get_particeEmissionRateModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particeEmissionRateModifier;
}
constexpr void Enviro::EnviroEffects::__cordl_internal_set_particeEmissionRateModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particeEmissionRateModifier = value;
}
inline void Enviro::EnviroEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffects* Enviro::EnviroEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffects*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffects::EnviroEffects()   {
}
