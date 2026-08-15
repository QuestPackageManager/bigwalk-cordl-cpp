#pragma once
// IWYU pragma private; include "GlobalNamespace/ReverbZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReverbZone)
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ReverbZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReverbZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReverbZone*, "", "ReverbZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReverbZone
class CORDL_TYPE ReverbZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Diffusion)) float_t  Diffusion;

 __declspec(property(get=get_InZone, put=set_InZone)) bool  InZone;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Outdoorness)) float_t  Outdoorness;

 __declspec(property(get=get_ReverbTime)) float_t  ReverbTime;

 __declspec(property(get=get_RoomSize)) float_t  RoomSize;

/// @brief Field <InZone>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__InZone_k__BackingField, put=__cordl_internal_set__InZone_k__BackingField)) bool  _InZone_k__BackingField;

/// @brief Field _diffusion, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__diffusion, put=__cordl_internal_set__diffusion)) int32_t  _diffusion;

/// @brief Field _dynamicReverb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dynamicReverb, put=__cordl_internal_set__dynamicReverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _dynamicReverb;

/// @brief Field _outdoorness, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__outdoorness, put=__cordl_internal_set__outdoorness)) int32_t  _outdoorness;

/// @brief Field _playerCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCollider, put=__cordl_internal_set__playerCollider)) ::UnityW<::UnityEngine::Collider>  _playerCollider;

/// @brief Field _reverbTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__reverbTime, put=__cordl_internal_set__reverbTime)) int32_t  _reverbTime;

/// @brief Field _roomSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__roomSize, put=__cordl_internal_set__roomSize)) int32_t  _roomSize;

/// @brief Method Initialize, addr 0x1804a42f0, size 0x100, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::ReverbZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804a43f0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x1804a4440, size 0x170, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x1804a45b0, size 0x70, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x1804a4620, size 0x160, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__InZone_k__BackingField() const;

constexpr bool& __cordl_internal_get__InZone_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__diffusion() const;

constexpr int32_t& __cordl_internal_get__diffusion() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__dynamicReverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__dynamicReverb() ;

constexpr int32_t const& __cordl_internal_get__outdoorness() const;

constexpr int32_t& __cordl_internal_get__outdoorness() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__playerCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__playerCollider() ;

constexpr int32_t const& __cordl_internal_get__reverbTime() const;

constexpr int32_t& __cordl_internal_get__reverbTime() ;

constexpr int32_t const& __cordl_internal_get__roomSize() const;

constexpr int32_t& __cordl_internal_get__roomSize() ;

constexpr void __cordl_internal_set__InZone_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__diffusion(int32_t  value) ;

constexpr void __cordl_internal_set__dynamicReverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

constexpr void __cordl_internal_set__outdoorness(int32_t  value) ;

constexpr void __cordl_internal_set__playerCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__reverbTime(int32_t  value) ;

constexpr void __cordl_internal_set__roomSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804a4780, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Diffusion, addr 0x1804a47a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Diffusion() ;

/// @brief Method get_InZone, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_InZone() ;

/// @brief Method get_Initialized, addr 0x18049c7d0, size 0x30, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Outdoorness, addr 0x1804a47b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Outdoorness() ;

/// @brief Method get_ReverbTime, addr 0x1804a47c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ReverbTime() ;

/// @brief Method get_RoomSize, addr 0x1804a47d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RoomSize() ;

/// @brief Method set_InZone, addr 0x180391cb0, size 0x10, virtual false, abstract: false, final false
inline void set_InZone(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReverbZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReverbZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReverbZone(ReverbZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReverbZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReverbZone(ReverbZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17637};

/// @brief Field _reverbTime, offset: 0x20, size: 0x4, def value: None
 int32_t  ____reverbTime;

/// @brief Field _diffusion, offset: 0x24, size: 0x4, def value: None
 int32_t  ____diffusion;

/// @brief Field _roomSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ____roomSize;

/// @brief Field _outdoorness, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____outdoorness;

/// @brief Field _dynamicReverb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____dynamicReverb;

/// @brief Field _playerCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____playerCollider;

/// @brief Field <InZone>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____InZone_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReverbZone, ____reverbTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____diffusion) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____roomSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____outdoorness) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____dynamicReverb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____playerCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbZone, ____InZone_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReverbZone) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
