#pragma once
// IWYU pragma private; include "Mirror/Discovery/ServerResponse.hpp"
#include "Mirror/Discovery/zzzz__ServerResponse_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::Discovery::ServerResponse.get_EndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::Mirror::Discovery::ServerResponse::*)()>(&::Mirror::Discovery::ServerResponse::get_EndPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::ServerResponse>(),
                        {"get_EndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::ServerResponse.set_EndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::ServerResponse::*)(::System::Net::IPEndPoint*)>(&::Mirror::Discovery::ServerResponse::set_EndPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::ServerResponse>(),
                        {"set_EndPoint", {}, {::i2c::type_of<::System::Net::IPEndPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::IPEndPoint* Mirror::Discovery::ServerResponse::get_EndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::ServerResponse>(),
                        {"get_EndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(*this, ___internal_method);
}
inline void Mirror::Discovery::ServerResponse::set_EndPoint(::System::Net::IPEndPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::ServerResponse>(),
                        {"set_EndPoint", {}, {::i2c::type_of<::System::Net::IPEndPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Discovery::ServerResponse::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Discovery::ServerResponse::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_EndPoint_k__BackingField", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverId", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Discovery::ServerResponse::ServerResponse(::System::Net::IPEndPoint*  _EndPoint_k__BackingField, ::System::Uri*  uri, int64_t  serverId) noexcept  {
this->_EndPoint_k__BackingField = _EndPoint_k__BackingField;
this->uri = uri;
this->serverId = serverId;
}
// Ctor Parameters []
constexpr ::Mirror::Discovery::ServerResponse::ServerResponse()   {
}
