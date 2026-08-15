#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_def.hpp"
CORDL_MODULE_EXPORT(MockedPlatformCore)
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformCore;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformCore*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformCore*, "Shipmate.Porting.Mocked", "MockedPlatformCore");
// Dependencies Shipmate.Porting.AbstractPlatformCore
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformCore
class CORDL_TYPE MockedPlatformCore : public ::Shipmate::Porting::AbstractPlatformCore {
public:
// Declarations
/// @brief Method CoreInitialization, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void CoreInitialization() ;

static inline ::Shipmate::Porting::Mocked::MockedPlatformCore* New_ctor() ;

/// @brief Method .ctor, addr 0x181ac9830, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformCore(MockedPlatformCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformCore(MockedPlatformCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21518};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformCore) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
