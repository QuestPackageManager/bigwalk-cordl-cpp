#pragma once
// IWYU pragma private; include "GlobalNamespace/ConstantTimeRandom.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConstantTimeRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConstantTimeRandom.SplitMix64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::GlobalNamespace::ConstantTimeRandom::SplitMix64)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"SplitMix64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstantTimeRandom.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::GlobalNamespace::ConstantTimeRandom::Hash)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"Hash", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstantTimeRandom.GetRandomNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t, int32_t)>(&::GlobalNamespace::ConstantTimeRandom::GetRandomNumber)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"GetRandomNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstantTimeRandom.GetRandomInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::ConstantTimeRandom::GetRandomInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049d850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"GetRandomInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstantTimeRandom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConstantTimeRandom::*)()>(&::GlobalNamespace::ConstantTimeRandom::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t GlobalNamespace::ConstantTimeRandom::SplitMix64(uint64_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"SplitMix64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, z);
}
inline uint64_t GlobalNamespace::ConstantTimeRandom::Hash(uint64_t  index, uint64_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"Hash", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, index, seed);
}
inline double_t GlobalNamespace::ConstantTimeRandom::GetRandomNumber(int32_t  index, int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"GetRandomNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, index, seed);
}
inline int32_t GlobalNamespace::ConstantTimeRandom::GetRandomInt(int32_t  index, int32_t  seed, int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {"GetRandomInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, seed, min, max);
}
inline void GlobalNamespace::ConstantTimeRandom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConstantTimeRandom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConstantTimeRandom* GlobalNamespace::ConstantTimeRandom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConstantTimeRandom*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConstantTimeRandom::ConstantTimeRandom()   {
}
