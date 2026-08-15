#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeakPostureMask_def.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BeakHandle)
namespace GlobalNamespace {
struct BeakPosture;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeakHandle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeakHandle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeakHandle, "", "BeakHandle");
// Dependencies BeakPosture, BeakPostureMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeakHandle
struct CORDL_TYPE BeakHandle {
public:
// Declarations
/// @brief Method DrawGizmos, addr 0x18037a4f0, size 0x40, virtual false, abstract: false, final false
inline void DrawGizmos(::GlobalNamespace::Prop*  prop) ;

/// @brief Method GetData, addr 0x18037a530, size 0x9e0, virtual false, abstract: false, final false
inline ::GlobalNamespace::BeakPosture GetData(float_t  raisedness, float_t  sittingness, float_t  headY) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeakHandle() ;

// Ctor Parameters [CppParam { name: "lowered", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: None }, CppParam { name: "raised", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: None }, CppParam { name: "sittingLoweredMask", ty: "::GlobalNamespace::BeakPostureMask", modifiers: "", def_value: None }, CppParam { name: "sittingLoweredPosture", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: None }, CppParam { name: "useSpecialUpper", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "loweredSpecialUpper", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: None }, CppParam { name: "sittingLowerAngleLimit", ty: "float_t", modifiers: "", def_value: None }]
constexpr BeakHandle(::GlobalNamespace::BeakPosture  lowered, ::GlobalNamespace::BeakPosture  raised, ::GlobalNamespace::BeakPostureMask  sittingLoweredMask, ::GlobalNamespace::BeakPosture  sittingLoweredPosture, bool  useSpecialUpper, ::GlobalNamespace::BeakPosture  loweredSpecialUpper, float_t  sittingLowerAngleLimit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x144};

/// @brief Field lowered, offset: 0x0, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  lowered;

/// @brief Field raised, offset: 0x48, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  raised;

/// @brief Field sittingLoweredMask, offset: 0x90, size: 0x1c, def value: None
 ::GlobalNamespace::BeakPostureMask  sittingLoweredMask;

/// @brief Field sittingLoweredPosture, offset: 0xac, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  sittingLoweredPosture;

/// @brief Field useSpecialUpper, offset: 0xf4, size: 0x1, def value: None
 bool  useSpecialUpper;

/// @brief Field loweredSpecialUpper, offset: 0xf8, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  loweredSpecialUpper;

/// @brief Field sittingLowerAngleLimit, offset: 0x140, size: 0x4, def value: None
 float_t  sittingLowerAngleLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeakHandle, lowered) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, raised) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, sittingLoweredMask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, sittingLoweredPosture) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, useSpecialUpper) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, loweredSpecialUpper) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakHandle, sittingLowerAngleLimit) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeakHandle) == 0x144, "Size mismatch!");

} // namespace end def GlobalNamespace
