#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4RichPresenceEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS4RichPresenceEntry_def.hpp"
#include "GlobalNamespace/zzzz__PS4RichPresenceEntryLanguage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4RichPresenceEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PS4RichPresenceEntry::*)()>(&::GlobalNamespace::PS4RichPresenceEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS4RichPresenceEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*& GlobalNamespace::PS4RichPresenceEntry::__cordl_internal_get_languageData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languageData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>* const& GlobalNamespace::PS4RichPresenceEntry::__cordl_internal_get_languageData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languageData;
}
constexpr void GlobalNamespace::PS4RichPresenceEntry::__cordl_internal_set_languageData(::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___languageData = value;
}
inline void GlobalNamespace::PS4RichPresenceEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PS4RichPresenceEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4RichPresenceEntry* GlobalNamespace::PS4RichPresenceEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PS4RichPresenceEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4RichPresenceEntry::PS4RichPresenceEntry()   {
}
