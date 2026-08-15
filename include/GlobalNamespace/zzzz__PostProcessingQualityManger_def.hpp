#pragma once
// IWYU pragma private; include "GlobalNamespace/PostProcessingQualityManger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessingQualityManger)
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace GlobalNamespace {
class PostProcessingQualityManger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PostProcessingQualityManger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostProcessingQualityManger*, "", "PostProcessingQualityManger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PostProcessingQualityManger
class CORDL_TYPE PostProcessingQualityManger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::PostProcessingQualityManger>  Instance;

/// @brief Field _qualityLevel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__qualityLevel, put=__cordl_internal_set__qualityLevel)) int32_t  _qualityLevel;

/// @brief Field baseVolumeProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseVolumeProfile, put=__cordl_internal_set_baseVolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  baseVolumeProfile;

/// @brief Method ApplyQualityEffects, addr 0x180428270, size 0x190, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  newQualityLevel) ;

/// @brief Method Awake, addr 0x180428400, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PostProcessingQualityManger* New_ctor() ;

/// @brief Method OnDisable, addr 0x180428430, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180428550, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetToGoodbyeVoidMode, addr 0x180428670, size 0x90, virtual false, abstract: false, final false
static inline void SetToGoodbyeVoidMode() ;

constexpr int32_t const& __cordl_internal_get__qualityLevel() const;

constexpr int32_t& __cordl_internal_get__qualityLevel() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_baseVolumeProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_baseVolumeProfile() ;

constexpr void __cordl_internal_set__qualityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_baseVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PostProcessingQualityManger> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::PostProcessingQualityManger>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessingQualityManger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingQualityManger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessingQualityManger(PostProcessingQualityManger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingQualityManger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessingQualityManger(PostProcessingQualityManger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5193};

/// @brief Field baseVolumeProfile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ___baseVolumeProfile;

/// @brief Field _qualityLevel, offset: 0x28, size: 0x4, def value: None
 int32_t  ____qualityLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PostProcessingQualityManger, ___baseVolumeProfile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessingQualityManger, ____qualityLevel) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PostProcessingQualityManger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
