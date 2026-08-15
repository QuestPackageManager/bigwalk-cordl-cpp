#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransformManagerJobScheduler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransformManagerJobScheduler_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransformManager_def.hpp"
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::*)()>(&::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803c7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::*)()>(&::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::FixedUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c7e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::*)()>(&::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransformManager>& LobbyNetworking::HouseNetworkTransformManagerJobScheduler::__cordl_internal_get__manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransformManager> const& LobbyNetworking::HouseNetworkTransformManagerJobScheduler::__cordl_internal_get__manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr void LobbyNetworking::HouseNetworkTransformManagerJobScheduler::__cordl_internal_set__manager(::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manager = value;
}
inline void LobbyNetworking::HouseNetworkTransformManagerJobScheduler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManagerJobScheduler::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManagerJobScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler* LobbyNetworking::HouseNetworkTransformManagerJobScheduler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*>());
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler::HouseNetworkTransformManagerJobScheduler()   {
}
