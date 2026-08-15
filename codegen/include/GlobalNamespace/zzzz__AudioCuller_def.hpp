#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioCullable_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioCuller)
namespace GlobalNamespace {
class AudioCullable;
}
namespace GlobalNamespace {
class AudioCullingJobScheduler;
}
namespace GlobalNamespace {
class CustomCullingGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioCuller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioCuller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioCuller*, "", "AudioCuller");
// Dependencies AudioCullable, UnityEngine.BoundingSphere, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioCuller
class CORDL_TYPE AudioCuller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::AudioCuller>  _Instance_k__BackingField;

/// @brief Field _cullableObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cullableObjects, put=__cordl_internal_set__cullableObjects)) ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>  _cullableObjects;

/// @brief Field _cullingGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cullingGroup, put=__cordl_internal_set__cullingGroup)) ::GlobalNamespace::CustomCullingGroup*  _cullingGroup;

/// @brief Field _jobScheduler, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__jobScheduler, put=__cordl_internal_set__jobScheduler)) ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  _jobScheduler;

/// @brief Field _results, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__results, put=__cordl_internal_set__results)) ::ArrayW<int32_t>  _results;

/// @brief Field _spheres, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spheres, put=__cordl_internal_set__spheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _spheres;

/// @brief Field _spheresCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__spheresCount, put=__cordl_internal_set__spheresCount)) int32_t  _spheresCount;

/// @brief Method Awake, addr 0x180323280, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeregisterCullable, addr 0x1803232b0, size 0x130, virtual false, abstract: false, final false
inline void DeregisterCullable(::GlobalNamespace::AudioCullable*  cullable) ;

/// @brief Method EraseSwapBack, addr 0x1803233e0, size 0x60, virtual false, abstract: false, final false
inline void EraseSwapBack(int32_t  index) ;

static inline ::GlobalNamespace::AudioCuller* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180323440, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method RegisterCullable, addr 0x180323490, size 0x1a0, virtual false, abstract: false, final false
inline void RegisterCullable(::GlobalNamespace::AudioCullable*  cullable) ;

/// @brief Method Start, addr 0x180323630, size 0x130, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180323760, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>> const& __cordl_internal_get__cullableObjects() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>& __cordl_internal_get__cullableObjects() ;

constexpr ::GlobalNamespace::CustomCullingGroup* const& __cordl_internal_get__cullingGroup() const;

constexpr ::GlobalNamespace::CustomCullingGroup*& __cordl_internal_get__cullingGroup() ;

constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler> const& __cordl_internal_get__jobScheduler() const;

constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>& __cordl_internal_get__jobScheduler() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__results() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__results() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__spheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__spheres() ;

constexpr int32_t const& __cordl_internal_get__spheresCount() const;

constexpr int32_t& __cordl_internal_get__spheresCount() ;

constexpr void __cordl_internal_set__cullableObjects(::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>  value) ;

constexpr void __cordl_internal_set__cullingGroup(::GlobalNamespace::CustomCullingGroup*  value) ;

constexpr void __cordl_internal_set__jobScheduler(::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  value) ;

constexpr void __cordl_internal_set__results(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__spheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__spheresCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803238a0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::AudioCuller> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x180323920, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AudioCuller> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AudioCuller>  value) ;

/// @brief Method set_Instance, addr 0x180323280, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::AudioCuller*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioCuller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioCuller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioCuller(AudioCuller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioCuller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioCuller(AudioCuller const& ) = delete;

/// @brief Field BOUNDING_DIST offset 0xffffffff size 0x4
static constexpr float_t  BOUNDING_DIST{static_cast<float_t>(50.0f)};

/// @brief Field BOUNDING_SPHERE_SIZE offset 0xffffffff size 0x4
static constexpr float_t  BOUNDING_SPHERE_SIZE{static_cast<float_t>(1.0f)};

/// @brief Field TOTAL offset 0xffffffff size 0x4
static constexpr int32_t  TOTAL{static_cast<int32_t>(0x3e8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4805};

/// @brief Field _cullableObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioCullable>>  ____cullableObjects;

/// @brief Field _spheres, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____spheres;

/// @brief Field _spheresCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____spheresCount;

/// @brief Field _cullingGroup, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CustomCullingGroup*  ____cullingGroup;

/// @brief Field _results, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____results;

/// @brief Field _jobScheduler, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  ____jobScheduler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioCuller, ____cullableObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCuller, ____spheres) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCuller, ____spheresCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCuller, ____cullingGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCuller, ____results) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioCuller, ____jobScheduler) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioCuller) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
