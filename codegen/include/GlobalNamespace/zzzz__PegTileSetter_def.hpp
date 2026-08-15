#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PegTileSetter)
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
class Prop;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileSetter*, "", "PegTileSetter");
// Dependencies PegTileSet, PropGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileSetter
class CORDL_TYPE PegTileSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dataSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataSet, put=__cordl_internal_set_dataSet)) ::UnityW<::GlobalNamespace::PegTileDataSet>  dataSet;

/// @brief Field overrides, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrides, put=__cordl_internal_set_overrides)) ::ArrayW<::GlobalNamespace::PropGroup>  overrides;

/// @brief Field props, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_props, put=__cordl_internal_set_props)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  props;

/// @brief Field tileSet, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileSet, put=__cordl_internal_set_tileSet)) ::GlobalNamespace::PegTileSet  tileSet;

static inline ::GlobalNamespace::PegTileSetter* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& __cordl_internal_get_dataSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& __cordl_internal_get_dataSet() ;

constexpr ::ArrayW<::GlobalNamespace::PropGroup> const& __cordl_internal_get_overrides() const;

constexpr ::ArrayW<::GlobalNamespace::PropGroup>& __cordl_internal_get_overrides() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_props() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_props() ;

constexpr ::GlobalNamespace::PegTileSet const& __cordl_internal_get_tileSet() const;

constexpr ::GlobalNamespace::PegTileSet& __cordl_internal_get_tileSet() ;

constexpr void __cordl_internal_set_dataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value) ;

constexpr void __cordl_internal_set_overrides(::ArrayW<::GlobalNamespace::PropGroup>  value) ;

constexpr void __cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_tileSet(::GlobalNamespace::PegTileSet  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileSetter(PegTileSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileSetter(PegTileSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4912};

/// @brief Field dataSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileDataSet>  ___dataSet;

/// @brief Field tileSet, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PegTileSet  ___tileSet;

/// @brief Field overrides, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroup>  ___overrides;

/// @brief Field props, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  ___props;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileSetter, ___dataSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSetter, ___tileSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSetter, ___overrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSetter, ___props) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileSetter) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
