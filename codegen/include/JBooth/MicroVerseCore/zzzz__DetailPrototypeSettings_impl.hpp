#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailPrototypeSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSettings_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailPrototypeSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailPrototypeSettings::*)()>(&::JBooth::MicroVerseCore::DetailPrototypeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailPrototypeSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable*& JBooth::MicroVerseCore::DetailPrototypeSettings::__cordl_internal_get_prototype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable* const& JBooth::MicroVerseCore::DetailPrototypeSettings::__cordl_internal_get_prototype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr void JBooth::MicroVerseCore::DetailPrototypeSettings::__cordl_internal_set_prototype(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototype = value;
}
inline void JBooth::MicroVerseCore::DetailPrototypeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailPrototypeSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::DetailPrototypeSettings* JBooth::MicroVerseCore::DetailPrototypeSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::DetailPrototypeSettings*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::DetailPrototypeSettings::DetailPrototypeSettings()   {
}
