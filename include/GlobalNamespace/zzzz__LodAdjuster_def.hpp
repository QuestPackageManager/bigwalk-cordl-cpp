#pragma once
// IWYU pragma private; include "GlobalNamespace/LodAdjuster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LodAdjuster)
// Forward declare root types
namespace GlobalNamespace {
class LodAdjuster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LodAdjuster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LodAdjuster*, "", "LodAdjuster");
// Dependencies UnityEngine.LOD, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LodAdjuster
class CORDL_TYPE LodAdjuster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _originalLocalReferencePoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalLocalReferencePoint, put=__cordl_internal_set__originalLocalReferencePoint)) ::UnityEngine::Vector3  _originalLocalReferencePoint;

/// @brief Field _originalLods, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalLods, put=__cordl_internal_set__originalLods)) ::ArrayW<::UnityEngine::LOD>  _originalLods;

static inline ::GlobalNamespace::LodAdjuster* New_ctor() ;

/// @brief Method RestoreOriginalLods, addr 0x1803ed4f0, size 0x90, virtual false, abstract: false, final false
inline void RestoreOriginalLods() ;

/// @brief Method SetThreshold, addr 0x1803ed580, size 0x1a0, virtual false, abstract: false, final false
inline void SetThreshold(float_t  scalar) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalLocalReferencePoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalLocalReferencePoint() ;

constexpr ::ArrayW<::UnityEngine::LOD> const& __cordl_internal_get__originalLods() const;

constexpr ::ArrayW<::UnityEngine::LOD>& __cordl_internal_get__originalLods() ;

constexpr void __cordl_internal_set__originalLocalReferencePoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__originalLods(::ArrayW<::UnityEngine::LOD>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodAdjuster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodAdjuster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodAdjuster(LodAdjuster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodAdjuster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodAdjuster(LodAdjuster const& ) = delete;

/// @brief Field MinGap offset 0xffffffff size 0x4
static constexpr float_t  MinGap{static_cast<float_t>(0.001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4950};

/// @brief Field _originalLods, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::LOD>  ____originalLods;

/// @brief Field _originalLocalReferencePoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalLocalReferencePoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LodAdjuster, ____originalLods) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LodAdjuster, ____originalLocalReferencePoint) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LodAdjuster) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
