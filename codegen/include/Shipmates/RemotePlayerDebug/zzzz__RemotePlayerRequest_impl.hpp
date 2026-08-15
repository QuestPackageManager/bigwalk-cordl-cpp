#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::RemotePlayerRequest::*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::StringW const& Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void Shipmates::RemotePlayerDebug::RemotePlayerRequest::__cordl_internal_set_payload(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerRequest* Shipmates::RemotePlayerDebug::RemotePlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::RemotePlayerRequest*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::RemotePlayerRequest::RemotePlayerRequest()   {
}
