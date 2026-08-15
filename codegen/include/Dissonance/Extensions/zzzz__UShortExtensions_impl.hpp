#pragma once
// IWYU pragma private; include "Dissonance/Extensions/UShortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Extensions/zzzz__UShortExtensions_def.hpp"
//  Writing Method size for method: ::Dissonance::Extensions::UShortExtensions.WrappedDelta2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t, uint16_t)>(&::Dissonance::Extensions::UShortExtensions::WrappedDelta2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta2", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Extensions::UShortExtensions.WrappedDelta7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t, uint16_t)>(&::Dissonance::Extensions::UShortExtensions::WrappedDelta7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta7", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Extensions::UShortExtensions.WrappedDelta16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t, uint16_t)>(&::Dissonance::Extensions::UShortExtensions::WrappedDelta16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta16", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Extensions::UShortExtensions.WrappedDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t, uint16_t, int32_t)>(&::Dissonance::Extensions::UShortExtensions::WrappedDelta)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ed6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::Extensions::UShortExtensions::WrappedDelta2(uint16_t  a, uint16_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta2", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t Dissonance::Extensions::UShortExtensions::WrappedDelta7(uint16_t  a, uint16_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta7", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t Dissonance::Extensions::UShortExtensions::WrappedDelta16(uint16_t  a, uint16_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta16", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t Dissonance::Extensions::UShortExtensions::WrappedDelta(uint16_t  a, uint16_t  b, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::UShortExtensions*>(),
                        {"WrappedDelta", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, bits);
}
// Ctor Parameters []
constexpr ::Dissonance::Extensions::UShortExtensions::UShortExtensions()   {
}
