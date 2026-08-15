#pragma once
// IWYU pragma private; include "Rewired/InputManagers/Initializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__PlatformInitializer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Initializer)
namespace Rewired::Data {
class IConfigVars_Internal;
}
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
namespace Rewired {
class PlatformInitializer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::InputManagers {
class Initializer;
}
// Write type traits
MARK_REF_T(::Rewired::InputManagers::Initializer*);
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::Initializer*, "Rewired.InputManagers", "Initializer");
// Dependencies Rewired.PlatformInitializer
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.Initializer
class CORDL_TYPE Initializer : public ::Rewired::PlatformInitializer {
public:
// Declarations
/// @brief Field WTWupdQtAkIzljufVSQMkZozZFVl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WTWupdQtAkIzljufVSQMkZozZFVl, put=setStaticF_WTWupdQtAkIzljufVSQMkZozZFVl)) ::Rewired::PlatformInitializer*  WTWupdQtAkIzljufVSQMkZozZFVl;

/// @brief Method CreateTool, addr 0x1819f3660, size 0x60, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IElementIdentifierTool* CreateTool(::StringW  inputSourceString) ;

/// @brief Method GetPlatformInitializer, addr 0x1819f36c0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::PlatformInitializer* GetPlatformInitializer() ;

/// @brief Method Initialize, addr 0x1819f3720, size 0x1d0, virtual true, abstract: false, final false
inline ::System::Object* Initialize(::Rewired::Data::IConfigVars_Internal*  configVars) ;

static inline ::Rewired::InputManagers::Initializer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::PlatformInitializer* getStaticF_WTWupdQtAkIzljufVSQMkZozZFVl() ;

static inline void setStaticF_WTWupdQtAkIzljufVSQMkZozZFVl(::Rewired::PlatformInitializer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Initializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Initializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Initializer(Initializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Initializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Initializer(Initializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5841};

/// @brief Field initErrorMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  initErrorMsg{u""};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputManagers::Initializer) == 0x10, "Size mismatch!");

} // namespace end def Rewired::InputManagers
