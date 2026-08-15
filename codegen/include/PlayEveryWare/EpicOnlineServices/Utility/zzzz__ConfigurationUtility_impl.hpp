#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/ConfigurationUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__ConfigurationUtility_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSCreateOptions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSInitializeOptions_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility.GetEOSCreateOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions* (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility::GetEOSCreateOptions)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1805362b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*>(),
                        {"GetEOSCreateOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility.GetEOSInitializeOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions* (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility::GetEOSInitializeOptions)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180536650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*>(),
                        {"GetEOSInitializeOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::PlayEveryWare::EpicOnlineServices::EOSCreateOptions* PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility::GetEOSCreateOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*>(),
                        {"GetEOSCreateOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>(nullptr, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions* PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility::GetEOSInitializeOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*>(),
                        {"GetEOSInitializeOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility::ConfigurationUtility()   {
}
