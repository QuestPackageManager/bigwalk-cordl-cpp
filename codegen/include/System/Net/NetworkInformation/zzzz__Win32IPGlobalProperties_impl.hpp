#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32IPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32IPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32IPGlobalProperties.get_DomainName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::Win32IPGlobalProperties::*)()>(&::System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dab420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::Win32IPGlobalProperties*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::Win32IPGlobalProperties*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32IPGlobalProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::Win32IPGlobalProperties::*)()>(&::System::Net::NetworkInformation::Win32IPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32IPGlobalProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::Win32IPGlobalProperties*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::Win32IPGlobalProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32IPGlobalProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::Win32IPGlobalProperties* System::Net::NetworkInformation::Win32IPGlobalProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::Win32IPGlobalProperties*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32IPGlobalProperties::Win32IPGlobalProperties()   {
}
