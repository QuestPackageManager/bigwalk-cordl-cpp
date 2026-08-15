#pragma once
// IWYU pragma private; include "Rowlan/Genesis/LayerTemplateCollection.hpp"
#include "Rowlan/Genesis/zzzz__LayerSettingsTemplate_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/zzzz__LayerTemplateCollection_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateCollection_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::LayerTemplateCollection.GetTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rowlan::Genesis::ITemplateSettings*> (::Rowlan::Genesis::LayerTemplateCollection::*)()>(&::Rowlan::Genesis::LayerTemplateCollection::GetTemplates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {"GetTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::LayerTemplateCollection.GetPresetHelpText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::LayerTemplateCollection::*)()>(&::Rowlan::Genesis::LayerTemplateCollection::GetPresetHelpText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {"GetPresetHelpText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::LayerTemplateCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::LayerTemplateCollection::*)()>(&::Rowlan::Genesis::LayerTemplateCollection::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_get_presetHelpText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetHelpText;
}
constexpr ::StringW const& Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_get_presetHelpText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetHelpText;
}
constexpr void Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_set_presetHelpText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetHelpText = value;
}
constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::LayerSettingsTemplate>>& Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_get_templates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templates;
}
constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::LayerSettingsTemplate>> const& Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_get_templates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templates;
}
constexpr void Rowlan::Genesis::LayerTemplateCollection::__cordl_internal_set_templates(::ArrayW<::UnityW<::Rowlan::Genesis::LayerSettingsTemplate>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templates = value;
}
inline ::ArrayW<::Rowlan::Genesis::ITemplateSettings*> Rowlan::Genesis::LayerTemplateCollection::GetTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {"GetTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rowlan::Genesis::ITemplateSettings*>>(this, ___internal_method);
}
inline ::StringW Rowlan::Genesis::LayerTemplateCollection::GetPresetHelpText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {"GetPresetHelpText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::Genesis::LayerTemplateCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerTemplateCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::LayerTemplateCollection* Rowlan::Genesis::LayerTemplateCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::LayerTemplateCollection*>());
}
/// @brief Convert operator to "::Rowlan::Genesis::ITemplateCollection"
constexpr  Rowlan::Genesis::LayerTemplateCollection::operator ::Rowlan::Genesis::ITemplateCollection*() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rowlan::Genesis::ITemplateCollection"
constexpr ::Rowlan::Genesis::ITemplateCollection* Rowlan::Genesis::LayerTemplateCollection::i___Rowlan__Genesis__ITemplateCollection() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::LayerTemplateCollection::LayerTemplateCollection()   {
}
