#pragma once
// IWYU pragma private; include "Shipmate/Utils/PlatformUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Utils/zzzz__PlatformUtils_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Shipmate::Utils::PlatformUtils.CaptureMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Shipmate::Utils::PlatformUtils::CaptureMainThread)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::PlatformUtils*>(),
                        {"CaptureMainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::PlatformUtils.get_MainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Thread* (*)()>(&::Shipmate::Utils::PlatformUtils::get_MainThread)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac6cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::PlatformUtils*>(),
                        {"get_MainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Utils::PlatformUtils::setStaticF_mMainThread(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "mMainThread", ::Shipmate::Utils::PlatformUtils*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* Shipmate::Utils::PlatformUtils::getStaticF_mMainThread()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "mMainThread", ::Shipmate::Utils::PlatformUtils*>();
}
inline void Shipmate::Utils::PlatformUtils::CaptureMainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::PlatformUtils*>(),
                        {"CaptureMainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Thread* Shipmate::Utils::PlatformUtils::get_MainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::PlatformUtils*>(),
                        {"get_MainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Shipmate::Utils::PlatformUtils::PlatformUtils()   {
}
