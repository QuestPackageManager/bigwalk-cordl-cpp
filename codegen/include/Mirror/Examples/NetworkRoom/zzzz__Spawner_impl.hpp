#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/Spawner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/Examples/NetworkRoom/zzzz__Spawner_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Spawner.InitialSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::Examples::NetworkRoom::Spawner::InitialSpawn)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181563eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {"InitialSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Spawner.SpawnReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::Examples::NetworkRoom::Spawner::SpawnReward)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181563f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {"SpawnReward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::Spawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::Spawner::*)()>(&::Mirror::Examples::NetworkRoom::Spawner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::NetworkRoom::Spawner::InitialSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {"InitialSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::Spawner::SpawnReward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {"SpawnReward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::Spawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::Spawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::NetworkRoom::Spawner* Mirror::Examples::NetworkRoom::Spawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::NetworkRoom::Spawner*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::NetworkRoom::Spawner::Spawner()   {
}
