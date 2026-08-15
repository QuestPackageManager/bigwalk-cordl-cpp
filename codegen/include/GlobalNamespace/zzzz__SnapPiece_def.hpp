#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapPiece.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapPiece)
namespace GlobalNamespace {
class SnapAnchor;
}
namespace GlobalNamespace {
struct SnapPiece_SnapAnchorData;
}
// Forward declare root types
namespace GlobalNamespace {
class SnapPiece;
}
namespace GlobalNamespace {
struct SnapPiece_SnapAnchorData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnapPiece*);
MARK_VAL_T(::GlobalNamespace::SnapPiece_SnapAnchorData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapPiece*, "", "SnapPiece");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapPiece_SnapAnchorData, "", "SnapPiece/SnapAnchorData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: SnapPiece/SnapAnchorData
struct CORDL_TYPE SnapPiece_SnapAnchorData {
public:
// Declarations
 __declspec(property(get=get_targetAnchor)) ::UnityW<::GlobalNamespace::SnapAnchor>  targetAnchor;

/// @brief Method get_targetAnchor, addr 0x1803f0510, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SnapAnchor> get_targetAnchor() ;

// Ctor Parameters []
// @brief default ctor
constexpr SnapPiece_SnapAnchorData() ;

// Ctor Parameters [CppParam { name: "snapAnchor", ty: "::UnityW<::GlobalNamespace::SnapAnchor>", modifiers: "", def_value: None }, CppParam { name: "targetPiece", ty: "::UnityW<::GlobalNamespace::SnapPiece>", modifiers: "", def_value: None }, CppParam { name: "targetAnchorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr SnapPiece_SnapAnchorData(::UnityW<::GlobalNamespace::SnapAnchor>  snapAnchor, ::UnityW<::GlobalNamespace::SnapPiece>  targetPiece, int32_t  targetAnchorIndex, ::UnityEngine::Vector3  rotationOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4932};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field snapAnchor, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnapAnchor>  snapAnchor;

/// @brief Field targetPiece, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnapPiece>  targetPiece;

/// @brief Field targetAnchorIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  targetAnchorIndex;

/// @brief Field rotationOffset, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotationOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapPiece_SnapAnchorData, snapAnchor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapPiece_SnapAnchorData, targetPiece) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapPiece_SnapAnchorData, targetAnchorIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapPiece_SnapAnchorData, rotationOffset) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapPiece_SnapAnchorData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SnapPiece::SnapAnchorData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnapPiece
class CORDL_TYPE SnapPiece : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SnapAnchorData = ::GlobalNamespace::SnapPiece_SnapAnchorData;

/// @brief Field locked, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_locked, put=__cordl_internal_set_locked)) bool  locked;

/// @brief Field snapAnchorDatas, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapAnchorDatas, put=__cordl_internal_set_snapAnchorDatas)) ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>  snapAnchorDatas;

static inline ::GlobalNamespace::SnapPiece* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803f0620, size 0x340, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr bool const& __cordl_internal_get_locked() const;

constexpr bool& __cordl_internal_get_locked() ;

constexpr ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData> const& __cordl_internal_get_snapAnchorDatas() const;

constexpr ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>& __cordl_internal_get_snapAnchorDatas() ;

constexpr void __cordl_internal_set_locked(bool  value) ;

constexpr void __cordl_internal_set_snapAnchorDatas(::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapPiece() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapPiece", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapPiece(SnapPiece && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapPiece", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapPiece(SnapPiece const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4933};

/// @brief Field locked, offset: 0x20, size: 0x1, def value: None
 bool  ___locked;

/// @brief Field snapAnchorDatas, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>  ___snapAnchorDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapPiece, ___locked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapPiece, ___snapAnchorDatas) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapPiece) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
