#pragma once
// IWYU pragma private; include "MA/Flora/SystemSettingsResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemSettingsResolver)
namespace MA::Flora {
class FloraRuntimeSettings;
}
namespace MA::Flora {
struct ResolvedSystemSettings;
}
// Forward declare root types
namespace MA::Flora {
class SystemSettingsResolver;
}
// Write type traits
MARK_REF_T(::MA::Flora::SystemSettingsResolver*);
DEFINE_IL2CPP_CLASS(::MA::Flora::SystemSettingsResolver*, "MA.Flora", "SystemSettingsResolver");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.SystemSettingsResolver
class CORDL_TYPE SystemSettingsResolver : public ::System::Object {
public:
// Declarations
/// @brief Method EvaluateDetailStreamingResponsiveness, addr 0x1814f4180, size 0x40, virtual false, abstract: false, final false
static inline float_t EvaluateDetailStreamingResponsiveness(float_t  responsiveness) ;

/// @brief Method ResolveDetailPatchLayerBudget, addr 0x1814f41c0, size 0x70, virtual false, abstract: false, final false
static inline int32_t ResolveDetailPatchLayerBudget(float_t  responsiveness) ;

/// @brief Method ResolveDetailStructuralBudget, addr 0x1814f4230, size 0x70, virtual false, abstract: false, final false
static inline int32_t ResolveDetailStructuralBudget(float_t  responsiveness) ;

/// @brief Method ResolveSettings, addr 0x1814f42a0, size 0x290, virtual false, abstract: false, final false
static inline ::MA::Flora::ResolvedSystemSettings ResolveSettings(::MA::Flora::FloraRuntimeSettings*  runtimeSettings) ;

/// @brief Method get_DisableInstanceRenderersInEditMode, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool get_DisableInstanceRenderersInEditMode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemSettingsResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemSettingsResolver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemSettingsResolver(SystemSettingsResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemSettingsResolver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemSettingsResolver(SystemSettingsResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13304};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::SystemSettingsResolver) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
