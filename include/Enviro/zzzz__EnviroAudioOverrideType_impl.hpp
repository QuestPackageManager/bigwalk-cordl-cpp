#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioOverrideType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroAudioOverrideType_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroAudioOverrideType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioOverrideType::*)()>(&::Enviro::EnviroAudioOverrideType::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioOverrideType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroAudioOverrideType::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr ::StringW& Enviro::EnviroAudioOverrideType::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr float_t& Enviro::EnviroAudioOverrideType::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr bool& Enviro::EnviroAudioOverrideType::__cordl_internal_get_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spring;
}
constexpr bool const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spring;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_spring(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spring = value;
}
constexpr bool& Enviro::EnviroAudioOverrideType::__cordl_internal_get_summer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summer;
}
constexpr bool const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_summer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summer;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_summer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summer = value;
}
constexpr bool& Enviro::EnviroAudioOverrideType::__cordl_internal_get_autumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumn;
}
constexpr bool const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_autumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autumn;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_autumn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autumn = value;
}
constexpr bool& Enviro::EnviroAudioOverrideType::__cordl_internal_get_winter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winter;
}
constexpr bool const& Enviro::EnviroAudioOverrideType::__cordl_internal_get_winter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winter;
}
constexpr void Enviro::EnviroAudioOverrideType::__cordl_internal_set_winter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winter = value;
}
inline void Enviro::EnviroAudioOverrideType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioOverrideType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAudioOverrideType* Enviro::EnviroAudioOverrideType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAudioOverrideType*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAudioOverrideType::EnviroAudioOverrideType()   {
}
