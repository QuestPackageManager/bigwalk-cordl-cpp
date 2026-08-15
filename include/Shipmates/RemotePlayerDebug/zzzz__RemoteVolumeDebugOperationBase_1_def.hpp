#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemoteVolumeDebugOperationBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
CORDL_MODULE_EXPORT(RemoteVolumeDebugOperationBase_1)
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class Volume;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
template<typename T>
class RemoteVolumeDebugOperationBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1, "Shipmates.RemotePlayerDebug", "RemoteVolumeDebugOperationBase`1");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemoteVolumeDebugOperationBase`1<T>
class CORDL_TYPE RemoteVolumeDebugOperationBase_1 : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
/// @brief Field _createdProfile, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__createdProfile, put=__cordl_internal_set__createdProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  _createdProfile;

/// @brief Field _createdVolume, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__createdVolume, put=__cordl_internal_set__createdVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  _createdVolume;

/// @brief Field _effectComponent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectComponent, put=__cordl_internal_set__effectComponent)) T  _effectComponent;

/// @brief Method EnsureVolumeCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnsureVolumeCreated() ;

/// @brief Method GetEffectComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetEffectComponent() ;

static inline ::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get__createdProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get__createdProfile() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get__createdVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get__createdVolume() ;

constexpr T const& __cordl_internal_get__effectComponent() const;

constexpr T& __cordl_internal_get__effectComponent() ;

constexpr void __cordl_internal_set__createdProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

constexpr void __cordl_internal_set__createdVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set__effectComponent(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteVolumeDebugOperationBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteVolumeDebugOperationBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteVolumeDebugOperationBase_1(RemoteVolumeDebugOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteVolumeDebugOperationBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteVolumeDebugOperationBase_1(RemoteVolumeDebugOperationBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5710};

/// @brief Field _createdVolume, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ____createdVolume;

/// @brief Field _createdProfile, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ____createdProfile;

/// @brief Field _effectComponent, offset: 0x20, size: 0x8, def value: None
 T  ____effectComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmates::RemotePlayerDebug
