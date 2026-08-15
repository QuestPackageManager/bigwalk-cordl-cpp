#pragma once
// IWYU pragma private; include "GlobalNamespace/EosLogsDisabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EosLogsDisabler)
// Forward declare root types
namespace GlobalNamespace {
class EosLogsDisabler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EosLogsDisabler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EosLogsDisabler*, "", "EosLogsDisabler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EosLogsDisabler
class CORDL_TYPE EosLogsDisabler : public ::System::Object {
public:
// Declarations
/// @brief Method DisableEosLogging, addr 0x18037dd90, size 0x10, virtual false, abstract: false, final false
static inline void DisableEosLogging() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EosLogsDisabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EosLogsDisabler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EosLogsDisabler(EosLogsDisabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EosLogsDisabler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EosLogsDisabler(EosLogsDisabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EosLogsDisabler) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
