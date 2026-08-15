#pragma once
// IWYU pragma private; include "Rowlan/Genesis/TreeSettingsTemplate.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/zzzz__TreeSettingsTemplate_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::TreeSettingsTemplate.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::TreeSettingsTemplate::*)()>(&::Rowlan::Genesis::TreeSettingsTemplate::GetName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::TreeSettingsTemplate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::TreeSettingsTemplate::*)()>(&::Rowlan::Genesis::TreeSettingsTemplate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_templateName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr ::StringW const& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_templateName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr void Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_set_templateName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateName = value;
}
constexpr bool& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr float_t& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_probability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr float_t const& Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_get_probability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr void Rowlan::Genesis::TreeSettingsTemplate::__cordl_internal_set_probability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probability = value;
}
inline ::StringW Rowlan::Genesis::TreeSettingsTemplate::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::Genesis::TreeSettingsTemplate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::TreeSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::TreeSettingsTemplate* Rowlan::Genesis::TreeSettingsTemplate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::TreeSettingsTemplate*>());
}
/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr  Rowlan::Genesis::TreeSettingsTemplate::operator ::Rowlan::Genesis::ITemplateSettings*() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* Rowlan::Genesis::TreeSettingsTemplate::i___Rowlan__Genesis__ITemplateSettings() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::TreeSettingsTemplate::TreeSettingsTemplate()   {
}
