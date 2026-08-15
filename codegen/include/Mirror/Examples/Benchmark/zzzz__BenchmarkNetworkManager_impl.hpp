#pragma once
// IWYU pragma private; include "Mirror/Examples/Benchmark/BenchmarkNetworkManager.hpp"
#include "Mirror/zzzz__NetworkManager_impl.hpp"
#include "Mirror/Examples/Benchmark/zzzz__BenchmarkNetworkManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Benchmark::BenchmarkNetworkManager.SpawnAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Benchmark::BenchmarkNetworkManager::*)()>(&::Mirror::Examples::Benchmark::BenchmarkNetworkManager::SpawnAll)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181553980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(),
                        {"SpawnAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Benchmark::BenchmarkNetworkManager.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Benchmark::BenchmarkNetworkManager::*)()>(&::Mirror::Examples::Benchmark::BenchmarkNetworkManager::OnStartServer)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181553980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(),
                    {::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Benchmark::BenchmarkNetworkManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Benchmark::BenchmarkNetworkManager::*)()>(&::Mirror::Examples::Benchmark::BenchmarkNetworkManager::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181553b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_spawnPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_spawnPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPrefab;
}
constexpr void Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_set_spawnPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPrefab = value;
}
constexpr int32_t& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_spawnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAmount;
}
constexpr int32_t const& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_spawnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAmount;
}
constexpr void Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_set_spawnAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAmount = value;
}
constexpr float_t& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_interleave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interleave;
}
constexpr float_t const& Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_get_interleave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interleave;
}
constexpr void Mirror::Examples::Benchmark::BenchmarkNetworkManager::__cordl_internal_set_interleave(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interleave = value;
}
inline void Mirror::Examples::Benchmark::BenchmarkNetworkManager::SpawnAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(),
                        {"SpawnAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Benchmark::BenchmarkNetworkManager::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Benchmark::BenchmarkNetworkManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Benchmark::BenchmarkNetworkManager* Mirror::Examples::Benchmark::BenchmarkNetworkManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Benchmark::BenchmarkNetworkManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Benchmark::BenchmarkNetworkManager::BenchmarkNetworkManager()   {
}
