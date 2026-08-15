#pragma once
// IWYU pragma private; include "Dissonance/Networking/NetworkModeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkModeExtensions)
namespace Dissonance::Networking {
struct NetworkMode;
}
// Forward declare root types
namespace Dissonance::Networking {
class NetworkModeExtensions;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::NetworkModeExtensions*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::NetworkModeExtensions*, "Dissonance.Networking", "NetworkModeExtensions");
// Dependencies System.Object
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.NetworkModeExtensions
class CORDL_TYPE NetworkModeExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsClientEnabled, addr 0x1805e1160, size 0xb0, virtual false, abstract: false, final false
static inline bool IsClientEnabled(::Dissonance::Networking::NetworkMode  mode) ;

/// @brief Method IsServerEnabled, addr 0x1805e1210, size 0x190, virtual false, abstract: false, final false
static inline bool IsServerEnabled(::Dissonance::Networking::NetworkMode  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkModeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkModeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkModeExtensions(NetworkModeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkModeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkModeExtensions(NetworkModeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Networking::NetworkModeExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Networking
