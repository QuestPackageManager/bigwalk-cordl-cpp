#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationDataSet.hpp"
#include "GlobalNamespace/zzzz__LocalizationEntry_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationDataSet_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationDataSet.GetTranslatedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizationDataSet::*)(::StringW, ::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::LocalizationDataSet::GetTranslatedString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180402430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"GetTranslatedString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationDataSet.GetStringForCurrentLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizationDataSet::*)(::StringW)>(&::GlobalNamespace::LocalizationDataSet::GetStringForCurrentLanguage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804023f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"GetStringForCurrentLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationDataSet.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LocalizationDataSet> (*)()>(&::GlobalNamespace::LocalizationDataSet::get_instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180402560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationDataSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationDataSet::*)()>(&::GlobalNamespace::LocalizationDataSet::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180402520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LocalizationDataSet::__cordl_internal_get_missingKeyString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___missingKeyString;
}
constexpr ::StringW const& GlobalNamespace::LocalizationDataSet::__cordl_internal_get_missingKeyString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___missingKeyString;
}
constexpr void GlobalNamespace::LocalizationDataSet::__cordl_internal_set_missingKeyString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___missingKeyString = value;
}
constexpr ::ArrayW<::GlobalNamespace::LocalizationEntry*>& GlobalNamespace::LocalizationDataSet::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr ::ArrayW<::GlobalNamespace::LocalizationEntry*> const& GlobalNamespace::LocalizationDataSet::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr void GlobalNamespace::LocalizationDataSet::__cordl_internal_set_items(::ArrayW<::GlobalNamespace::LocalizationEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
inline ::StringW GlobalNamespace::LocalizationDataSet::GetTranslatedString(::StringW  key, ::GlobalNamespace::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"GetTranslatedString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, language);
}
inline ::StringW GlobalNamespace::LocalizationDataSet::GetStringForCurrentLanguage(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"GetStringForCurrentLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::UnityW<::GlobalNamespace::LocalizationDataSet> GlobalNamespace::LocalizationDataSet::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LocalizationDataSet>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalizationDataSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationDataSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizationDataSet* GlobalNamespace::LocalizationDataSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizationDataSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationDataSet::LocalizationDataSet()   {
}
