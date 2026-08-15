#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineSampleStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EmitterInfo_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineSampleStruct)
namespace GlobalNamespace {
class BiomeRegion;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineSampleStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineSampleStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineSampleStruct, "", "SplineSampleStruct");
// Dependencies EmitterInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: SplineSampleStruct
struct CORDL_TYPE SplineSampleStruct {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>*() ;

/// @brief Method Equals, addr 0x1803297c0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180329830, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SplineSampleStruct  other) ;

/// @brief Method GetHashCode, addr 0x180329890, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>* i___System__IEquatable_1___GlobalNamespace__SplineSampleStruct_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineSampleStruct() ;

// Ctor Parameters [CppParam { name: "InSpline", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Biome", ty: "::GlobalNamespace::BiomeRegion*", modifiers: "", def_value: None }, CppParam { name: "SplineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ClosestPoint", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "SidePoint1", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "SidePoint2", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: None }, CppParam { name: "VegetationIntensity", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineSampleStruct(bool  InSpline, ::GlobalNamespace::BiomeRegion*  Biome, int32_t  SplineIndex, ::GlobalNamespace::EmitterInfo  ClosestPoint, ::GlobalNamespace::EmitterInfo  SidePoint1, ::GlobalNamespace::EmitterInfo  SidePoint2, float_t  VegetationIntensity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field InSpline, offset: 0x0, size: 0x1, def value: None
 bool  InSpline;

/// @brief Field Biome, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::BiomeRegion*  Biome;

/// @brief Field SplineIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  SplineIndex;

/// @brief Field ClosestPoint, offset: 0x14, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  ClosestPoint;

/// @brief Field SidePoint1, offset: 0x24, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  SidePoint1;

/// @brief Field SidePoint2, offset: 0x34, size: 0x10, def value: None
 ::GlobalNamespace::EmitterInfo  SidePoint2;

/// @brief Field VegetationIntensity, offset: 0x44, size: 0x4, def value: None
 float_t  VegetationIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, InSpline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, Biome) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, SplineIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, ClosestPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, SidePoint1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, SidePoint2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSampleStruct, VegetationIntensity) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineSampleStruct) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
