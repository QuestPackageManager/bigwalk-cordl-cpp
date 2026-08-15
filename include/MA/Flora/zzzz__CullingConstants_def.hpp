#pragma once
// IWYU pragma private; include "MA/Flora/CullingConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingConstants)
// Forward declare root types
namespace MA::Flora {
class CullingConstants;
}
// Write type traits
MARK_REF_T(::MA::Flora::CullingConstants*);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingConstants*, "MA.Flora", "CullingConstants");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingConstants
class CORDL_TYPE CullingConstants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingConstants(CullingConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingConstants(CullingConstants const& ) = delete;

/// @brief Field MaxLodLevelCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxLodLevelCount{static_cast<int32_t>(0x8)};

/// @brief Field MaxShadowSplitCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxShadowSplitCount{static_cast<int32_t>(0x4)};

/// @brief Field MaxVisibleInstancesPerDrawList offset 0xffffffff size 0x4
static constexpr int32_t  MaxVisibleInstancesPerDrawList{static_cast<int32_t>(0xffffff)};

/// @brief Field MaxXrSubviewCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxXrSubviewCount{static_cast<int32_t>(0x2)};

/// @brief Field ReservedLodFadeMask offset 0xffffffff size 0x4
static constexpr int32_t  ReservedLodFadeMask{static_cast<int32_t>(0xff000000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingConstants) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
