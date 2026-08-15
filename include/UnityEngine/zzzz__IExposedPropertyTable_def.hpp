#pragma once
// IWYU pragma private; include "UnityEngine/IExposedPropertyTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExposedPropertyTable)
// Forward declare root types
namespace UnityEngine {
class IExposedPropertyTable;
}
// Write type traits
MARK_REF_T(::UnityEngine::IExposedPropertyTable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
// Dependencies 
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IExposedPropertyTable
class CORDL_TYPE IExposedPropertyTable {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IExposedPropertyTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExposedPropertyTable(IExposedPropertyTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
