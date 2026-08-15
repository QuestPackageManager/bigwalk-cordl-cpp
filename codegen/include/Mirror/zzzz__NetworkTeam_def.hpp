#pragma once
// IWYU pragma private; include "Mirror/NetworkTeam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkTeam)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Mirror {
class NetworkTeam;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTeam*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTeam*, "Mirror", "NetworkTeam");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTeam
class CORDL_TYPE NetworkTeam : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkforceShown, put=set_NetworkforceShown)) bool  NetworkforceShown;

 __declspec(property(get=get_NetworkteamId, put=set_NetworkteamId)) ::StringW  NetworkteamId;

/// @brief Field forceShown, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceShown, put=__cordl_internal_set_forceShown)) bool  forceShown;

/// @brief Field teamId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamId, put=__cordl_internal_set_teamId)) ::StringW  teamId;

/// @brief Method DeserializeSyncVars, addr 0x181526a60, size 0xe0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkTeam* New_ctor() ;

/// @brief Method SerializeSyncVars, addr 0x181526b40, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr bool const& __cordl_internal_get_forceShown() const;

constexpr bool& __cordl_internal_get_forceShown() ;

constexpr ::StringW const& __cordl_internal_get_teamId() const;

constexpr ::StringW& __cordl_internal_get_teamId() ;

constexpr void __cordl_internal_set_forceShown(bool  value) ;

constexpr void __cordl_internal_set_teamId(::StringW  value) ;

/// @brief Method .ctor, addr 0x181526bb0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkforceShown, addr 0x180352b00, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkforceShown() ;

/// @brief Method get_NetworkteamId, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkteamId() ;

/// @brief Method set_NetworkforceShown, addr 0x181526bf0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkforceShown(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkteamId, addr 0x181526c70, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkteamId(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTeam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTeam", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTeam(NetworkTeam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTeam", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTeam(NetworkTeam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19233};

/// @brief Field teamId, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___teamId;

/// @brief Field forceShown, offset: 0x70, size: 0x1, def value: None
 bool  ___forceShown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkTeam, ___teamId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTeam, ___forceShown) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkTeam) == 0x78, "Size mismatch!");

} // namespace end def Mirror
