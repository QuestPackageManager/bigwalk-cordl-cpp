#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/DisableAllLightsExceptAroundPlayer.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__DisableAllLightsExceptAroundPlayer_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::*)()>(&::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803aa4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::Execute)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803aa1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::*)()>(&::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer* Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::DisableAllLightsExceptAroundPlayer::DisableAllLightsExceptAroundPlayer()   {
}
