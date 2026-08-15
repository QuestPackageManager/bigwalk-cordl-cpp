#pragma once
// IWYU pragma private; include "GlobalNamespace/BiomeRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BiomeRegion)
namespace GlobalNamespace {
class FlatSpline;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BiomeRegion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BiomeRegion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiomeRegion*, "", "BiomeRegion");
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BiomeRegion
class CORDL_TYPE BiomeRegion : public ::System::Object {
public:
// Declarations
/// @brief Field BiomeName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BiomeName, put=__cordl_internal_set_BiomeName)) ::StringW  BiomeName;

/// @brief Field FlatSplines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FlatSplines, put=__cordl_internal_set_FlatSplines)) ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*  FlatSplines;

/// @brief Field GUIColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_GUIColor, put=__cordl_internal_set_GUIColor)) ::UnityEngine::Color  GUIColor;

/// @brief Method GetHashCode, addr 0x180323940, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::GlobalNamespace::BiomeRegion* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BiomeName() const;

constexpr ::StringW& __cordl_internal_get_BiomeName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>* const& __cordl_internal_get_FlatSplines() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*& __cordl_internal_get_FlatSplines() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_GUIColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_GUIColor() ;

constexpr void __cordl_internal_set_BiomeName(::StringW  value) ;

constexpr void __cordl_internal_set_FlatSplines(::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*  value) ;

constexpr void __cordl_internal_set_GUIColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x180323950, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BiomeRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BiomeRegion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BiomeRegion(BiomeRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BiomeRegion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BiomeRegion(BiomeRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4789};

/// @brief Field GUIColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___GUIColor;

/// @brief Field BiomeName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___BiomeName;

/// @brief Field FlatSplines, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*  ___FlatSplines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BiomeRegion, ___GUIColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiomeRegion, ___BiomeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiomeRegion, ___FlatSplines) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BiomeRegion) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
