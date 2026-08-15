#pragma once
// IWYU pragma private; include "Boxophobic/Utility/SettingsData.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledScriptableObject_impl.hpp"
#include "Boxophobic/Utility/zzzz__SettingsData_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::SettingsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::SettingsData::*)()>(&::Boxophobic::Utility::SettingsData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bcdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::SettingsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Boxophobic::Utility::SettingsData::__cordl_internal_get_styledBanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___styledBanner;
}
constexpr bool const& Boxophobic::Utility::SettingsData::__cordl_internal_get_styledBanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___styledBanner;
}
constexpr void Boxophobic::Utility::SettingsData::__cordl_internal_set_styledBanner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___styledBanner = value;
}
constexpr ::StringW& Boxophobic::Utility::SettingsData::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& Boxophobic::Utility::SettingsData::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Boxophobic::Utility::SettingsData::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Boxophobic::Utility::SettingsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::SettingsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::SettingsData* Boxophobic::Utility::SettingsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::SettingsData*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::SettingsData::SettingsData()   {
}
