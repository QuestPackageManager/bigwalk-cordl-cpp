#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainAligner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainAligner)
namespace GlobalNamespace {
struct TerrainAligner_AlignmentMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TerrainAligner_AlignmentMode;
}
namespace GlobalNamespace {
class TerrainAligner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TerrainAligner_AlignmentMode);
MARK_REF_T(::GlobalNamespace::TerrainAligner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainAligner_AlignmentMode, "", "TerrainAligner/AlignmentMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainAligner*, "", "TerrainAligner");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerrainAligner/AlignmentMode
struct CORDL_TYPE TerrainAligner_AlignmentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainAligner_AlignmentMode_Unwrapped
enum struct __TerrainAligner_AlignmentMode_Unwrapped : int32_t {
__E_Terrain = static_cast<int32_t>(0x0),
__E_Raycast = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainAligner_AlignmentMode_Unwrapped () const noexcept {
return static_cast<__TerrainAligner_AlignmentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainAligner_AlignmentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainAligner_AlignmentMode(int32_t  value__) noexcept;

/// @brief Field Raycast value: I32(1)
static ::GlobalNamespace::TerrainAligner_AlignmentMode const Raycast;

/// @brief Field Terrain value: I32(0)
static ::GlobalNamespace::TerrainAligner_AlignmentMode const Terrain;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4923};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainAligner_AlignmentMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainAligner_AlignmentMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies TerrainAligner::AlignmentMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerrainAligner
class CORDL_TYPE TerrainAligner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AlignmentMode = ::GlobalNamespace::TerrainAligner_AlignmentMode;

/// @brief Field alignmentMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignmentMode, put=__cordl_internal_set_alignmentMode)) ::GlobalNamespace::TerrainAligner_AlignmentMode  alignmentMode;

/// @brief Field dontAlign, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontAlign, put=__cordl_internal_set_dontAlign)) bool  dontAlign;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

 __declspec(property(get=get_samplePosition)) ::UnityEngine::Vector3  samplePosition;

static inline ::GlobalNamespace::TerrainAligner* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803f1f90, size 0x90, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode const& __cordl_internal_get_alignmentMode() const;

constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode& __cordl_internal_get_alignmentMode() ;

constexpr bool const& __cordl_internal_get_dontAlign() const;

constexpr bool& __cordl_internal_get_dontAlign() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr void __cordl_internal_set_alignmentMode(::GlobalNamespace::TerrainAligner_AlignmentMode  value) ;

constexpr void __cordl_internal_set_dontAlign(bool  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_samplePosition, addr 0x1803f2020, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_samplePosition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainAligner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainAligner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainAligner(TerrainAligner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainAligner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainAligner(TerrainAligner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4924};

/// @brief Field dontAlign, offset: 0x20, size: 0x1, def value: None
 bool  ___dontAlign;

/// @brief Field alignmentMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::TerrainAligner_AlignmentMode  ___alignmentMode;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainAligner, ___dontAlign) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainAligner, ___alignmentMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainAligner, ___offset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainAligner) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
