#pragma once
// IWYU pragma private; include "Rewired/PlatformInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformInitializer)
namespace Rewired::Data {
class IConfigVars_Internal;
}
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class PlatformInitializer;
}
// Write type traits
MARK_REF_T(::Rewired::PlatformInitializer*);
DEFINE_IL2CPP_CLASS(::Rewired::PlatformInitializer*, "Rewired", "PlatformInitializer");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlatformInitializer
class CORDL_TYPE PlatformInitializer : public ::System::Object {
public:
// Declarations
/// @brief Method CreateTool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IElementIdentifierTool* CreateTool(::StringW  inputSourceString) ;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Initialize(::Rewired::Data::IConfigVars_Internal*  configVars) ;

static inline ::Rewired::PlatformInitializer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInitializer(PlatformInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInitializer(PlatformInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlatformInitializer) == 0x10, "Size mismatch!");

} // namespace end def Rewired
