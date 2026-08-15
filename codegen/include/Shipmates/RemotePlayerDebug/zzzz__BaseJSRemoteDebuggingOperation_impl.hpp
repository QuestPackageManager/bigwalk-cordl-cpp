#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/BaseJSRemoteDebuggingOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation.get_Section
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::*)()>(&::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::get_Section)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::*)()>(&::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::get_Section()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation* Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation::BaseJSRemoteDebuggingOperation()   {
}
