#pragma once
// IWYU pragma private; include "Shipmate/Porting/StorageException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Shipmate/Porting/zzzz__StorageException_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::StorageException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::StorageException::*)(::StringW, int32_t)>(&::Shipmate::Porting::StorageException::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::StorageException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Shipmate::Porting::StorageException::__cordl_internal_get_errorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr int32_t const& Shipmate::Porting::StorageException::__cordl_internal_get_errorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr void Shipmate::Porting::StorageException::__cordl_internal_set_errorCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCode = value;
}
inline void Shipmate::Porting::StorageException::setStaticF_NO_SPACE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NO_SPACE", ::Shipmate::Porting::StorageException*>(std::forward<int32_t>(value));
}
inline int32_t Shipmate::Porting::StorageException::getStaticF_NO_SPACE()  {
return ::cordl_internals::getStaticField<int32_t, "NO_SPACE", ::Shipmate::Porting::StorageException*>();
}
inline void Shipmate::Porting::StorageException::setStaticF_OTHER(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OTHER", ::Shipmate::Porting::StorageException*>(std::forward<int32_t>(value));
}
inline int32_t Shipmate::Porting::StorageException::getStaticF_OTHER()  {
return ::cordl_internals::getStaticField<int32_t, "OTHER", ::Shipmate::Porting::StorageException*>();
}
inline void Shipmate::Porting::StorageException::_ctor(::StringW  aErrorMsg, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::StorageException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aErrorMsg, errorCode);
}
inline ::Shipmate::Porting::StorageException* Shipmate::Porting::StorageException::New_ctor(::StringW  aErrorMsg, int32_t  errorCode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::StorageException*>(aErrorMsg, errorCode));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::StorageException::StorageException()   {
}
