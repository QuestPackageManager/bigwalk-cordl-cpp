#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCullable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioCullable)
namespace UnityEngine {
class Behaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioCullable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioCullable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioCullable*, "", "AudioCullable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioCullable
class CORDL_TYPE AudioCullable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Culled, put=set_Culled)) bool  Culled;

 __declspec(property(get=get_LastUpdateFrame, put=set_LastUpdateFrame)) int32_t  LastUpdateFrame;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field TargetComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetComponent, put=__cordl_internal_set_TargetComponent)) ::UnityW<::UnityEngine::Behaviour>  TargetComponent;

/// @brief Field TargetObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetObject, put=__cordl_internal_set_TargetObject)) ::UnityW<::UnityEngine::GameObject>  TargetObject;

/// @brief Field <Culled>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__Culled_k__BackingField, put=__cordl_internal_set__Culled_k__BackingField)) bool  _Culled_k__BackingField;

/// @brief Field <LastUpdateFrame>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastUpdateFrame_k__BackingField, put=__cordl_internal_set__LastUpdateFrame_k__BackingField)) int32_t  _LastUpdateFrame_k__BackingField;

/// @brief Field _cachedTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTransform, put=__cordl_internal_set__cachedTransform)) ::UnityW<::UnityEngine::Transform>  _cachedTransform;

static inline ::GlobalNamespace::AudioCullable* New_ctor() ;

/// @brief Method OnCulled, addr 0x180322f60, size 0x60, virtual false, abstract: false, final false
inline void OnCulled() ;

/// @brief Method OnDestroy, addr 0x180322fc0, size 0x150, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNotCulled, addr 0x180323110, size 0x60, virtual false, abstract: false, final false
inline void OnNotCulled() ;

/// @brief Method Start, addr 0x180323170, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Behaviour> const& __cordl_internal_get_TargetComponent() const;

constexpr ::UnityW<::UnityEngine::Behaviour>& __cordl_internal_get_TargetComponent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TargetObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TargetObject() ;

constexpr bool const& __cordl_internal_get__Culled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Culled_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastUpdateFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastUpdateFrame_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cachedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cachedTransform() ;

constexpr void __cordl_internal_set_TargetComponent(::UnityW<::UnityEngine::Behaviour>  value) ;

constexpr void __cordl_internal_set_TargetObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__Culled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastUpdateFrame_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Culled, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_Culled() ;

/// @brief Method get_LastUpdateFrame, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LastUpdateFrame() ;

/// @brief Method get_Position, addr 0x1803231c0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method set_Culled, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_Culled(bool  value) ;

/// @brief Method set_LastUpdateFrame, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void set_LastUpdateFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioCullable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioCullable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioCullable(AudioCullable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioCullable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioCullable(AudioCullable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4804};

/// @brief Field TargetObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TargetObject;

/// @brief Field TargetComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Behaviour>  ___TargetComponent;

/// @brief Field _cachedTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cachedTransform;

/// @brief Field <Culled>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____Culled_k__BackingField;

/// @brief Field <LastUpdateFrame>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____LastUpdateFrame_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioCullable, ___TargetObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCullable, ___TargetComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCullable, ____cachedTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCullable, ____Culled_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCullable, ____LastUpdateFrame_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioCullable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
