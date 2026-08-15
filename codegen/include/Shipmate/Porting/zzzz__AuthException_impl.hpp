#pragma once
// IWYU pragma private; include "Shipmate/Porting/AuthException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Shipmate/Porting/zzzz__AuthException_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AuthException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AuthException::*)(::StringW, bool, ::StringW)>(&::Shipmate::Porting::AuthException::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AuthException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Shipmate::Porting::AuthException::__cordl_internal_get_mShouldShowError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mShouldShowError;
}
constexpr bool const& Shipmate::Porting::AuthException::__cordl_internal_get_mShouldShowError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mShouldShowError;
}
constexpr void Shipmate::Porting::AuthException::__cordl_internal_set_mShouldShowError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mShouldShowError = value;
}
constexpr ::StringW& Shipmate::Porting::AuthException::__cordl_internal_get_mLocalizedMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLocalizedMessage;
}
constexpr ::StringW const& Shipmate::Porting::AuthException::__cordl_internal_get_mLocalizedMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLocalizedMessage;
}
constexpr void Shipmate::Porting::AuthException::__cordl_internal_set_mLocalizedMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mLocalizedMessage = value;
}
inline void Shipmate::Porting::AuthException::_ctor(::StringW  aMessage, bool  aShowError, ::StringW  aLocalizedMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AuthException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage, aShowError, aLocalizedMessage);
}
inline ::Shipmate::Porting::AuthException* Shipmate::Porting::AuthException::New_ctor(::StringW  aMessage, bool  aShowError, ::StringW  aLocalizedMessage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AuthException*>(aMessage, aShowError, aLocalizedMessage));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AuthException::AuthException()   {
}
