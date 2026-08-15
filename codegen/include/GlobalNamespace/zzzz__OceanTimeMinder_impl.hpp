#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanTimeMinder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OceanTimeMinder_def.hpp"
#include "WaveHarmonic/Crest/zzzz__NetworkedTimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OceanTimeMinder.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanTimeMinder::*)()>(&::GlobalNamespace::OceanTimeMinder::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804277b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanTimeMinder.SetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanTimeMinder::*)()>(&::GlobalNamespace::OceanTimeMinder::SetOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804277b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {"SetOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanTimeMinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanTimeMinder::*)()>(&::GlobalNamespace::OceanTimeMinder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>& GlobalNamespace::OceanTimeMinder::__cordl_internal_get_networkedTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTimeProvider;
}
constexpr ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider> const& GlobalNamespace::OceanTimeMinder::__cordl_internal_get_networkedTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTimeProvider;
}
constexpr void GlobalNamespace::OceanTimeMinder::__cordl_internal_set_networkedTimeProvider(::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedTimeProvider = value;
}
inline void GlobalNamespace::OceanTimeMinder::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanTimeMinder::SetOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {"SetOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanTimeMinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanTimeMinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OceanTimeMinder* GlobalNamespace::OceanTimeMinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OceanTimeMinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OceanTimeMinder::OceanTimeMinder()   {
}
