#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformMarketplace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformMarketplace_def.hpp"
CORDL_MODULE_EXPORT(MockedPlatformMarketplace)
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformMarketplace;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformMarketplace*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformMarketplace*, "Shipmate.Porting.Mocked", "MockedPlatformMarketplace");
// Dependencies Shipmate.Porting.AbstractPlatformMarketplace
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformMarketplace
class CORDL_TYPE MockedPlatformMarketplace : public ::Shipmate::Porting::AbstractPlatformMarketplace {
public:
// Declarations
static inline ::Shipmate::Porting::Mocked::MockedPlatformMarketplace* New_ctor() ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformMarketplace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformMarketplace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformMarketplace(MockedPlatformMarketplace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformMarketplace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformMarketplace(MockedPlatformMarketplace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21521};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformMarketplace) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
