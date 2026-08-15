#pragma once
// IWYU pragma private; include "Enviro/EnviroDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroDefault)
// Forward declare root types
namespace Enviro {
class EnviroDefault;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroDefault*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroDefault*, "Enviro", "EnviroDefault");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroDefault
class CORDL_TYPE EnviroDefault : public ::System::Object {
public:
// Declarations
static inline ::Enviro::EnviroDefault* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroDefault", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroDefault(EnviroDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroDefault", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroDefault(EnviroDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroDefault) == 0x10, "Size mismatch!");

} // namespace end def Enviro
