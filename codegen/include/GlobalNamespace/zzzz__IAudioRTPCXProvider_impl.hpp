#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioRTPCXProvider.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAudioRTPCXProvider.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IAudioRTPCXProvider::*)()>(&::GlobalNamespace::IAudioRTPCXProvider::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioRTPCXProvider.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IAudioRTPCXProvider::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::IAudioRTPCXProvider::GetX)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IAudioRTPCXProvider::get_XProviderIdentifier()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::IAudioRTPCXProvider::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioRTPCXProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
