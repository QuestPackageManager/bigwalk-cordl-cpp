#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugHandler_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803ac140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler.CreateNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> (*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::CreateNew)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ac170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"CreateNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler.HandleRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::HandleRequest)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803ac1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"HandleRequest", {}, {::i2c::type_of<::Shipmates::RemotePlayerDebug::RemotePlayerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*& Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::__cordl_internal_get_ops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ops;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>* const& Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::__cordl_internal_get_ops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ops;
}
constexpr void Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::__cordl_internal_set_ops(::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ops = value;
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::CreateNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"CreateNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>>(nullptr, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::HandleRequest(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {"HandleRequest", {}, {::i2c::type_of<::Shipmates::RemotePlayerDebug::RemotePlayerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, req);
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler* Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler::RemotePlayerDebugHandler()   {
}
