#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRInputSubsystem.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.InvokeTrackingOriginUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18254f780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {"InvokeTrackingOriginUpdatedEvent", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem.InvokeBoundaryChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18254f6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {"InvokeBoundaryChangedEvent", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRInputSubsystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRInputSubsystem::*)()>(&::UnityEngine::XR::XRInputSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_trackingOriginUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingOriginUpdated;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_trackingOriginUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingOriginUpdated;
}
constexpr void UnityEngine::XR::XRInputSubsystem::__cordl_internal_set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackingOriginUpdated = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_boundaryChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundaryChanged;
}
constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& UnityEngine::XR::XRInputSubsystem::__cordl_internal_get_boundaryChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundaryChanged;
}
constexpr void UnityEngine::XR::XRInputSubsystem::__cordl_internal_set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundaryChanged = value;
}
inline void UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent(::System::IntPtr  internalPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {"InvokeTrackingOriginUpdatedEvent", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, internalPtr);
}
inline void UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent(::System::IntPtr  internalPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {"InvokeBoundaryChangedEvent", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, internalPtr);
}
inline void UnityEngine::XR::XRInputSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRInputSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* UnityEngine::XR::XRInputSubsystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::XRInputSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRInputSubsystem::XRInputSubsystem()   {
}
