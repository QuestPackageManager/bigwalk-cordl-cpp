#pragma once
// IWYU pragma private; include "Rewired/Utils/Factory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Factory)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils {
class Factory;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Factory*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Factory*, "Rewired.Utils", "Factory");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.Factory
class CORDL_TYPE Factory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateInstance, addr 0x18192c170, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Object* CreateInstance(::System::Type*  type, ::ArrayW<::System::Object*>  args) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Factory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Factory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Factory(Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Factory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Factory(Factory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Factory) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
