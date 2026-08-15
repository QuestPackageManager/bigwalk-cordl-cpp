#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingData.hpp"
#include "GlobalNamespace/zzzz__FontMappingScaling_impl.hpp"
#include "GlobalNamespace/zzzz__FontMappingTransfer_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__FontMappingData_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingData_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingScaling_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingTransfer_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FontMappingData_FontMappingLanguage.GetScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FontMappingData_FontMappingLanguage::*)(::GlobalNamespace::FontMappingScaling_UseCase)>(&::GlobalNamespace::FontMappingData_FontMappingLanguage::GetScaling)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803e73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData_FontMappingLanguage>(),
                        {"GetScaling", {}, {::i2c::type_of<::GlobalNamespace::FontMappingScaling_UseCase>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::FontMappingData_FontMappingLanguage::GetScaling(::GlobalNamespace::FontMappingScaling_UseCase  useCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData_FontMappingLanguage>(),
                        {"GetScaling", {}, {::i2c::type_of<::GlobalNamespace::FontMappingScaling_UseCase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, useCase);
}
// Ctor Parameters [CppParam { name: "language", ty: "::GlobalNamespace::LocalizationLanguage", modifiers: "", def_value: Some("{}") }, CppParam { name: "useLatinTransfers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "transfers", ty: "::ArrayW<::GlobalNamespace::FontMappingTransfer*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "scalings", ty: "::ArrayW<::GlobalNamespace::FontMappingScaling>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage::FontMappingData_FontMappingLanguage(::GlobalNamespace::LocalizationLanguage  language, bool  useLatinTransfers, ::ArrayW<::GlobalNamespace::FontMappingTransfer*>  transfers, ::ArrayW<::GlobalNamespace::FontMappingScaling>  scalings) noexcept  {
this->language = language;
this->useLatinTransfers = useLatinTransfers;
this->transfers = transfers;
this->scalings = scalings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage::FontMappingData_FontMappingLanguage()   {
}
//  Writing Method size for method: ::GlobalNamespace::FontMappingData.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FontMappingData> (*)()>(&::GlobalNamespace::FontMappingData::get_instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappingData.GetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FontMappingData_FontMappingLanguage (::GlobalNamespace::FontMappingData::*)(::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::FontMappingData::GetLanguage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803e7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappingData.GetTransfer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::LocalizationLanguage, ::TMPro::TMP_FontAsset*, ::by_ref<::GlobalNamespace::FontMappingTransfer*>)>(&::GlobalNamespace::FontMappingData::GetTransfer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803e7220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetTransfer", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::FontMappingTransfer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappingData.GetScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FontMappingData::*)(::GlobalNamespace::LocalizationLanguage, ::GlobalNamespace::FontMappingScaling_UseCase)>(&::GlobalNamespace::FontMappingData::GetScaling)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetScaling", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>(), ::i2c::type_of<::GlobalNamespace::FontMappingScaling_UseCase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappingData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappingData::*)()>(&::GlobalNamespace::FontMappingData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e7380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FontMappingData::__cordl_internal_get_useMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMappings;
}
constexpr bool const& GlobalNamespace::FontMappingData::__cordl_internal_get_useMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMappings;
}
constexpr void GlobalNamespace::FontMappingData::__cordl_internal_set_useMappings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMappings = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::FontMappingData::__cordl_internal_get_textOpaqueShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpaqueShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::FontMappingData::__cordl_internal_get_textOpaqueShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpaqueShader;
}
constexpr void GlobalNamespace::FontMappingData::__cordl_internal_set_textOpaqueShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textOpaqueShader = value;
}
constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage& GlobalNamespace::FontMappingData::__cordl_internal_get_latinScript()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latinScript;
}
constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage const& GlobalNamespace::FontMappingData::__cordl_internal_get_latinScript() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latinScript;
}
constexpr void GlobalNamespace::FontMappingData::__cordl_internal_set_latinScript(::GlobalNamespace::FontMappingData_FontMappingLanguage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latinScript = value;
}
constexpr ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>& GlobalNamespace::FontMappingData::__cordl_internal_get_languages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languages;
}
constexpr ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage> const& GlobalNamespace::FontMappingData::__cordl_internal_get_languages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___languages;
}
constexpr void GlobalNamespace::FontMappingData::__cordl_internal_set_languages(::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___languages = value;
}
inline ::UnityW<::GlobalNamespace::FontMappingData> GlobalNamespace::FontMappingData::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FontMappingData>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::FontMappingData_FontMappingLanguage GlobalNamespace::FontMappingData::GetLanguage(::GlobalNamespace::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FontMappingData_FontMappingLanguage>(this, ___internal_method, language);
}
inline bool GlobalNamespace::FontMappingData::GetTransfer(::GlobalNamespace::LocalizationLanguage  language, ::TMPro::TMP_FontAsset*  fontAsset, ::by_ref<::GlobalNamespace::FontMappingTransfer*>  fontMappingTransfer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetTransfer", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::FontMappingTransfer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, language, fontAsset, fontMappingTransfer);
}
inline float_t GlobalNamespace::FontMappingData::GetScaling(::GlobalNamespace::LocalizationLanguage  language, ::GlobalNamespace::FontMappingScaling_UseCase  useCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {"GetScaling", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>(), ::i2c::type_of<::GlobalNamespace::FontMappingScaling_UseCase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, language, useCase);
}
inline void GlobalNamespace::FontMappingData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FontMappingData* GlobalNamespace::FontMappingData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FontMappingData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappingData::FontMappingData()   {
}
