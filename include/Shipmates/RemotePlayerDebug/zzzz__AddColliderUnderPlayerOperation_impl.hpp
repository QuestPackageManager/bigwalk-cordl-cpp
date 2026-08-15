#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/AddColliderUnderPlayerOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__AddColliderUnderPlayerOperation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::*)()>(&::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a8d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::Execute)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1803a88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation.GetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::*)()>(&::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::GetLocalPlayer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803a8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                        {"GetLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::*)()>(&::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::GetLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                        {"GetLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline void Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation* Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation::AddColliderUnderPlayerOperation()   {
}
