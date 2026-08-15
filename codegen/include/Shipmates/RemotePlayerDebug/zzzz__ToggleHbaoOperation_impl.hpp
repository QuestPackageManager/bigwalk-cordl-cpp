#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleHbaoOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemoteVolumeDebugOperationBase_1_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleHbaoOperation_def.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::Execute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803b3e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::ToggleHbaoOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::ToggleHbaoOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::ToggleHbaoOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation* Shipmates::RemotePlayerDebug::ToggleHbaoOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleHbaoOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleHbaoOperation::ToggleHbaoOperation()   {
}
