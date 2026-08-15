#pragma once
// IWYU pragma private; include "Shipmate/Porting/CreateLobbyException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Shipmate/Porting/zzzz__CreateLobbyException_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::CreateLobbyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::CreateLobbyException::*)(::StringW)>(&::Shipmate::Porting::CreateLobbyException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804be150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::CreateLobbyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::CreateLobbyException::_ctor(::StringW  aErrorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::CreateLobbyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aErrorMsg);
}
inline ::Shipmate::Porting::CreateLobbyException* Shipmate::Porting::CreateLobbyException::New_ctor(::StringW  aErrorMsg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::CreateLobbyException*>(aErrorMsg));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::CreateLobbyException::CreateLobbyException()   {
}
