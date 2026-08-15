#pragma once
// IWYU pragma private; include "Mirror/SpatialHashingInterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Grid2D_1_def.hpp"
#include "Mirror/zzzz__InterestManagement_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialHashingInterestManagement)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
struct SpatialHashingInterestManagement_CheckMethod;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror {
struct SpatialHashingInterestManagement_CheckMethod;
}
namespace Mirror {
class SpatialHashingInterestManagement;
}
// Write type traits
MARK_VAL_T(::Mirror::SpatialHashingInterestManagement_CheckMethod);
MARK_REF_T(::Mirror::SpatialHashingInterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::SpatialHashingInterestManagement_CheckMethod, "Mirror", "SpatialHashingInterestManagement/CheckMethod");
DEFINE_IL2CPP_CLASS(::Mirror::SpatialHashingInterestManagement*, "Mirror", "SpatialHashingInterestManagement");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SpatialHashingInterestManagement/CheckMethod
struct CORDL_TYPE SpatialHashingInterestManagement_CheckMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpatialHashingInterestManagement_CheckMethod_Unwrapped
enum struct __SpatialHashingInterestManagement_CheckMethod_Unwrapped : int32_t {
__E_XZ_FOR_3D = static_cast<int32_t>(0x0),
__E_XY_FOR_2D = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpatialHashingInterestManagement_CheckMethod_Unwrapped () const noexcept {
return static_cast<__SpatialHashingInterestManagement_CheckMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpatialHashingInterestManagement_CheckMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpatialHashingInterestManagement_CheckMethod(int32_t  value__) noexcept;

/// @brief Field XY_FOR_2D value: I32(1)
static ::Mirror::SpatialHashingInterestManagement_CheckMethod const XY_FOR_2D;

/// @brief Field XZ_FOR_3D value: I32(0)
static ::Mirror::SpatialHashingInterestManagement_CheckMethod const XZ_FOR_3D;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SpatialHashingInterestManagement_CheckMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::SpatialHashingInterestManagement_CheckMethod) == 0x4, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.Grid2D`1<T>, Mirror.InterestManagement, Mirror.SpatialHashingInterestManagement::CheckMethod
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SpatialHashingInterestManagement
class CORDL_TYPE SpatialHashingInterestManagement : public ::Mirror::InterestManagement {
public:
// Declarations
using CheckMethod = ::Mirror::SpatialHashingInterestManagement_CheckMethod;

/// @brief Field checkMethod, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkMethod, put=__cordl_internal_set_checkMethod)) ::Mirror::SpatialHashingInterestManagement_CheckMethod  checkMethod;

/// @brief Field grid, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_grid, put=__cordl_internal_set_grid)) ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>  grid;

/// @brief Field lastRebuildTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRebuildTime, put=__cordl_internal_set_lastRebuildTime)) double_t  lastRebuildTime;

/// @brief Field rebuildInterval, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rebuildInterval, put=__cordl_internal_set_rebuildInterval)) float_t  rebuildInterval;

 __declspec(property(get=get_resolution)) int32_t  resolution;

/// @brief Field showSlider, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSlider, put=__cordl_internal_set_showSlider)) bool  showSlider;

/// @brief Field visRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_visRange, put=__cordl_internal_set_visRange)) int32_t  visRange;

static inline ::Mirror::SpatialHashingInterestManagement* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0x18152ea90, size 0x1b0, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnRebuildObservers, addr 0x18152ec40, size 0xe0, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method ProjectToGrid, addr 0x18152ed20, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int ProjectToGrid(::UnityEngine::Vector3  position) ;

/// @brief Method Reset, addr 0x18152ed90, size 0x50, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x18152ede0, size 0x210, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod const& __cordl_internal_get_checkMethod() const;

constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod& __cordl_internal_get_checkMethod() ;

constexpr ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*> const& __cordl_internal_get_grid() const;

constexpr ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>& __cordl_internal_get_grid() ;

constexpr double_t const& __cordl_internal_get_lastRebuildTime() const;

constexpr double_t& __cordl_internal_get_lastRebuildTime() ;

constexpr float_t const& __cordl_internal_get_rebuildInterval() const;

constexpr float_t& __cordl_internal_get_rebuildInterval() ;

constexpr bool const& __cordl_internal_get_showSlider() const;

constexpr bool& __cordl_internal_get_showSlider() ;

constexpr int32_t const& __cordl_internal_get_visRange() const;

constexpr int32_t& __cordl_internal_get_visRange() ;

constexpr void __cordl_internal_set_checkMethod(::Mirror::SpatialHashingInterestManagement_CheckMethod  value) ;

constexpr void __cordl_internal_set_grid(::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>  value) ;

constexpr void __cordl_internal_set_lastRebuildTime(double_t  value) ;

constexpr void __cordl_internal_set_rebuildInterval(float_t  value) ;

constexpr void __cordl_internal_set_showSlider(bool  value) ;

constexpr void __cordl_internal_set_visRange(int32_t  value) ;

/// @brief Method .ctor, addr 0x18152eff0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_resolution, addr 0x18152f050, size 0x10, virtual false, abstract: false, final false
inline int32_t get_resolution() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialHashingInterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialHashingInterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialHashingInterestManagement(SpatialHashingInterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialHashingInterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialHashingInterestManagement(SpatialHashingInterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19232};

/// @brief Field visRange, offset: 0x28, size: 0x4, def value: None
 int32_t  ___visRange;

/// @brief Field rebuildInterval, offset: 0x2c, size: 0x4, def value: None
 float_t  ___rebuildInterval;

/// @brief Field lastRebuildTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___lastRebuildTime;

/// @brief Field checkMethod, offset: 0x38, size: 0x4, def value: None
 ::Mirror::SpatialHashingInterestManagement_CheckMethod  ___checkMethod;

/// @brief Field showSlider, offset: 0x3c, size: 0x1, def value: None
 bool  ___showSlider;

/// @brief Field grid, offset: 0x40, size: 0x10, def value: None
 ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>  ___grid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___visRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___rebuildInterval) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___lastRebuildTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___checkMethod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___showSlider) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpatialHashingInterestManagement, ___grid) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mirror::SpatialHashingInterestManagement) == 0x50, "Size mismatch!");

} // namespace end def Mirror
