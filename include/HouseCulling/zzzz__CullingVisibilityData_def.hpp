#pragma once
// IWYU pragma private; include "HouseCulling/CullingVisibilityData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingVisibilityData)
namespace HouseCulling {
class CullingRegion;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace HouseCulling {
class CullingVisibilityData;
}
// Write type traits
MARK_REF_T(::HouseCulling::CullingVisibilityData*);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingVisibilityData*, "HouseCulling", "CullingVisibilityData");
// Dependencies HouseCulling.CullingRegion, UnityEngine.ScriptableObject
namespace HouseCulling {
// Is value type: false
// CS Name: HouseCulling.CullingVisibilityData
class CORDL_TYPE CullingVisibilityData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field allRegions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_allRegions, put=__cordl_internal_set_allRegions)) ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  allRegions;

/// @brief Field dataMatrix, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataMatrix, put=__cordl_internal_set_dataMatrix)) ::ArrayW<bool>  dataMatrix;

/// @brief Method CheckVisiblity, addr 0x1803bf290, size 0xc0, virtual false, abstract: false, final false
inline bool CheckVisiblity(::HouseCulling::CullingRegion*  a, ::HouseCulling::CullingRegion*  b) ;

/// @brief Method GetFromMatrix, addr 0x1803bf350, size 0x40, virtual false, abstract: false, final false
inline bool GetFromMatrix(int32_t  indexA, int32_t  indexB) ;

/// @brief Method GetIndex, addr 0x1803bf390, size 0xb0, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetIndex(::HouseCulling::CullingRegion*  region) ;

/// @brief Method GetMatrixIndex, addr 0x1803bf440, size 0x20, virtual false, abstract: false, final false
inline int32_t GetMatrixIndex(int32_t  indexA, int32_t  indexB) ;

static inline ::HouseCulling::CullingVisibilityData* New_ctor() ;

/// @brief Method SetMatrix, addr 0x1803bf460, size 0x40, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  indexA, int32_t  indexB, bool  value) ;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& __cordl_internal_get_allRegions() const;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& __cordl_internal_get_allRegions() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_dataMatrix() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_dataMatrix() ;

constexpr void __cordl_internal_set_allRegions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value) ;

constexpr void __cordl_internal_set_dataMatrix(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingVisibilityData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingVisibilityData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingVisibilityData(CullingVisibilityData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingVisibilityData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingVisibilityData(CullingVisibilityData const& ) = delete;

/// @brief Field RegionCount offset 0xffffffff size 0x4
static constexpr int32_t  RegionCount{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5788};

/// @brief Field allRegions, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  ___allRegions;

/// @brief Field dataMatrix, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___dataMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingVisibilityData, ___allRegions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingVisibilityData, ___dataMatrix) == 0x20, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingVisibilityData) == 0x28, "Size mismatch!");

} // namespace end def HouseCulling
