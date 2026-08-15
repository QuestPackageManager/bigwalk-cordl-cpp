#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscoveryHUD.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscoveryHUD_def.hpp"
#include "Mirror/Discovery/zzzz__NetworkDiscovery_def.hpp"
#include "Mirror/Discovery/zzzz__ServerResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)()>(&::Mirror::Discovery::NetworkDiscoveryHUD::OnGUI)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181533ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)()>(&::Mirror::Discovery::NetworkDiscoveryHUD::DrawGUI)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x181533500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD.StopButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)()>(&::Mirror::Discovery::NetworkDiscoveryHUD::StopButtons)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181533bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"StopButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)(::Mirror::Discovery::ServerResponse)>(&::Mirror::Discovery::NetworkDiscoveryHUD::Connect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815334a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"Connect", {}, {::i2c::type_of<::Mirror::Discovery::ServerResponse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD.OnDiscoveredServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)(::Mirror::Discovery::ServerResponse)>(&::Mirror::Discovery::NetworkDiscoveryHUD::OnDiscoveredServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181533aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"OnDiscoveredServer", {}, {::i2c::type_of<::Mirror::Discovery::ServerResponse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Discovery::NetworkDiscoveryHUD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Discovery::NetworkDiscoveryHUD::*)()>(&::Mirror::Discovery::NetworkDiscoveryHUD::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181533d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_discoveredServers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discoveredServers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>* const& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_discoveredServers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discoveredServers;
}
constexpr void Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_set_discoveredServers(::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___discoveredServers = value;
}
constexpr ::UnityEngine::Vector2& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_scrollViewPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollViewPos;
}
constexpr ::UnityEngine::Vector2 const& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_scrollViewPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollViewPos;
}
constexpr void Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_set_scrollViewPos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollViewPos = value;
}
constexpr ::UnityW<::Mirror::Discovery::NetworkDiscovery>& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_networkDiscovery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkDiscovery;
}
constexpr ::UnityW<::Mirror::Discovery::NetworkDiscovery> const& Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_get_networkDiscovery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkDiscovery;
}
constexpr void Mirror::Discovery::NetworkDiscoveryHUD::__cordl_internal_set_networkDiscovery(::UnityW<::Mirror::Discovery::NetworkDiscovery>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkDiscovery = value;
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::StopButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"StopButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::Connect(::Mirror::Discovery::ServerResponse  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"Connect", {}, {::i2c::type_of<::Mirror::Discovery::ServerResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::OnDiscoveredServer(::Mirror::Discovery::ServerResponse  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {"OnDiscoveredServer", {}, {::i2c::type_of<::Mirror::Discovery::ServerResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Mirror::Discovery::NetworkDiscoveryHUD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::NetworkDiscoveryHUD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Discovery::NetworkDiscoveryHUD* Mirror::Discovery::NetworkDiscoveryHUD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Discovery::NetworkDiscoveryHUD*>());
}
// Ctor Parameters []
constexpr ::Mirror::Discovery::NetworkDiscoveryHUD::NetworkDiscoveryHUD()   {
}
