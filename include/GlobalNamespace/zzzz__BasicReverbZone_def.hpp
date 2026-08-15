#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicReverbZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicReverbZone)
namespace GlobalNamespace {
class AudioBasicReverb;
}
namespace GlobalNamespace {
class BasicReverbConfig;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicReverbZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasicReverbZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicReverbZone*, "", "BasicReverbZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicReverbZone
class CORDL_TYPE BasicReverbZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Config, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::UnityW<::GlobalNamespace::BasicReverbConfig>  Config;

 __declspec(property(get=get_InZone, put=set_InZone)) bool  InZone;

 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field Priority, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

/// @brief Field <InZone>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__InZone_k__BackingField, put=__cordl_internal_set__InZone_k__BackingField)) bool  _InZone_k__BackingField;

/// @brief Field _basicReverb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__basicReverb, put=__cordl_internal_set__basicReverb)) ::UnityW<::GlobalNamespace::AudioBasicReverb>  _basicReverb;

/// @brief Field _playerCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCollider, put=__cordl_internal_set__playerCollider)) ::UnityW<::UnityEngine::Collider>  _playerCollider;

/// @brief Method Initialize, addr 0x18049c4f0, size 0x100, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::BasicReverbZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18049c5f0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x18049c640, size 0xa0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x18049c6e0, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x18049c750, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::BasicReverbConfig> const& __cordl_internal_get_Config() const;

constexpr ::UnityW<::GlobalNamespace::BasicReverbConfig>& __cordl_internal_get_Config() ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr bool const& __cordl_internal_get__InZone_k__BackingField() const;

constexpr bool& __cordl_internal_get__InZone_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb> const& __cordl_internal_get__basicReverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb>& __cordl_internal_get__basicReverb() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__playerCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__playerCollider() ;

constexpr void __cordl_internal_set_Config(::UnityW<::GlobalNamespace::BasicReverbConfig>  value) ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

constexpr void __cordl_internal_set__InZone_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__basicReverb(::UnityW<::GlobalNamespace::AudioBasicReverb>  value) ;

constexpr void __cordl_internal_set__playerCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InZone, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_InZone() ;

/// @brief Method get_Initialized, addr 0x18049c7d0, size 0x30, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method set_InZone, addr 0x180391cb0, size 0x10, virtual false, abstract: false, final false
inline void set_InZone(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicReverbZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicReverbZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicReverbZone(BasicReverbZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicReverbZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicReverbZone(BasicReverbZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17589};

/// @brief Field Config, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BasicReverbConfig>  ___Config;

/// @brief Field Priority, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Priority;

/// @brief Field _basicReverb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBasicReverb>  ____basicReverb;

/// @brief Field _playerCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____playerCollider;

/// @brief Field <InZone>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____InZone_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicReverbZone, ___Config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbZone, ___Priority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbZone, ____basicReverb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbZone, ____playerCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbZone, ____InZone_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicReverbZone) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
