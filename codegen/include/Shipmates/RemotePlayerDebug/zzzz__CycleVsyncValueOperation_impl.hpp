#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/CycleVsyncValueOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__CycleVsyncValueOperation_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::*)()>(&::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a9cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::Execute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803a9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::*)()>(&::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation* Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::CycleVsyncValueOperation::CycleVsyncValueOperation()   {
}
