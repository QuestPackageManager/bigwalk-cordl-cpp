#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Version/VersionInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Version/zzzz__VersionInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Version::VersionInterface.GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)()>(&::Epic::OnlineServices::Version::VersionInterface::GetVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Version::VersionInterface*>(),
                        {"GetVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Version::VersionInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Version::VersionInterface::*)()>(&::Epic::OnlineServices::Version::VersionInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Version::VersionInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Version::VersionInterface::setStaticF_COMPANY_NAME(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "COMPANY_NAME", ::Epic::OnlineServices::Version::VersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Version::VersionInterface::getStaticF_COMPANY_NAME()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "COMPANY_NAME", ::Epic::OnlineServices::Version::VersionInterface*>();
}
inline void Epic::OnlineServices::Version::VersionInterface::setStaticF_COPYRIGHT_STRING(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "COPYRIGHT_STRING", ::Epic::OnlineServices::Version::VersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Version::VersionInterface::getStaticF_COPYRIGHT_STRING()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "COPYRIGHT_STRING", ::Epic::OnlineServices::Version::VersionInterface*>();
}
inline void Epic::OnlineServices::Version::VersionInterface::setStaticF_PRODUCT_IDENTIFIER(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_IDENTIFIER", ::Epic::OnlineServices::Version::VersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Version::VersionInterface::getStaticF_PRODUCT_IDENTIFIER()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_IDENTIFIER", ::Epic::OnlineServices::Version::VersionInterface*>();
}
inline void Epic::OnlineServices::Version::VersionInterface::setStaticF_PRODUCT_NAME(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_NAME", ::Epic::OnlineServices::Version::VersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Version::VersionInterface::getStaticF_PRODUCT_NAME()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_NAME", ::Epic::OnlineServices::Version::VersionInterface*>();
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Version::VersionInterface::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Version::VersionInterface*>(),
                        {"GetVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Version::VersionInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Version::VersionInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Version::VersionInterface* Epic::OnlineServices::Version::VersionInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Version::VersionInterface*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Version::VersionInterface::VersionInterface()   {
}
