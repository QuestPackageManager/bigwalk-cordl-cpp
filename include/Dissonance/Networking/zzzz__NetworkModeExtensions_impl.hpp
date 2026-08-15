#pragma once
// IWYU pragma private; include "Dissonance/Networking/NetworkModeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__NetworkModeExtensions_def.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::NetworkModeExtensions.IsServerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Dissonance::Networking::NetworkMode)>(&::Dissonance::Networking::NetworkModeExtensions::IsServerEnabled)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e1210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::NetworkModeExtensions*>(),
                        {"IsServerEnabled", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::NetworkModeExtensions.IsClientEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Dissonance::Networking::NetworkMode)>(&::Dissonance::Networking::NetworkModeExtensions::IsClientEnabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::NetworkModeExtensions*>(),
                        {"IsClientEnabled", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Dissonance::Networking::NetworkModeExtensions::IsServerEnabled(::Dissonance::Networking::NetworkMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::NetworkModeExtensions*>(),
                        {"IsServerEnabled", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
inline bool Dissonance::Networking::NetworkModeExtensions::IsClientEnabled(::Dissonance::Networking::NetworkMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::NetworkModeExtensions*>(),
                        {"IsClientEnabled", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::NetworkModeExtensions::NetworkModeExtensions()   {
}
