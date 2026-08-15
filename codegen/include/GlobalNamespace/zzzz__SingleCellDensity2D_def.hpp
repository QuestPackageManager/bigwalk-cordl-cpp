#pragma once
// IWYU pragma private; include "GlobalNamespace/SingleCellDensity2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SingleCellDensity2D)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class SingleCellDensity2D;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SingleCellDensity2D*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SingleCellDensity2D*, "", "SingleCellDensity2D");
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: SingleCellDensity2D
class CORDL_TYPE SingleCellDensity2D : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CellSize, put=set_CellSize)) float_t  CellSize;

 __declspec(property(get=get_Origin, put=set_Origin)) ::UnityEngine::Vector2  Origin;

/// @brief Field <CellSize>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__CellSize_k__BackingField, put=__cordl_internal_set__CellSize_k__BackingField)) float_t  _CellSize_k__BackingField;

/// @brief Field <Origin>k__BackingField, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get__Origin_k__BackingField, put=__cordl_internal_set__Origin_k__BackingField)) ::UnityEngine::Vector2  _Origin_k__BackingField;

/// @brief Field _counts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__counts, put=__cordl_internal_set__counts)) ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  _counts;

/// @brief Method AddSample, addr 0x1803463e0, size 0xb0, virtual false, abstract: false, final false
inline void AddSample(::UnityEngine::Vector2  sample) ;

/// @brief Method BuildFromSamples, addr 0x180346490, size 0x200, virtual false, abstract: false, final false
inline void BuildFromSamples(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  samples) ;

/// @brief Method Clear, addr 0x180346690, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DensitiesForAll, addr 0x1803466b0, size 0x270, virtual false, abstract: false, final false
inline void DensitiesForAll(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  testPoints, ::System::Collections::Generic::IList_1<int32_t>*  outDensities) ;

/// @brief Method DensityAt, addr 0x180346920, size 0x90, virtual false, abstract: false, final false
inline int32_t DensityAt(::UnityEngine::Vector2  testPoint) ;

/// @brief Method Key, addr 0x1803469b0, size 0x10, virtual false, abstract: false, final false
static inline int64_t Key(int32_t  ix, int32_t  iy) ;

static inline ::GlobalNamespace::SingleCellDensity2D* New_ctor(float_t  cellsize, ::UnityEngine::Vector2  origin) ;

/// @brief Method ResetGrid, addr 0x1803469c0, size 0x50, virtual false, abstract: false, final false
inline void ResetGrid(float_t  cellsize, ::UnityEngine::Vector2  origin) ;

constexpr float_t const& __cordl_internal_get__CellSize_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CellSize_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Origin_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Origin_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* const& __cordl_internal_get__counts() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*& __cordl_internal_get__counts() ;

constexpr void __cordl_internal_set__CellSize_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__counts(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x180346a10, size 0x70, virtual false, abstract: false, final false
inline void _ctor(float_t  cellsize, ::UnityEngine::Vector2  origin) ;

/// @brief Method get_CellSize, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_CellSize() ;

/// @brief Method get_Origin, addr 0x180346a90, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Origin() ;

/// @brief Method set_CellSize, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void set_CellSize(float_t  value) ;

/// @brief Method set_Origin, addr 0x180346ab0, size 0x10, virtual false, abstract: false, final false
inline void set_Origin(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleCellDensity2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleCellDensity2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleCellDensity2D(SingleCellDensity2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleCellDensity2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleCellDensity2D(SingleCellDensity2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4813};

/// @brief Field <CellSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____CellSize_k__BackingField;

/// @brief Field <Origin>k__BackingField, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Origin_k__BackingField;

/// @brief Field _counts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  ____counts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SingleCellDensity2D, ____CellSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SingleCellDensity2D, ____Origin_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SingleCellDensity2D, ____counts) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SingleCellDensity2D) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
