#pragma once
// IWYU pragma private; include "Mirror/MatchInterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__InterestManagement_def.hpp"
CORDL_MODULE_EXPORT(MatchInterestManagement)
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
namespace System {
struct Guid;
}
// Forward declare root types
namespace Mirror {
class MatchInterestManagement;
}
// Write type traits
MARK_REF_T(::Mirror::MatchInterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::MatchInterestManagement*, "Mirror", "MatchInterestManagement");
// Dependencies Mirror.InterestManagement
namespace Mirror {
// Is value type: false
// CS Name: Mirror.MatchInterestManagement
class CORDL_TYPE MatchInterestManagement : public ::Mirror::InterestManagement {
public:
// Declarations
/// @brief Field dirtyMatches, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtyMatches, put=__cordl_internal_set_dirtyMatches)) ::System::Collections::Generic::HashSet_1<::System::Guid>*  dirtyMatches;

/// @brief Field lastObjectMatch, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastObjectMatch, put=__cordl_internal_set_lastObjectMatch)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*  lastObjectMatch;

/// @brief Field matchObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchObjects, put=__cordl_internal_set_matchObjects)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  matchObjects;

static inline ::Mirror::MatchInterestManagement* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0x181518800, size 0x140, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnDestroyed, addr 0x181518940, size 0x150, virtual true, abstract: false, final false
inline void OnDestroyed(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method OnRebuildObservers, addr 0x181518a90, size 0x180, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method OnSpawned, addr 0x181518c10, size 0x1c0, virtual true, abstract: false, final false
inline void OnSpawned(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method RebuildMatchObservers, addr 0x181518dd0, size 0xd0, virtual false, abstract: false, final false
inline void RebuildMatchObservers(::System::Guid  matchId) ;

/// @brief Method Update, addr 0x1815190e0, size 0x3a0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDirtyMatches, addr 0x181518ea0, size 0xb0, virtual false, abstract: false, final false
inline void UpdateDirtyMatches(::System::Guid  newMatch, ::System::Guid  currentMatch) ;

/// @brief Method UpdateMatchObjects, addr 0x181518f50, size 0x190, virtual false, abstract: false, final false
inline void UpdateMatchObjects(::Mirror::NetworkIdentity*  netIdentity, ::System::Guid  newMatch, ::System::Guid  currentMatch) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* const& __cordl_internal_get_dirtyMatches() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& __cordl_internal_get_dirtyMatches() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>* const& __cordl_internal_get_lastObjectMatch() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*& __cordl_internal_get_lastObjectMatch() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& __cordl_internal_get_matchObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& __cordl_internal_get_matchObjects() ;

constexpr void __cordl_internal_set_dirtyMatches(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

constexpr void __cordl_internal_set_lastObjectMatch(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*  value) ;

constexpr void __cordl_internal_set_matchObjects(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value) ;

/// @brief Method .ctor, addr 0x181519480, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchInterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchInterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchInterestManagement(MatchInterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchInterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchInterestManagement(MatchInterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19227};

/// @brief Field matchObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  ___matchObjects;

/// @brief Field lastObjectMatch, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*  ___lastObjectMatch;

/// @brief Field dirtyMatches, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Guid>*  ___dirtyMatches;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::MatchInterestManagement, ___matchObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::MatchInterestManagement, ___lastObjectMatch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::MatchInterestManagement, ___dirtyMatches) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::MatchInterestManagement) == 0x40, "Size mismatch!");

} // namespace end def Mirror
