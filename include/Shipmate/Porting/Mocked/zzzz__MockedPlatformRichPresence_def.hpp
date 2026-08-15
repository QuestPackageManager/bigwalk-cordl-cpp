#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformRichPresence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformRichPresence_def.hpp"
CORDL_MODULE_EXPORT(MockedPlatformRichPresence)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class RichPresenceEntry;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformRichPresence;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformRichPresence*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformRichPresence*, "Shipmate.Porting.Mocked", "MockedPlatformRichPresence");
// Dependencies Shipmate.Porting.AbstractPlatformRichPresence
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformRichPresence
class CORDL_TYPE MockedPlatformRichPresence : public ::Shipmate::Porting::AbstractPlatformRichPresence {
public:
// Declarations
static inline ::Shipmate::Porting::Mocked::MockedPlatformRichPresence* New_ctor() ;

/// @brief Method SetPresenceText, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetPresenceText(::GlobalNamespace::RichPresenceEntry*  aPresence) ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformRichPresence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformRichPresence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformRichPresence(MockedPlatformRichPresence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformRichPresence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformRichPresence(MockedPlatformRichPresence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformRichPresence) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
