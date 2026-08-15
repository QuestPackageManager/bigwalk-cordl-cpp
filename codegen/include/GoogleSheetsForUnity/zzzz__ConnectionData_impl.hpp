#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/ConnectionData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GoogleSheetsForUnity/zzzz__ConnectionData_def.hpp"
//  Writing Method size for method: ::GoogleSheetsForUnity::ConnectionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GoogleSheetsForUnity::ConnectionData::*)()>(&::GoogleSheetsForUnity::ConnectionData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803bdc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::ConnectionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_webServiceUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webServiceUrl;
}
constexpr ::StringW const& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_webServiceUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webServiceUrl;
}
constexpr void GoogleSheetsForUnity::ConnectionData::__cordl_internal_set_webServiceUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webServiceUrl = value;
}
constexpr ::StringW& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_spreadsheetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spreadsheetId;
}
constexpr ::StringW const& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_spreadsheetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spreadsheetId;
}
constexpr void GoogleSheetsForUnity::ConnectionData::__cordl_internal_set_spreadsheetId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spreadsheetId = value;
}
constexpr ::StringW& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_servicePassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___servicePassword;
}
constexpr ::StringW const& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_servicePassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___servicePassword;
}
constexpr void GoogleSheetsForUnity::ConnectionData::__cordl_internal_set_servicePassword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___servicePassword = value;
}
constexpr float_t& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_timeOutLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOutLimit;
}
constexpr float_t const& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_timeOutLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOutLimit;
}
constexpr void GoogleSheetsForUnity::ConnectionData::__cordl_internal_set_timeOutLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOutLimit = value;
}
constexpr bool& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_usePOST()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePOST;
}
constexpr bool const& GoogleSheetsForUnity::ConnectionData::__cordl_internal_get_usePOST() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePOST;
}
constexpr void GoogleSheetsForUnity::ConnectionData::__cordl_internal_set_usePOST(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePOST = value;
}
inline void GoogleSheetsForUnity::ConnectionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GoogleSheetsForUnity::ConnectionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GoogleSheetsForUnity::ConnectionData* GoogleSheetsForUnity::ConnectionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GoogleSheetsForUnity::ConnectionData*>());
}
// Ctor Parameters []
constexpr ::GoogleSheetsForUnity::ConnectionData::ConnectionData()   {
}
