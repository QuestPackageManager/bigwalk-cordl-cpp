#pragma once
// IWYU pragma private; include "Mirror/HostMode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__HostMode_def.hpp"
//  Writing Method size for method: ::Mirror::HostMode.SetupConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::HostMode::SetupConnections)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181536410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"SetupConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::HostMode.InvokeOnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::HostMode::InvokeOnConnected)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181536290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"InvokeOnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::HostMode.ActivateHostScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::HostMode::ActivateHostScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"ActivateHostScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::HostMode::SetupConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"SetupConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::HostMode::InvokeOnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"InvokeOnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::HostMode::ActivateHostScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::HostMode*>(),
                        {"ActivateHostScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::HostMode::HostMode()   {
}
