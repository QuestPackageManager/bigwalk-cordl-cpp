#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/PlayerScore.hpp"
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
namespace Mirror::Examples::NetworkRoom {
class PlayerScore;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::NetworkRoom::PlayerScore*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::NetworkRoom::PlayerScore*, "Mirror.Examples.NetworkRoom", "PlayerScore");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::NetworkRoom {
// Is value type: false
// CS Name: Mirror.Examples.NetworkRoom.PlayerScore
class CORDL_TYPE PlayerScore : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkindex, put=set_Networkindex)) int32_t  Networkindex;

 __declspec(property(get=get_Networkscore, put=set_Networkscore)) uint32_t  Networkscore;

/// @brief Field index, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field score, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_score, put=__cordl_internal_set_score)) uint32_t  score;

/// @brief Method DeserializeSyncVars, addr 0x18155fb70, size 0xb0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::NetworkRoom::PlayerScore* New_ctor() ;

/// @brief Method OnGUI, addr 0x18155fc20, size 0xd0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SerializeSyncVars, addr 0x18155ff00, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr uint32_t const& __cordl_internal_get_score() const;

constexpr uint32_t& __cordl_internal_get_score() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_score(uint32_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkindex, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkindex() ;

/// @brief Method get_Networkscore, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Networkscore() ;

/// @brief Method set_Networkindex, addr 0x180426f70, size 0x80, virtual false, abstract: false, final false
inline void set_Networkindex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_Networkscore, addr 0x181560100, size 0x80, virtual false, abstract: false, final false
inline void set_Networkscore(::ByRefConst<uint32_t>  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19285};

/// @brief Field index, offset: 0x68, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field score, offset: 0x6c, size: 0x4, def value: None
 uint32_t  ___score;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::NetworkRoom::PlayerScore, ___index) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::NetworkRoom::PlayerScore, ___score) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::NetworkRoom::PlayerScore) == 0x70, "Size mismatch!");

} // namespace end def Mirror::Examples::NetworkRoom
