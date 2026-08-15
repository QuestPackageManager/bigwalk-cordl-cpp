#pragma once
// IWYU pragma private; include "Shipmates/Utils/BaseLogInstance.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__BaseLogInstance_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveContext_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::BaseLogInstance.InjectContextMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::BaseLogInstance::*)(::Shipmates::Utils::OpenObserveContext*)>(&::Shipmates::Utils::BaseLogInstance::InjectContextMetadata)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181acad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::Utils::BaseLogInstance*>(),
                    {::i2c::class_of<::Shipmates::Utils::BaseLogInstance*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::BaseLogInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::BaseLogInstance::*)()>(&::Shipmates::Utils::BaseLogInstance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::BaseLogInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionId = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userName = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_logLevel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLevel = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_gameVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameVersion;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_gameVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameVersion;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_gameVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameVersion = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
constexpr ::StringW& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_stackTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackTrace;
}
constexpr ::StringW const& Shipmates::Utils::BaseLogInstance::__cordl_internal_get_stackTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackTrace;
}
constexpr void Shipmates::Utils::BaseLogInstance::__cordl_internal_set_stackTrace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stackTrace = value;
}
inline void Shipmates::Utils::BaseLogInstance::InjectContextMetadata(::Shipmates::Utils::OpenObserveContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::Utils::BaseLogInstance*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Shipmates::Utils::BaseLogInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::BaseLogInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::BaseLogInstance* Shipmates::Utils::BaseLogInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::BaseLogInstance*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::BaseLogInstance::BaseLogInstance()   {
}
