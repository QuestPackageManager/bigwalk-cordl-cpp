#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyGradientSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SkyGradientSet)
namespace GlobalNamespace {
struct SkyGradientSet_SkyColorGroup;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyGradientSet;
}
namespace GlobalNamespace {
struct SkyGradientSet_SkyColorGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyGradientSet*);
MARK_VAL_T(::GlobalNamespace::SkyGradientSet_SkyColorGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyGradientSet*, "", "SkyGradientSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyGradientSet_SkyColorGroup, "", "SkyGradientSet/SkyColorGroup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SkyGradientSet/SkyColorGroup
struct CORDL_TYPE SkyGradientSet_SkyColorGroup {
public:
// Declarations
/// @brief Method SetActive, addr 0x180428a40, size 0x890, virtual false, abstract: false, final false
inline void SetActive() ;

// Ctor Parameters []
// @brief default ctor
constexpr SkyGradientSet_SkyColorGroup() ;

// Ctor Parameters [CppParam { name: "frontColorGradient0", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient0", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "frontColorGradient1", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient1", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "frontColorGradient2", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient2", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "frontColorGradient3", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient3", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "frontColorGradient4", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient4", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "frontColorGradient5", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "backColorGradient5", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "ambientSkyColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "ambientEquatorColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "ambientGroundColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "fogColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "cloudSunLightColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "cloudAmbientColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }]
constexpr SkyGradientSet_SkyColorGroup(::UnityEngine::Gradient*  frontColorGradient0, ::UnityEngine::Gradient*  backColorGradient0, ::UnityEngine::Gradient*  frontColorGradient1, ::UnityEngine::Gradient*  backColorGradient1, ::UnityEngine::Gradient*  frontColorGradient2, ::UnityEngine::Gradient*  backColorGradient2, ::UnityEngine::Gradient*  frontColorGradient3, ::UnityEngine::Gradient*  backColorGradient3, ::UnityEngine::Gradient*  frontColorGradient4, ::UnityEngine::Gradient*  backColorGradient4, ::UnityEngine::Gradient*  frontColorGradient5, ::UnityEngine::Gradient*  backColorGradient5, ::UnityEngine::Gradient*  ambientSkyColorGradient, ::UnityEngine::Gradient*  ambientEquatorColorGradient, ::UnityEngine::Gradient*  ambientGroundColorGradient, ::UnityEngine::Gradient*  fogColorGradient, ::UnityEngine::Gradient*  cloudSunLightColorGradient, ::UnityEngine::Gradient*  cloudAmbientColorGradient) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field frontColorGradient0, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient0;

/// @brief Field backColorGradient0, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient0;

/// @brief Field frontColorGradient1, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient1;

/// @brief Field backColorGradient1, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient1;

/// @brief Field frontColorGradient2, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient2;

/// @brief Field backColorGradient2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient2;

/// @brief Field frontColorGradient3, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient3;

/// @brief Field backColorGradient3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient3;

/// @brief Field frontColorGradient4, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient4;

/// @brief Field backColorGradient4, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient4;

/// @brief Field frontColorGradient5, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Gradient*  frontColorGradient5;

/// @brief Field backColorGradient5, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  backColorGradient5;

/// @brief Field ambientSkyColorGradient, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ambientSkyColorGradient;

/// @brief Field ambientEquatorColorGradient, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ambientEquatorColorGradient;

/// @brief Field ambientGroundColorGradient, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ambientGroundColorGradient;

/// @brief Field fogColorGradient, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Gradient*  fogColorGradient;

/// @brief Field cloudSunLightColorGradient, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Gradient*  cloudSunLightColorGradient;

/// @brief Field cloudAmbientColorGradient, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Gradient*  cloudAmbientColorGradient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, frontColorGradient5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, backColorGradient5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, ambientSkyColorGradient) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, ambientEquatorColorGradient) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, ambientGroundColorGradient) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, fogColorGradient) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, cloudSunLightColorGradient) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet_SkyColorGroup, cloudAmbientColorGradient) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyGradientSet_SkyColorGroup) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SkyGradientSet::SkyColorGroup, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyGradientSet
class CORDL_TYPE SkyGradientSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SkyColorGroup = ::GlobalNamespace::SkyGradientSet_SkyColorGroup;

/// @brief Field am, offset 0x18, size 0x90 
 __declspec(property(get=__cordl_internal_get_am, put=__cordl_internal_set_am)) ::GlobalNamespace::SkyGradientSet_SkyColorGroup  am;

/// @brief Field pm, offset 0xa8, size 0x90 
 __declspec(property(get=__cordl_internal_get_pm, put=__cordl_internal_set_pm)) ::GlobalNamespace::SkyGradientSet_SkyColorGroup  pm;

static inline ::GlobalNamespace::SkyGradientSet* New_ctor() ;

constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup const& __cordl_internal_get_am() const;

constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup& __cordl_internal_get_am() ;

constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup const& __cordl_internal_get_pm() const;

constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup& __cordl_internal_get_pm() ;

constexpr void __cordl_internal_set_am(::GlobalNamespace::SkyGradientSet_SkyColorGroup  value) ;

constexpr void __cordl_internal_set_pm(::GlobalNamespace::SkyGradientSet_SkyColorGroup  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyGradientSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyGradientSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyGradientSet(SkyGradientSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyGradientSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyGradientSet(SkyGradientSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5196};

/// @brief Field am, offset: 0x18, size: 0x90, def value: None
 ::GlobalNamespace::SkyGradientSet_SkyColorGroup  ___am;

/// @brief Field pm, offset: 0xa8, size: 0x90, def value: None
 ::GlobalNamespace::SkyGradientSet_SkyColorGroup  ___pm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyGradientSet, ___am) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyGradientSet, ___pm) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyGradientSet) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
