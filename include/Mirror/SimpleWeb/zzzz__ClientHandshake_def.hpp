#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientHandshake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClientHandshake)
namespace Mirror::SimpleWeb {
class Connection;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ClientHandshake;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ClientHandshake*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ClientHandshake*, "Mirror.SimpleWeb", "ClientHandshake");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ClientHandshake
class CORDL_TYPE ClientHandshake : public ::System::Object {
public:
// Declarations
static inline ::Mirror::SimpleWeb::ClientHandshake* New_ctor() ;

/// @brief Method TryHandshake, addr 0x181acfc20, size 0x490, virtual false, abstract: false, final false
inline bool TryHandshake(::Mirror::SimpleWeb::Connection*  conn, ::System::Uri*  uri) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientHandshake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientHandshake", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientHandshake(ClientHandshake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientHandshake", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientHandshake(ClientHandshake const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ClientHandshake) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
