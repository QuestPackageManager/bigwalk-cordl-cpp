#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/Legacy/PostProcessingSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PostProcessingSetup)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessVolume;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Rowlan::Genesis::Ambience::Legacy {
class PostProcessingSetup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup*, "Rowlan.Genesis.Ambience.Legacy", "PostProcessingSetup");
// Dependencies UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Ambience::Legacy {
// Is value type: false
// CS Name: Rowlan.Genesis.Ambience.Legacy.PostProcessingSetup
class CORDL_TYPE PostProcessingSetup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field camera, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

/// @brief Field postProcessLayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessLayer, put=__cordl_internal_set_postProcessLayer)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  postProcessLayer;

/// @brief Field postProcessProfile, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessProfile, put=__cordl_internal_set_postProcessProfile)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  postProcessProfile;

/// @brief Field postProcessVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessVolume, put=__cordl_internal_set_postProcessVolume)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>  postProcessVolume;

static inline ::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer> const& __cordl_internal_get_postProcessLayer() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>& __cordl_internal_get_postProcessLayer() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> const& __cordl_internal_get_postProcessProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>& __cordl_internal_get_postProcessProfile() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> const& __cordl_internal_get_postProcessVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>& __cordl_internal_get_postProcessVolume() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_postProcessLayer(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  value) ;

constexpr void __cordl_internal_set_postProcessProfile(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  value) ;

constexpr void __cordl_internal_set_postProcessVolume(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessingSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessingSetup(PostProcessingSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessingSetup(PostProcessingSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20438};

/// @brief Field camera, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

/// @brief Field postProcessLayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  ___postProcessLayer;

/// @brief Field postProcessVolume, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>  ___postProcessVolume;

/// @brief Field postProcessProfile, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  ___postProcessProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup, ___camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup, ___postProcessLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup, ___postProcessVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup, ___postProcessProfile) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Ambience::Legacy
