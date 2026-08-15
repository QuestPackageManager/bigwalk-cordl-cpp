#pragma once
// IWYU pragma private; include "Rowlan/Genesis/TreeTemplateCollection.hpp"
#include "Rowlan/Genesis/zzzz__TreeSettingsTemplate_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/zzzz__TreeTemplateCollection_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateCollection_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::TreeTemplateCollection.GetTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rowlan::Genesis::ITemplateSettings*> (::Rowlan::Genesis::TreeTemplateCollection::*)()>(&::Rowlan::Genesis::TreeTemplateCollection::GetTemplates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {"GetTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::TreeTemplateCollection.GetPresetHelpText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::TreeTemplateCollection::*)()>(&::Rowlan::Genesis::TreeTemplateCollection::GetPresetHelpText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {"GetPresetHelpText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::TreeTemplateCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::TreeTemplateCollection::*)()>(&::Rowlan::Genesis::TreeTemplateCollection::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac2210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_get_presetHelpText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetHelpText;
}
constexpr ::StringW const& Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_get_presetHelpText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetHelpText;
}
constexpr void Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_set_presetHelpText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetHelpText = value;
}
constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>& Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_get_templates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templates;
}
constexpr ::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>> const& Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_get_templates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templates;
}
constexpr void Rowlan::Genesis::TreeTemplateCollection::__cordl_internal_set_templates(::ArrayW<::UnityW<::Rowlan::Genesis::TreeSettingsTemplate>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templates = value;
}
inline ::ArrayW<::Rowlan::Genesis::ITemplateSettings*> Rowlan::Genesis::TreeTemplateCollection::GetTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {"GetTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rowlan::Genesis::ITemplateSettings*>>(this, ___internal_method);
}
inline ::StringW Rowlan::Genesis::TreeTemplateCollection::GetPresetHelpText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {"GetPresetHelpText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::Genesis::TreeTemplateCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeTemplateCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::TreeTemplateCollection* Rowlan::Genesis::TreeTemplateCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::TreeTemplateCollection*>());
}
/// @brief Convert operator to "::Rowlan::Genesis::ITemplateCollection"
constexpr  Rowlan::Genesis::TreeTemplateCollection::operator ::Rowlan::Genesis::ITemplateCollection*() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rowlan::Genesis::ITemplateCollection"
constexpr ::Rowlan::Genesis::ITemplateCollection* Rowlan::Genesis::TreeTemplateCollection::i___Rowlan__Genesis__ITemplateCollection() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::TreeTemplateCollection::TreeTemplateCollection()   {
}
