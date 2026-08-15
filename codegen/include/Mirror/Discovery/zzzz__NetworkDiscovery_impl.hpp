#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscovery.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscoveryBase_2_impl.hpp"
#include "Mirror/Discovery/zzzz__ServerRequest_impl.hpp"
#include "Mirror/Discovery/zzzz__ServerResponse_impl.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscovery_def.hpp"
#include "Mirror/Discovery/zzzz__ServerRequest_def.hpp"
#include "Mirror/Discovery/zzzz__ServerResponse_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscovery.ProcessRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Discovery::ServerResponse (::Mirror::Discovery::NetworkDiscovery::*)(::Mirror::Discovery::ServerRequest, ::System::Net::IPEndPoint*)>(&::Mirror::Discovery::NetworkDiscovery::ProcessRequest)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181533df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(),
                    {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscovery.GetRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Discovery::ServerRequest (::Mirror::Discovery::NetworkDiscovery::*)()>(&::Mirror::Discovery::NetworkDiscovery::GetRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(),
                    {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscovery.ProcessResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscovery::*)(::Mirror::Discovery::ServerResponse, ::System::Net::IPEndPoint*)>(&::Mirror::Discovery::NetworkDiscovery::ProcessResponse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181533ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(),
                    {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscovery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscovery::*)()>(&::Mirror::Discovery::NetworkDiscovery::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181533f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Mirror::Discovery::ServerResponse Mirror::Discovery::NetworkDiscovery::ProcessRequest(::Mirror::Discovery::ServerRequest  request, ::System::Net::IPEndPoint*  endpoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Discovery::ServerResponse>(this, ___internal_method, request, endpoint);
}
inline ::Mirror::Discovery::ServerRequest Mirror::Discovery::NetworkDiscovery::GetRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Discovery::ServerRequest>(this, ___internal_method);
}
inline void Mirror::Discovery::NetworkDiscovery::ProcessResponse(::Mirror::Discovery::ServerResponse  response, ::System::Net::IPEndPoint*  endpoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, endpoint);
}
inline void Mirror::Discovery::NetworkDiscovery::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscovery*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Discovery::NetworkDiscovery* Mirror::Discovery::NetworkDiscovery::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Discovery::NetworkDiscovery*>());
}
// Ctor Parameters []
constexpr ::Mirror::Discovery::NetworkDiscovery::NetworkDiscovery()   {
}
