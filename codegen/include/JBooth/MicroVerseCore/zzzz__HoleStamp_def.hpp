#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HoleStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
CORDL_MODULE_EXPORT(HoleStamp)
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class HoleData;
}
namespace JBooth::MicroVerseCore {
class IHoleModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class HoleStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::HoleStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HoleStamp*, "JBooth.MicroVerseCore", "HoleStamp");
// Dependencies JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.HoleStamp
class CORDL_TYPE HoleStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field filterSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field holeShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_holeShader, put=setStaticF_holeShader)) ::UnityW<::UnityEngine::Shader>  holeShader;

/// @brief Field material, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHoleModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHoleStamp, addr 0x1814421c0, size 0x320, virtual true, abstract: false, final true
inline void ApplyHoleStamp(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HoleData*  md, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1814424e0, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x1814424f0, size 0x150, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method Initialize, addr 0x181442640, size 0x140, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method IsValidHoleStamp, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool IsValidHoleStamp() ;

/// @brief Method NeedCurvatureMap, addr 0x181442780, size 0x30, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0x1814427b0, size 0x20, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

static inline ::JBooth::MicroVerseCore::HoleStamp* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181408400, size 0x100, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x1814427d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_holeShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IHoleModifier"
constexpr ::JBooth::MicroVerseCore::IHoleModifier* i___JBooth__MicroVerseCore__IHoleModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

static inline void setStaticF_holeShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoleStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoleStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HoleStamp(HoleStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoleStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoleStamp(HoleStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18038};

/// @brief Field filterSet, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field material, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HoleStamp, ___filterSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleStamp, ___material) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HoleStamp) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
