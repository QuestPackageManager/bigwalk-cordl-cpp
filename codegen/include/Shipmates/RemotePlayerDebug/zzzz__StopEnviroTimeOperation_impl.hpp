#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/StopEnviroTimeOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__StopEnviroTimeOperation_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::*)()>(&::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b38b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::Execute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803b37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::*)()>(&::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation* Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::StopEnviroTimeOperation::StopEnviroTimeOperation()   {
}
