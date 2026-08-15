#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterDepthSampleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WaterHeightPatch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterDepthSampleData)
namespace GlobalNamespace {
struct WaterDepthSampleData_GetDepthMode;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct WaterDepthSampleData_GetDepthMode;
}
namespace GlobalNamespace {
class WaterDepthSampleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WaterDepthSampleData_GetDepthMode);
MARK_REF_T(::GlobalNamespace::WaterDepthSampleData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterDepthSampleData_GetDepthMode, "", "WaterDepthSampleData/GetDepthMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterDepthSampleData*, "", "WaterDepthSampleData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WaterDepthSampleData/GetDepthMode
struct CORDL_TYPE WaterDepthSampleData_GetDepthMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterDepthSampleData_GetDepthMode_Unwrapped
enum struct __WaterDepthSampleData_GetDepthMode_Unwrapped : int32_t {
__E_Samples = static_cast<int32_t>(0x0),
__E_GPU = static_cast<int32_t>(0x1),
__E_Mixed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterDepthSampleData_GetDepthMode_Unwrapped () const noexcept {
return static_cast<__WaterDepthSampleData_GetDepthMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterDepthSampleData_GetDepthMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterDepthSampleData_GetDepthMode(int32_t  value__) noexcept;

/// @brief Field GPU value: I32(1)
static ::GlobalNamespace::WaterDepthSampleData_GetDepthMode const GPU;

/// @brief Field Mixed value: I32(2)
static ::GlobalNamespace::WaterDepthSampleData_GetDepthMode const Mixed;

/// @brief Field Samples value: I32(0)
static ::GlobalNamespace::WaterDepthSampleData_GetDepthMode const Samples;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData_GetDepthMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterDepthSampleData_GetDepthMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Collections.Generic.List`1<T>, UnityEngine.ScriptableObject, UnityEngine.Vector2Int, WaterHeightPatch
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterDepthSampleData
class CORDL_TYPE WaterDepthSampleData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using GetDepthMode = ::GlobalNamespace::WaterDepthSampleData_GetDepthMode;

 __declspec(property(get=get_BaseResolution, put=set_BaseResolution)) float_t  BaseResolution;

/// @brief Field _baseResX, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseResX, put=__cordl_internal_set__baseResX)) int32_t  _baseResX;

/// @brief Field _baseResZ, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseResZ, put=__cordl_internal_set__baseResZ)) int32_t  _baseResZ;

/// @brief Field _baseResolution, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseResolution, put=__cordl_internal_set__baseResolution)) float_t  _baseResolution;

/// @brief Field _bucketGridH, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__bucketGridH, put=__cordl_internal_set__bucketGridH)) int32_t  _bucketGridH;

/// @brief Field _bucketGridW, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__bucketGridW, put=__cordl_internal_set__bucketGridW)) int32_t  _bucketGridW;

/// @brief Field _fxScale, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__fxScale, put=__cordl_internal_set__fxScale)) float_t  _fxScale;

/// @brief Field _fzScale, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__fzScale, put=__cordl_internal_set__fzScale)) float_t  _fzScale;

/// @brief Field _patchBuckets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__patchBuckets, put=__cordl_internal_set__patchBuckets)) ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  _patchBuckets;

/// @brief Field baseWaterHeights, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseWaterHeights, put=__cordl_internal_set_baseWaterHeights)) ::ArrayW<float_t>  baseWaterHeights;

/// @brief Field oceanMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_oceanMaterial, put=__cordl_internal_set_oceanMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  oceanMaterial;

/// @brief Field patches, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_patches, put=__cordl_internal_set_patches)) ::ArrayW<::GlobalNamespace::WaterHeightPatch*>  patches;

/// @brief Field worldMax, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldMax, put=__cordl_internal_set_worldMax)) ::UnityEngine::Vector2Int  worldMax;

/// @brief Field worldMin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldMin, put=__cordl_internal_set_worldMin)) ::UnityEngine::Vector2Int  worldMin;

/// @brief Method BuildRuntimeCache, addr 0x1803f61d0, size 0x360, virtual false, abstract: false, final false
inline void BuildRuntimeCache() ;

/// @brief Method GetDepth, addr 0x1803f6530, size 0x380, virtual false, abstract: false, final false
inline float_t GetDepth(::UnityEngine::Vector3  worldPos, ::by_ref<int32_t>  patchIndex, ::by_ref<bool>  isRiver) ;

static inline ::GlobalNamespace::WaterDepthSampleData* New_ctor() ;

/// @brief Method OnEnable, addr 0x1803f68b0, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get__baseResX() const;

constexpr int32_t& __cordl_internal_get__baseResX() ;

constexpr int32_t const& __cordl_internal_get__baseResZ() const;

constexpr int32_t& __cordl_internal_get__baseResZ() ;

constexpr float_t const& __cordl_internal_get__baseResolution() const;

constexpr float_t& __cordl_internal_get__baseResolution() ;

constexpr int32_t const& __cordl_internal_get__bucketGridH() const;

constexpr int32_t& __cordl_internal_get__bucketGridH() ;

constexpr int32_t const& __cordl_internal_get__bucketGridW() const;

constexpr int32_t& __cordl_internal_get__bucketGridW() ;

constexpr float_t const& __cordl_internal_get__fxScale() const;

constexpr float_t& __cordl_internal_get__fxScale() ;

constexpr float_t const& __cordl_internal_get__fzScale() const;

constexpr float_t& __cordl_internal_get__fzScale() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__patchBuckets() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& __cordl_internal_get__patchBuckets() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_baseWaterHeights() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_baseWaterHeights() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_oceanMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_oceanMaterial() ;

constexpr ::ArrayW<::GlobalNamespace::WaterHeightPatch*> const& __cordl_internal_get_patches() const;

constexpr ::ArrayW<::GlobalNamespace::WaterHeightPatch*>& __cordl_internal_get_patches() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_worldMax() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_worldMax() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_worldMin() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_worldMin() ;

constexpr void __cordl_internal_set__baseResX(int32_t  value) ;

constexpr void __cordl_internal_set__baseResZ(int32_t  value) ;

constexpr void __cordl_internal_set__baseResolution(float_t  value) ;

constexpr void __cordl_internal_set__bucketGridH(int32_t  value) ;

constexpr void __cordl_internal_set__bucketGridW(int32_t  value) ;

constexpr void __cordl_internal_set__fxScale(float_t  value) ;

constexpr void __cordl_internal_set__fzScale(float_t  value) ;

constexpr void __cordl_internal_set__patchBuckets(::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  value) ;

constexpr void __cordl_internal_set_baseWaterHeights(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oceanMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_patches(::ArrayW<::GlobalNamespace::WaterHeightPatch*>  value) ;

constexpr void __cordl_internal_set_worldMax(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_worldMin(::UnityEngine::Vector2Int  value) ;

/// @brief Method .ctor, addr 0x1803f68c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BaseResolution, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_BaseResolution() ;

/// @brief Method set_BaseResolution, addr 0x1803f68e0, size 0x20, virtual false, abstract: false, final false
inline void set_BaseResolution(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterDepthSampleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterDepthSampleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterDepthSampleData(WaterDepthSampleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterDepthSampleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterDepthSampleData(WaterDepthSampleData const& ) = delete;

/// @brief Field BucketSize offset 0xffffffff size 0x4
static constexpr float_t  BucketSize{static_cast<float_t>(32.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4896};

/// @brief Field oceanMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___oceanMaterial;

/// @brief Field worldMin, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___worldMin;

/// @brief Field worldMax, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___worldMax;

/// @brief Field _baseResolution, offset: 0x30, size: 0x4, def value: None
 float_t  ____baseResolution;

/// @brief Field baseWaterHeights, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___baseWaterHeights;

/// @brief Field patches, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::WaterHeightPatch*>  ___patches;

/// @brief Field _patchBuckets, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  ____patchBuckets;

/// @brief Field _bucketGridW, offset: 0x50, size: 0x4, def value: None
 int32_t  ____bucketGridW;

/// @brief Field _bucketGridH, offset: 0x54, size: 0x4, def value: None
 int32_t  ____bucketGridH;

/// @brief Field _baseResX, offset: 0x58, size: 0x4, def value: None
 int32_t  ____baseResX;

/// @brief Field _baseResZ, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____baseResZ;

/// @brief Field _fxScale, offset: 0x60, size: 0x4, def value: None
 float_t  ____fxScale;

/// @brief Field _fzScale, offset: 0x64, size: 0x4, def value: None
 float_t  ____fzScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ___oceanMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ___worldMin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ___worldMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____baseResolution) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ___baseWaterHeights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ___patches) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____patchBuckets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____bucketGridW) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____bucketGridH) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____baseResX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____baseResZ) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____fxScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterDepthSampleData, ____fzScale) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterDepthSampleData) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
