#pragma once
// IWYU pragma private; include "Rewired/Utils/Platforms/Windows/Main.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Main)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Platforms::Windows {
class Main;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Platforms::Windows::Main*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Platforms::Windows::Main*, "Rewired.Utils.Platforms.Windows", "Main");
// Dependencies System.Object
namespace Rewired::Utils::Platforms::Windows {
// Is value type: false
// CS Name: Rewired.Utils.Platforms.Windows.Main
class CORDL_TYPE Main : public ::System::Object {
public:
// Declarations
/// @brief Method GetPlatformInitializer, addr 0x181a315e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* GetPlatformInitializer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Main() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Main", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Main(Main && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Main", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Main(Main const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Platforms::Windows::Main) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Platforms::Windows
