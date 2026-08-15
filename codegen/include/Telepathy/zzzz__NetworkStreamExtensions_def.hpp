#pragma once
// IWYU pragma private; include "Telepathy/NetworkStreamExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStreamExtensions)
namespace System::Net::Sockets {
class NetworkStream;
}
// Forward declare root types
namespace Telepathy {
class NetworkStreamExtensions;
}
// Write type traits
MARK_REF_T(::Telepathy::NetworkStreamExtensions*);
DEFINE_IL2CPP_CLASS(::Telepathy::NetworkStreamExtensions*, "Telepathy", "NetworkStreamExtensions");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.NetworkStreamExtensions
class CORDL_TYPE NetworkStreamExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ReadExactly, addr 0x181e59730, size 0x80, virtual false, abstract: false, final false
static inline bool ReadExactly(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  amount) ;

/// @brief Method ReadSafely, addr 0x181e597b0, size 0x40, virtual false, abstract: false, final false
static inline int32_t ReadSafely(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkStreamExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkStreamExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkStreamExtensions(NetworkStreamExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStreamExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkStreamExtensions(NetworkStreamExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Telepathy::NetworkStreamExtensions) == 0x10, "Size mismatch!");

} // namespace end def Telepathy
