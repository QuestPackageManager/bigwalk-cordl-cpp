#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType()   {
}
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::NodeAdded{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::NodeRemoved{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::TrackingAcquired{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::TrackingLost{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.InvokeTrackingEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::InputTracking_TrackingStateEventType, ::UnityEngine::XR::XRNode, int64_t, bool)>(&::UnityEngine::XR::InputTracking::InvokeTrackingEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18254e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"InvokeTrackingEvent", {}, {::i2c::type_of<::UnityEngine::XR::InputTracking_TrackingStateEventType>(), ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputTracking::setStaticF_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingAcquired()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingLost()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeAdded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeRemoved()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::InvokeTrackingEvent(::UnityEngine::XR::InputTracking_TrackingStateEventType  eventType, ::UnityEngine::XR::XRNode  nodeType, int64_t  uniqueID, bool  tracked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"InvokeTrackingEvent", {}, {::i2c::type_of<::UnityEngine::XR::InputTracking_TrackingStateEventType>(), ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventType, nodeType, uniqueID, tracked);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTracking::InputTracking()   {
}
