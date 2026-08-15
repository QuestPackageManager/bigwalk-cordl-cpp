#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplicationQuitNetworkFlush.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ApplicationQuitNetworkFlush_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuitNetworkFlush.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplicationQuitNetworkFlush::*)()>(&::GlobalNamespace::ApplicationQuitNetworkFlush::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18038ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuitNetworkFlush.FlushEosSends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplicationQuitNetworkFlush::*)(float_t)>(&::GlobalNamespace::ApplicationQuitNetworkFlush::FlushEosSends)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18038feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {"FlushEosSends", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuitNetworkFlush._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ApplicationQuitNetworkFlush::*)()>(&::GlobalNamespace::ApplicationQuitNetworkFlush::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ApplicationQuitNetworkFlush::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ApplicationQuitNetworkFlush::FlushEosSends(float_t  budgetMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {"FlushEosSends", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, budgetMs);
}
inline void GlobalNamespace::ApplicationQuitNetworkFlush::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuitNetworkFlush*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ApplicationQuitNetworkFlush* GlobalNamespace::ApplicationQuitNetworkFlush::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ApplicationQuitNetworkFlush*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ApplicationQuitNetworkFlush::ApplicationQuitNetworkFlush()   {
}
