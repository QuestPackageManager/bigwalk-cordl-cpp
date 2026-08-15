#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleSkyboxCubeMapRendererFeature.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleRendererFeatureOperation_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleSkyboxCubeMapRendererFeature_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::*)()>(&::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803b4d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::*)()>(&::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature* Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleSkyboxCubeMapRendererFeature::ToggleSkyboxCubeMapRendererFeature()   {
}
