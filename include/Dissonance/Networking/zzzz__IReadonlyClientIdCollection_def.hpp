#pragma once
// IWYU pragma private; include "Dissonance/Networking/IReadonlyClientIdCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IReadonlyClientIdCollection)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking {
class IReadonlyClientIdCollection;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::IReadonlyClientIdCollection*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::IReadonlyClientIdCollection*, "Dissonance.Networking", "IReadonlyClientIdCollection");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.IReadonlyClientIdCollection
class CORDL_TYPE IReadonlyClientIdCollection {
public:
// Declarations
/// @brief Method GetId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<uint16_t> GetId(::StringW  name) ;

/// @brief Method GetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetName(uint16_t  id) ;

// Ctor Parameters [CppParam { name: "", ty: "IReadonlyClientIdCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadonlyClientIdCollection(IReadonlyClientIdCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
