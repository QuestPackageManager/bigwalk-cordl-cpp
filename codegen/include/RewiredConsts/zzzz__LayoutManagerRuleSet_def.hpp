#pragma once
// IWYU pragma private; include "RewiredConsts/LayoutManagerRuleSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutManagerRuleSet)
// Forward declare root types
namespace RewiredConsts {
class LayoutManagerRuleSet;
}
// Write type traits
MARK_REF_T(::RewiredConsts::LayoutManagerRuleSet*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::LayoutManagerRuleSet*, "RewiredConsts", "LayoutManagerRuleSet");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.LayoutManagerRuleSet
class CORDL_TYPE LayoutManagerRuleSet : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayoutManagerRuleSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayoutManagerRuleSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutManagerRuleSet(LayoutManagerRuleSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutManagerRuleSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutManagerRuleSet(LayoutManagerRuleSet const& ) = delete;

/// @brief Field SwitchDefault offset 0xffffffff size 0x4
static constexpr int32_t  SwitchDefault{static_cast<int32_t>(0x2)};

/// @brief Field SwitchMouseL offset 0xffffffff size 0x4
static constexpr int32_t  SwitchMouseL{static_cast<int32_t>(0x1)};

/// @brief Field SwitchMouseR offset 0xffffffff size 0x4
static constexpr int32_t  SwitchMouseR{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::LayoutManagerRuleSet) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
