#pragma once
// IWYU pragma private; include "Mirror/NetworkMatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Guid_def.hpp"
CORDL_MODULE_EXPORT(NetworkMatch)
// Forward declare root types
namespace Mirror {
class NetworkMatch;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkMatch*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkMatch*, "Mirror", "NetworkMatch");
// Dependencies Mirror.NetworkBehaviour, System.Guid
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkMatch
class CORDL_TYPE NetworkMatch : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field matchId, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_matchId, put=__cordl_internal_set_matchId)) ::System::Guid  matchId;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkMatch* New_ctor() ;

constexpr ::System::Guid const& __cordl_internal_get_matchId() const;

constexpr ::System::Guid& __cordl_internal_get_matchId() ;

constexpr void __cordl_internal_set_matchId(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMatch(NetworkMatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMatch(NetworkMatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19228};

/// @brief Field matchId, offset: 0x68, size: 0x10, def value: None
 ::System::Guid  ___matchId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkMatch, ___matchId) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkMatch) == 0x78, "Size mismatch!");

} // namespace end def Mirror
