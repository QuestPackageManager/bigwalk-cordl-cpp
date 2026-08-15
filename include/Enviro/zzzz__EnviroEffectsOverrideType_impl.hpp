#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsOverrideType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroEffectsOverrideType_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEffectsOverrideType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsOverrideType::*)()>(&::Enviro::EnviroEffectsOverrideType::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsOverrideType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroEffectsOverrideType::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr ::StringW& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Enviro::EnviroEffectsOverrideType::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr float_t& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_emission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emission;
}
constexpr float_t const& Enviro::EnviroEffectsOverrideType::__cordl_internal_get_emission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emission;
}
constexpr void Enviro::EnviroEffectsOverrideType::__cordl_internal_set_emission(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emission = value;
}
inline void Enviro::EnviroEffectsOverrideType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsOverrideType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffectsOverrideType* Enviro::EnviroEffectsOverrideType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffectsOverrideType*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectsOverrideType::EnviroEffectsOverrideType()   {
}
