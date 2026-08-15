#pragma once
// IWYU pragma private; include "GlobalNamespace/FontFallbackData.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_impl.hpp"
#include "TMPro/zzzz__TMP_FontAsset_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__FontFallbackData_def.hpp"
#include "GlobalNamespace/zzzz__FontFallbackData_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
// Ctor Parameters [CppParam { name: "defaultFallbackLanguages", ty: "::ArrayW<::GlobalNamespace::LocalizationLanguage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAssets", ty: "::ArrayW<::UnityW<::TMPro::TMP_FontAsset>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FontFallbackData_FallbackPrototype::FontFallbackData_FallbackPrototype(::ArrayW<::GlobalNamespace::LocalizationLanguage>  defaultFallbackLanguages, ::ArrayW<::UnityW<::TMPro::TMP_FontAsset>>  fontAssets) noexcept  {
this->defaultFallbackLanguages = defaultFallbackLanguages;
this->fontAssets = fontAssets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontFallbackData_FallbackPrototype::FontFallbackData_FallbackPrototype()   {
}
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FontFallbackData> (*)()>(&::GlobalNamespace::FontFallbackData::get_instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e6bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontFallbackData::*)(::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::FontFallbackData::SetLanguage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803e68c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontFallbackData::*)(::TMPro::TMP_FontAsset*, ::ArrayW<::GlobalNamespace::LocalizationLanguage>, ::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::FontFallbackData::SetLanguage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803e6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LocalizationLanguage>>(), ::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontFallbackData::*)()>(&::GlobalNamespace::FontFallbackData::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontFallbackData::*)()>(&::GlobalNamespace::FontFallbackData::CleanUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontFallbackData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontFallbackData::*)()>(&::GlobalNamespace::FontFallbackData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e6b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*& GlobalNamespace::FontFallbackData::__cordl_internal_get_originalFallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalFallbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>* const& GlobalNamespace::FontFallbackData::__cordl_internal_get_originalFallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalFallbacks;
}
constexpr void GlobalNamespace::FontFallbackData::__cordl_internal_set_originalFallbacks(::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalFallbacks = value;
}
constexpr ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>& GlobalNamespace::FontFallbackData::__cordl_internal_get_fallbackPrototypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackPrototypes;
}
constexpr ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype> const& GlobalNamespace::FontFallbackData::__cordl_internal_get_fallbackPrototypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackPrototypes;
}
constexpr void GlobalNamespace::FontFallbackData::__cordl_internal_set_fallbackPrototypes(::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackPrototypes = value;
}
inline ::UnityW<::GlobalNamespace::FontFallbackData> GlobalNamespace::FontFallbackData::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FontFallbackData>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FontFallbackData::SetLanguage(::GlobalNamespace::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline void GlobalNamespace::FontFallbackData::SetLanguage(::TMPro::TMP_FontAsset*  fontAsset, ::ArrayW<::GlobalNamespace::LocalizationLanguage>  defaultFallbackLanguages, ::GlobalNamespace::LocalizationLanguage  targetLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LocalizationLanguage>>(), ::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontAsset, defaultFallbackLanguages, targetLanguage);
}
inline void GlobalNamespace::FontFallbackData::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontFallbackData::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontFallbackData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontFallbackData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FontFallbackData* GlobalNamespace::FontFallbackData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FontFallbackData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontFallbackData::FontFallbackData()   {
}
