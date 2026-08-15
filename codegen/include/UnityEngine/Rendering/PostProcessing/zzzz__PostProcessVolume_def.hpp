#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessVolume)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessProfile;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, "UnityEngine.Rendering.PostProcessing", "PostProcessVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessVolume
class CORDL_TYPE PostProcessVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blendDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendDistance, put=__cordl_internal_set_blendDistance)) float_t  blendDistance;

/// @brief Field isGlobal, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGlobal, put=__cordl_internal_set_isGlobal)) bool  isGlobal;

/// @brief Field m_InternalProfile, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalProfile, put=__cordl_internal_set_m_InternalProfile)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  m_InternalProfile;

/// @brief Field m_PreviousLayer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousLayer, put=__cordl_internal_set_m_PreviousLayer)) int32_t  m_PreviousLayer;

/// @brief Field m_PreviousPriority, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousPriority, put=__cordl_internal_set_m_PreviousPriority)) float_t  m_PreviousPriority;

/// @brief Field m_TempColliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TempColliders, put=__cordl_internal_set_m_TempColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  m_TempColliders;

 __declspec(property(get=get_previousLayer)) int32_t  previousLayer;

/// @brief Field priority, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) float_t  priority;

 __declspec(property(get=get_profile, put=set_profile)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  profile;

 __declspec(property(get=get_profileRef)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  profileRef;

/// @brief Field sharedProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedProfile, put=__cordl_internal_set_sharedProfile)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  sharedProfile;

/// @brief Field weight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

/// @brief Method HasInstantiatedProfile, addr 0x181fcad20, size 0x10, virtual false, abstract: false, final false
inline bool HasInstantiatedProfile() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x181fcad30, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x181fcad90, size 0x5c0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x181fcb350, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x181fcb3e0, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_blendDistance() const;

constexpr float_t& __cordl_internal_get_blendDistance() ;

constexpr bool const& __cordl_internal_get_isGlobal() const;

constexpr bool& __cordl_internal_get_isGlobal() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> const& __cordl_internal_get_m_InternalProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>& __cordl_internal_get_m_InternalProfile() ;

constexpr int32_t const& __cordl_internal_get_m_PreviousLayer() const;

constexpr int32_t& __cordl_internal_get_m_PreviousLayer() ;

constexpr float_t const& __cordl_internal_get_m_PreviousPriority() const;

constexpr float_t& __cordl_internal_get_m_PreviousPriority() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_TempColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_TempColliders() ;

constexpr float_t const& __cordl_internal_get_priority() const;

constexpr float_t& __cordl_internal_get_priority() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> const& __cordl_internal_get_sharedProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>& __cordl_internal_get_sharedProfile() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set_blendDistance(float_t  value) ;

constexpr void __cordl_internal_set_isGlobal(bool  value) ;

constexpr void __cordl_internal_set_m_InternalProfile(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  value) ;

constexpr void __cordl_internal_set_m_PreviousLayer(int32_t  value) ;

constexpr void __cordl_internal_set_m_PreviousPriority(float_t  value) ;

constexpr void __cordl_internal_set_m_TempColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_priority(float_t  value) ;

constexpr void __cordl_internal_set_sharedProfile(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x181fcb490, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_previousLayer, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_previousLayer() ;

/// @brief Method get_profile, addr 0x181fcb4d0, size 0x130, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> get_profile() ;

/// @brief Method get_profileRef, addr 0x181fcb4a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> get_profileRef() ;

/// @brief Method set_profile, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_profile(::UnityEngine::Rendering::PostProcessing::PostProcessProfile*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessVolume", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessVolume(PostProcessVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessVolume", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessVolume(PostProcessVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18648};

/// @brief Field sharedProfile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  ___sharedProfile;

/// @brief Field isGlobal, offset: 0x28, size: 0x1, def value: None
 bool  ___isGlobal;

/// @brief Field blendDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___blendDistance;

/// @brief Field weight, offset: 0x30, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field priority, offset: 0x34, size: 0x4, def value: None
 float_t  ___priority;

/// @brief Field m_PreviousLayer, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_PreviousLayer;

/// @brief Field m_PreviousPriority, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_PreviousPriority;

/// @brief Field m_TempColliders, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___m_TempColliders;

/// @brief Field m_InternalProfile, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  ___m_InternalProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___sharedProfile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___isGlobal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___blendDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___weight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___priority) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___m_PreviousLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___m_PreviousPriority) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___m_TempColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume, ___m_InternalProfile) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessVolume) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
