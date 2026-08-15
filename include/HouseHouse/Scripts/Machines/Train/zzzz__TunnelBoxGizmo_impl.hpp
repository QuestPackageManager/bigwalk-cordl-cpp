#pragma once
// IWYU pragma private; include "HouseHouse/Scripts/Machines/Train/TunnelBoxGizmo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HouseHouse/Scripts/Machines/Train/zzzz__TunnelBoxGizmo_def.hpp"
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::*)()>(&::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1803d10d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::*)()>(&::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_topLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLeft;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_topLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLeft;
}
constexpr void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_set_topLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topLeft = value;
}
constexpr ::UnityEngine::Vector3& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_topRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRight;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_topRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRight;
}
constexpr void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_set_topRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topRight = value;
}
constexpr ::UnityEngine::Vector3& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_bottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomLeft;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_bottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomLeft;
}
constexpr void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_set_bottomLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomLeft = value;
}
constexpr ::UnityEngine::Vector3& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_bottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRight;
}
constexpr ::UnityEngine::Vector3 const& HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_get_bottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomRight;
}
constexpr void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::__cordl_internal_set_bottomRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomRight = value;
}
inline void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo* HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo::TunnelBoxGizmo()   {
}
