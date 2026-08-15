#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformRichPresence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
CORDL_MODULE_EXPORT(AbstractPlatformRichPresence)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class RichPresenceEntry;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformRichPresence;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformRichPresence*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformRichPresence*, "Shipmate.Porting", "AbstractPlatformRichPresence");
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformRichPresence
class CORDL_TYPE AbstractPlatformRichPresence : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
static inline ::Shipmate::Porting::AbstractPlatformRichPresence* New_ctor() ;

/// @brief Method SetPresenceText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetPresenceText(::GlobalNamespace::RichPresenceEntry*  aPresence) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformRichPresence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformRichPresence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformRichPresence(AbstractPlatformRichPresence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformRichPresence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformRichPresence(AbstractPlatformRichPresence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20620};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::AbstractPlatformRichPresence) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
