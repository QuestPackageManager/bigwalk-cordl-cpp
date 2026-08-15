#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRNodeState.hpp"
#include "UnityEngine/XR/zzzz__AvailableTrackingData_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_uniqueID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(uint64_t)>(&::UnityEngine::XR::XRNodeState::set_uniqueID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_uniqueID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_nodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::XRNodeState::set_nodeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_nodeType", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_tracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(bool)>(&::UnityEngine::XR::XRNodeState::set_tracked)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18254f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_tracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRNodeState::set_uniqueID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_uniqueID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::XRNodeState::set_nodeType(::UnityEngine::XR::XRNode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_nodeType", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::XRNodeState::set_tracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
                        {"set_tracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::XR::XRNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AvailableFields", ty: "::UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularAcceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRNodeState::XRNodeState(::UnityEngine::XR::XRNode  m_Type, ::UnityEngine::XR::AvailableTrackingData  m_AvailableFields, ::UnityEngine::Vector3  m_Position, ::UnityEngine::Quaternion  m_Rotation, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_Acceleration, ::UnityEngine::Vector3  m_AngularAcceleration, int32_t  m_Tracked, uint64_t  m_UniqueID) noexcept  {
this->m_Type = m_Type;
this->m_AvailableFields = m_AvailableFields;
this->m_Position = m_Position;
this->m_Rotation = m_Rotation;
this->m_Velocity = m_Velocity;
this->m_AngularVelocity = m_AngularVelocity;
this->m_Acceleration = m_Acceleration;
this->m_AngularAcceleration = m_AngularAcceleration;
this->m_Tracked = m_Tracked;
this->m_UniqueID = m_UniqueID;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRNodeState::XRNodeState()   {
}
