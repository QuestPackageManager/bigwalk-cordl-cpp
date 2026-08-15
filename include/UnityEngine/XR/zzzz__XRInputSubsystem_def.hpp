#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRInputSubsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
CORDL_MODULE_EXPORT(XRInputSubsystem)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::XRInputSubsystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::XRInputSubsystem*, "UnityEngine.XR", "XRInputSubsystem");
// Dependencies UnityEngine.IntegratedSubsystem`1<TSubsystemDescriptor>
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRInputSubsystem
class CORDL_TYPE XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
// Declarations
/// @brief Field boundaryChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundaryChanged, put=__cordl_internal_set_boundaryChanged)) ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  boundaryChanged;

/// @brief Field trackingOriginUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingOriginUpdated, put=__cordl_internal_set_trackingOriginUpdated)) ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  trackingOriginUpdated;

/// @brief Method InvokeBoundaryChangedEvent, addr 0x18254f6f0, size 0x90, virtual false, abstract: false, final false
static inline void InvokeBoundaryChangedEvent(::System::IntPtr  internalPtr) ;

/// @brief Method InvokeTrackingOriginUpdatedEvent, addr 0x18254f780, size 0x90, virtual false, abstract: false, final false
static inline void InvokeTrackingOriginUpdatedEvent(::System::IntPtr  internalPtr) ;

static inline ::UnityEngine::XR::XRInputSubsystem* New_ctor() ;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& __cordl_internal_get_boundaryChanged() const;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_boundaryChanged() ;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* const& __cordl_internal_get_trackingOriginUpdated() const;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*& __cordl_internal_get_trackingOriginUpdated() ;

constexpr void __cordl_internal_set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  value) ;

constexpr void __cordl_internal_set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputSubsystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputSubsystem(XRInputSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputSubsystem(XRInputSubsystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20997};

/// @brief Field trackingOriginUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  ___trackingOriginUpdated;

/// @brief Field boundaryChanged, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>*  ___boundaryChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___trackingOriginUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRInputSubsystem, ___boundaryChanged) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::XRInputSubsystem) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR
