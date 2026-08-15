#pragma once
// IWYU pragma private; include "UnityEngine/Subsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Subsystem)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class Subsystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::Subsystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Subsystem*, "UnityEngine", "Subsystem");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Subsystem
class CORDL_TYPE Subsystem : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::ISubsystem"
constexpr operator  ::UnityEngine::ISubsystem*() noexcept;

static inline ::UnityEngine::Subsystem* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISubsystem"
constexpr ::UnityEngine::ISubsystem* i___UnityEngine__ISubsystem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Subsystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Subsystem(Subsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Subsystem(Subsystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Subsystem) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
