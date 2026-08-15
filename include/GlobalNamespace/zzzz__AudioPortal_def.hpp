#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPortal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioPortal)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPortal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioPortal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPortal*, "", "AudioPortal");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPortal
class CORDL_TYPE AudioPortal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CachedTransform, put=set_CachedTransform)) ::UnityW<::UnityEngine::Transform>  CachedTransform;

/// @brief Field MaxDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDistance, put=__cordl_internal_set_MaxDistance)) float_t  MaxDistance;

 __declspec(property(get=get_OpenDirection)) ::UnityEngine::Vector3  OpenDirection;

/// @brief Field Opening, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Opening, put=__cordl_internal_set_Opening)) float_t  Opening;

/// @brief Field <CachedTransform>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedTransform_k__BackingField, put=__cordl_internal_set__CachedTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _CachedTransform_k__BackingField;

/// @brief Field _openDirection, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__openDirection, put=__cordl_internal_set__openDirection)) ::UnityEngine::Vector3  _openDirection;

/// @brief Method Awake, addr 0x18048ad40, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioPortal* New_ctor() ;

/// @brief Method OnDisable, addr 0x18048ad70, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18048ae00, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_MaxDistance() const;

constexpr float_t& __cordl_internal_get_MaxDistance() ;

constexpr float_t const& __cordl_internal_get_Opening() const;

constexpr float_t& __cordl_internal_get_Opening() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__CachedTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__CachedTransform_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__openDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__openDirection() ;

constexpr void __cordl_internal_set_MaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_Opening(float_t  value) ;

constexpr void __cordl_internal_set__CachedTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__openDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18048ae90, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedTransform, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_CachedTransform() ;

/// @brief Method get_OpenDirection, addr 0x18048aec0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_OpenDirection() ;

/// @brief Method set_CachedTransform, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_CachedTransform(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPortal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPortal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPortal(AudioPortal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPortal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPortal(AudioPortal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17550};

/// @brief Field Opening, offset: 0x20, size: 0x4, def value: None
 float_t  ___Opening;

/// @brief Field _openDirection, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____openDirection;

/// @brief Field MaxDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___MaxDistance;

/// @brief Field <CachedTransform>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____CachedTransform_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPortal, ___Opening) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPortal, ____openDirection) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPortal, ___MaxDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPortal, ____CachedTransform_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPortal) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
