#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformEnvironment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbstractPlatformEnvironment_def.hpp"
CORDL_MODULE_EXPORT(MockedPlatformEnvironment)
namespace GlobalNamespace {
struct EPlatformEnvironment;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformEnvironment;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformEnvironment*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformEnvironment*, "Shipmate.Porting.Mocked", "MockedPlatformEnvironment");
// Dependencies AbstractPlatformEnvironment
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformEnvironment
class CORDL_TYPE MockedPlatformEnvironment : public ::GlobalNamespace::AbstractPlatformEnvironment {
public:
// Declarations
/// @brief Method GetCurrentEnvironment, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline ::GlobalNamespace::EPlatformEnvironment GetCurrentEnvironment() ;

static inline ::Shipmate::Porting::Mocked::MockedPlatformEnvironment* New_ctor() ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformEnvironment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformEnvironment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformEnvironment(MockedPlatformEnvironment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformEnvironment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformEnvironment(MockedPlatformEnvironment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformEnvironment) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
