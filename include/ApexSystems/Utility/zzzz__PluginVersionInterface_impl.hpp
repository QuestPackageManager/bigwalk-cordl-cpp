#pragma once
// IWYU pragma private; include "ApexSystems/Utility/PluginVersionInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ApexSystems/Utility/zzzz__PluginVersionInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::ApexSystems::Utility::PluginVersionInterface.GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)()>(&::ApexSystems::Utility::PluginVersionInterface::GetVersion)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180544e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ApexSystems::Utility::PluginVersionInterface*>(),
                        {"GetVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ApexSystems::Utility::PluginVersionInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ApexSystems::Utility::PluginVersionInterface::*)()>(&::ApexSystems::Utility::PluginVersionInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ApexSystems::Utility::PluginVersionInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ApexSystems::Utility::PluginVersionInterface::setStaticF_PRODUCT_IDENTIFIER(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_IDENTIFIER", ::ApexSystems::Utility::PluginVersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* ApexSystems::Utility::PluginVersionInterface::getStaticF_PRODUCT_IDENTIFIER()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_IDENTIFIER", ::ApexSystems::Utility::PluginVersionInterface*>();
}
inline void ApexSystems::Utility::PluginVersionInterface::setStaticF_PRODUCT_NAME(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_NAME", ::ApexSystems::Utility::PluginVersionInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* ApexSystems::Utility::PluginVersionInterface::getStaticF_PRODUCT_NAME()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "PRODUCT_NAME", ::ApexSystems::Utility::PluginVersionInterface*>();
}
inline ::Epic::OnlineServices::Utf8String* ApexSystems::Utility::PluginVersionInterface::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ApexSystems::Utility::PluginVersionInterface*>(),
                        {"GetVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method);
}
inline void ApexSystems::Utility::PluginVersionInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ApexSystems::Utility::PluginVersionInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ApexSystems::Utility::PluginVersionInterface* ApexSystems::Utility::PluginVersionInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ApexSystems::Utility::PluginVersionInterface*>());
}
// Ctor Parameters []
constexpr ::ApexSystems::Utility::PluginVersionInterface::PluginVersionInterface()   {
}
