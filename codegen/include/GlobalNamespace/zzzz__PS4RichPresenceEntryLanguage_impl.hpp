#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4RichPresenceEntryLanguage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS4RichPresenceEntryLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4RichPresenceEntryLanguage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PS4RichPresenceEntryLanguage::*)()>(&::GlobalNamespace::PS4RichPresenceEntryLanguage::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS4RichPresenceEntryLanguage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_get_languageCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languageCode;
}
constexpr ::StringW const& GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_get_languageCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languageCode;
}
constexpr void GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_set_languageCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___languageCode = value;
}
constexpr ::StringW& GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_get_gameStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStatus;
}
constexpr ::StringW const& GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_get_gameStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStatus;
}
constexpr void GlobalNamespace::PS4RichPresenceEntryLanguage::__cordl_internal_set_gameStatus(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameStatus = value;
}
inline void GlobalNamespace::PS4RichPresenceEntryLanguage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS4RichPresenceEntryLanguage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4RichPresenceEntryLanguage* GlobalNamespace::PS4RichPresenceEntryLanguage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PS4RichPresenceEntryLanguage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4RichPresenceEntryLanguage::PS4RichPresenceEntryLanguage()   {
}
