#pragma once
// IWYU pragma private; include "Mirror/TeamInterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__InterestManagement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TeamInterestManagement)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Mirror {
class TeamInterestManagement;
}
// Write type traits
MARK_REF_T(::Mirror::TeamInterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::TeamInterestManagement*, "Mirror", "TeamInterestManagement");
// Dependencies Mirror.InterestManagement
namespace Mirror {
// Is value type: false
// CS Name: Mirror.TeamInterestManagement
class CORDL_TYPE TeamInterestManagement : public ::Mirror::InterestManagement {
public:
// Declarations
/// @brief Field dirtyTeams, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtyTeams, put=__cordl_internal_set_dirtyTeams)) ::System::Collections::Generic::HashSet_1<::StringW>*  dirtyTeams;

/// @brief Field lastObjectTeam, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastObjectTeam, put=__cordl_internal_set_lastObjectTeam)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*  lastObjectTeam;

/// @brief Field teamObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamObjects, put=__cordl_internal_set_teamObjects)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  teamObjects;

/// @brief Method AddAllConnections, addr 0x18152f160, size 0x100, virtual false, abstract: false, final false
inline void AddAllConnections(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

static inline ::Mirror::TeamInterestManagement* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0x18152f260, size 0xe0, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnDestroyed, addr 0x18152f340, size 0x110, virtual true, abstract: false, final false
inline void OnDestroyed(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method OnRebuildObservers, addr 0x18152f450, size 0x180, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method OnSpawned, addr 0x18152f5d0, size 0x170, virtual true, abstract: false, final false
inline void OnSpawned(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method RebuildTeamObservers, addr 0x18152f740, size 0xc0, virtual false, abstract: false, final false
inline void RebuildTeamObservers(::StringW  teamId) ;

/// @brief Method Update, addr 0x18152f9b0, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDirtyTeams, addr 0x18152f800, size 0x70, virtual false, abstract: false, final false
inline void UpdateDirtyTeams(::StringW  newTeam, ::StringW  currentTeam) ;

/// @brief Method UpdateTeamObjects, addr 0x18152f870, size 0x140, virtual false, abstract: false, final false
inline void UpdateTeamObjects(::Mirror::NetworkIdentity*  netIdentity, ::StringW  newTeam, ::StringW  currentTeam) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_dirtyTeams() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_dirtyTeams() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>* const& __cordl_internal_get_lastObjectTeam() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*& __cordl_internal_get_lastObjectTeam() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& __cordl_internal_get_teamObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& __cordl_internal_get_teamObjects() ;

constexpr void __cordl_internal_set_dirtyTeams(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_lastObjectTeam(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*  value) ;

constexpr void __cordl_internal_set_teamObjects(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value) ;

/// @brief Method .ctor, addr 0x18152fc70, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeamInterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeamInterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeamInterestManagement(TeamInterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeamInterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeamInterestManagement(TeamInterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19234};

/// @brief Field teamObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  ___teamObjects;

/// @brief Field lastObjectTeam, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*  ___lastObjectTeam;

/// @brief Field dirtyTeams, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___dirtyTeams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TeamInterestManagement, ___teamObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::TeamInterestManagement, ___lastObjectTeam) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::TeamInterestManagement, ___dirtyTeams) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::TeamInterestManagement) == 0x40, "Size mismatch!");

} // namespace end def Mirror
