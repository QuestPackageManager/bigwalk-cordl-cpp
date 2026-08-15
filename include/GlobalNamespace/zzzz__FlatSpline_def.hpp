#pragma once
// IWYU pragma private; include "GlobalNamespace/FlatSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FlatSpline)
// Forward declare root types
namespace GlobalNamespace {
class FlatSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlatSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlatSpline*, "", "FlatSpline");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlatSpline
class CORDL_TYPE FlatSpline : public ::System::Object {
public:
// Declarations
/// @brief Field Points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Points, put=__cordl_internal_set_Points)) ::ArrayW<::UnityEngine::Vector3>  Points;

static inline ::GlobalNamespace::FlatSpline* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_Points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_Points() ;

constexpr void __cordl_internal_set_Points(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlatSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlatSpline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlatSpline(FlatSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlatSpline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlatSpline(FlatSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4788};

/// @brief Field Points, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___Points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlatSpline, ___Points) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlatSpline) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
