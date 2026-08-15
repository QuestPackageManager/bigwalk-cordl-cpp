#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationEntry_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationEntry.GetTranslatedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizationEntry::*)(::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::LocalizationEntry::GetTranslatedString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180402580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationEntry*>(),
                        {"GetTranslatedString", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationEntry::*)()>(&::GlobalNamespace::LocalizationEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_english()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___english;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_english() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___english;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_english(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___english = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_french()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___french;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_french() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___french;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_french(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___french = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_german()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___german;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_german() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___german;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_german(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___german = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_europeanSpanish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___europeanSpanish;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_europeanSpanish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___europeanSpanish;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_europeanSpanish(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___europeanSpanish = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_russian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___russian;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_russian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___russian;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_russian(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___russian = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_korean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___korean;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_korean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___korean;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_korean(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___korean = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_japanese()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___japanese;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_japanese() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___japanese;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_japanese(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___japanese = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_brazilianPortuguese()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brazilianPortuguese;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_brazilianPortuguese() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brazilianPortuguese;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_brazilianPortuguese(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brazilianPortuguese = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_simplifiedChinese()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simplifiedChinese;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_simplifiedChinese() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simplifiedChinese;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_simplifiedChinese(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simplifiedChinese = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_italian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___italian;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_italian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___italian;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_italian(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___italian = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_polish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polish;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_polish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polish;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_polish(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___polish = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_latinAmericanSpanish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latinAmericanSpanish;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_latinAmericanSpanish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latinAmericanSpanish;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_latinAmericanSpanish(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latinAmericanSpanish = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_turkish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turkish;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_turkish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turkish;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_turkish(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turkish = value;
}
constexpr ::StringW& GlobalNamespace::LocalizationEntry::__cordl_internal_get_traditionalChinese()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traditionalChinese;
}
constexpr ::StringW const& GlobalNamespace::LocalizationEntry::__cordl_internal_get_traditionalChinese() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traditionalChinese;
}
constexpr void GlobalNamespace::LocalizationEntry::__cordl_internal_set_traditionalChinese(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traditionalChinese = value;
}
inline ::StringW GlobalNamespace::LocalizationEntry::GetTranslatedString(::GlobalNamespace::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationEntry*>(),
                        {"GetTranslatedString", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, language);
}
inline void GlobalNamespace::LocalizationEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizationEntry* GlobalNamespace::LocalizationEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizationEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationEntry::LocalizationEntry()   {
}
