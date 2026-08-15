#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/PlayerScore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerScore)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Mirror::Examples::MultipleAdditiveScenes {
class PlayerScore;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*, "Mirror.Examples.MultipleAdditiveScenes", "PlayerScore");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.PlayerScore
class CORDL_TYPE PlayerScore : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkmatchIndex, put=set_NetworkmatchIndex)) int32_t  NetworkmatchIndex;

 __declspec(property(get=get_NetworkplayerNumber, put=set_NetworkplayerNumber)) int32_t  NetworkplayerNumber;

 __declspec(property(get=get_Networkscore, put=set_Networkscore)) uint32_t  Networkscore;

 __declspec(property(get=get_NetworkscoreIndex, put=set_NetworkscoreIndex)) int32_t  NetworkscoreIndex;

/// @brief Field clientMatchIndex, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientMatchIndex, put=__cordl_internal_set_clientMatchIndex)) int32_t  clientMatchIndex;

/// @brief Field matchIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchIndex, put=__cordl_internal_set_matchIndex)) int32_t  matchIndex;

/// @brief Field playerNumber, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerNumber, put=__cordl_internal_set_playerNumber)) int32_t  playerNumber;

/// @brief Field score, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_score, put=__cordl_internal_set_score)) uint32_t  score;

/// @brief Field scoreIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scoreIndex, put=__cordl_internal_set_scoreIndex)) int32_t  scoreIndex;

/// @brief Method DeserializeSyncVars, addr 0x18155fa20, size 0x150, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore* New_ctor() ;

/// @brief Method OnGUI, addr 0x18155fcf0, size 0x160, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SerializeSyncVars, addr 0x18155fe50, size 0xb0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr int32_t const& __cordl_internal_get_clientMatchIndex() const;

constexpr int32_t& __cordl_internal_get_clientMatchIndex() ;

constexpr int32_t const& __cordl_internal_get_matchIndex() const;

constexpr int32_t& __cordl_internal_get_matchIndex() ;

constexpr int32_t const& __cordl_internal_get_playerNumber() const;

constexpr int32_t& __cordl_internal_get_playerNumber() ;

constexpr uint32_t const& __cordl_internal_get_score() const;

constexpr uint32_t& __cordl_internal_get_score() ;

constexpr int32_t const& __cordl_internal_get_scoreIndex() const;

constexpr int32_t& __cordl_internal_get_scoreIndex() ;

constexpr void __cordl_internal_set_clientMatchIndex(int32_t  value) ;

constexpr void __cordl_internal_set_matchIndex(int32_t  value) ;

constexpr void __cordl_internal_set_playerNumber(int32_t  value) ;

constexpr void __cordl_internal_set_score(uint32_t  value) ;

constexpr void __cordl_internal_set_scoreIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x18155ff70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkmatchIndex, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkmatchIndex() ;

/// @brief Method get_NetworkplayerNumber, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkplayerNumber() ;

/// @brief Method get_Networkscore, addr 0x18051e7a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Networkscore() ;

/// @brief Method get_NetworkscoreIndex, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkscoreIndex() ;

/// @brief Method set_NetworkmatchIndex, addr 0x18155ff80, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkmatchIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworkplayerNumber, addr 0x180426f70, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkplayerNumber(::ByRefConst<int32_t>  value) ;

/// @brief Method set_Networkscore, addr 0x181560080, size 0x80, virtual false, abstract: false, final false
inline void set_Networkscore(::ByRefConst<uint32_t>  value) ;

/// @brief Method set_NetworkscoreIndex, addr 0x181560000, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkscoreIndex(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerScore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerScore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerScore(PlayerScore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerScore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerScore(PlayerScore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19324};

/// @brief Field playerNumber, offset: 0x68, size: 0x4, def value: None
 int32_t  ___playerNumber;

/// @brief Field scoreIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___scoreIndex;

/// @brief Field matchIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___matchIndex;

/// @brief Field score, offset: 0x74, size: 0x4, def value: None
 uint32_t  ___score;

/// @brief Field clientMatchIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  ___clientMatchIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore, ___playerNumber) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore, ___scoreIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore, ___matchIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore, ___score) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore, ___clientMatchIndex) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::PlayerScore) == 0x80, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
