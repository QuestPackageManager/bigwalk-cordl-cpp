#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveContext_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveContext::*)()>(&::Shipmates::Utils::OpenObserveContext::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr void Shipmates::Utils::OpenObserveContext::__cordl_internal_set_userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userName = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void Shipmates::Utils::OpenObserveContext::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionId = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_gameVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameVersion;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_gameVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameVersion;
}
constexpr void Shipmates::Utils::OpenObserveContext::__cordl_internal_set_gameVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameVersion = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveContext::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void Shipmates::Utils::OpenObserveContext::__cordl_internal_set_platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
inline void Shipmates::Utils::OpenObserveContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::OpenObserveContext* Shipmates::Utils::OpenObserveContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserveContext*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveContext::OpenObserveContext()   {
}
