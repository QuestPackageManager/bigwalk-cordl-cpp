#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineRelativeTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineRelativeTransform)
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class SplineRelativeTransform;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::SplineRelativeTransform*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SplineRelativeTransform*, "JBooth.MicroVerseCore", "SplineRelativeTransform");
// Dependencies Unity.Mathematics.float3, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SplineRelativeTransform
class CORDL_TYPE SplineRelativeTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field T, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_T, put=__cordl_internal_set_T)) float_t  T;

/// @brief Field keepUpright, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepUpright, put=__cordl_internal_set_keepUpright)) bool  keepUpright;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::Unity::Mathematics::float3  offset;

/// @brief Field rotOffset, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotOffset, put=__cordl_internal_set_rotOffset)) ::UnityEngine::Quaternion  rotOffset;

/// @brief Field splineContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineContainer, put=__cordl_internal_set_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

/// @brief Method CaptureOffset, addr 0x1814239a0, size 0x7c0, virtual false, abstract: false, final false
inline void CaptureOffset() ;

static inline ::JBooth::MicroVerseCore::SplineRelativeTransform* New_ctor() ;

/// @brief Method Refresh, addr 0x181424160, size 0x7a0, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr float_t const& __cordl_internal_get_T() const;

constexpr float_t& __cordl_internal_get_T() ;

constexpr bool const& __cordl_internal_get_keepUpright() const;

constexpr bool& __cordl_internal_get_keepUpright() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_offset() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get_offset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotOffset() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_splineContainer() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_splineContainer() ;

constexpr void __cordl_internal_set_T(float_t  value) ;

constexpr void __cordl_internal_set_keepUpright(bool  value) ;

constexpr void __cordl_internal_set_offset(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_rotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineRelativeTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineRelativeTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineRelativeTransform(SplineRelativeTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineRelativeTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineRelativeTransform(SplineRelativeTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17963};

/// @brief Field splineContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___splineContainer;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ___offset;

/// @brief Field rotOffset, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotOffset;

/// @brief Field T, offset: 0x44, size: 0x4, def value: None
 float_t  ___T;

/// @brief Field keepUpright, offset: 0x48, size: 0x1, def value: None
 bool  ___keepUpright;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SplineRelativeTransform, ___splineContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRelativeTransform, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRelativeTransform, ___rotOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRelativeTransform, ___T) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SplineRelativeTransform, ___keepUpright) == 0x48, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SplineRelativeTransform) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
