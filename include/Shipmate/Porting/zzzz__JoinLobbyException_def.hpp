#pragma once
// IWYU pragma private; include "Shipmate/Porting/JoinLobbyException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JoinLobbyException)
// Forward declare root types
namespace Shipmate::Porting {
class JoinLobbyException;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::JoinLobbyException*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::JoinLobbyException*, "Shipmate.Porting", "JoinLobbyException");
// Dependencies System.Exception
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.JoinLobbyException
class CORDL_TYPE JoinLobbyException : public ::System::Exception {
public:
// Declarations
static inline ::Shipmate::Porting::JoinLobbyException* New_ctor(::StringW  aErrorMsg) ;

/// @brief Method .ctor, addr 0x1804be150, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  aErrorMsg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinLobbyException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinLobbyException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinLobbyException(JoinLobbyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinLobbyException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinLobbyException(JoinLobbyException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20646};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::JoinLobbyException) == 0x90, "Size mismatch!");

} // namespace end def Shipmate::Porting
