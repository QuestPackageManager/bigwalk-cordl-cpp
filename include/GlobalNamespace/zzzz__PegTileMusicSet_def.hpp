#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileMusicSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PegTileMusicSet)
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
struct PegTileMusicSet_PropGroupMusicPair;
}
namespace GlobalNamespace {
struct PropGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileMusicSet;
}
namespace GlobalNamespace {
struct PegTileMusicSet_PropGroupMusicPair;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileMusicSet*);
MARK_VAL_T(::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileMusicSet*, "", "PegTileMusicSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair, "", "PegTileMusicSet/PropGroupMusicPair");
// Dependencies PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: PegTileMusicSet/PropGroupMusicPair
struct CORDL_TYPE PegTileMusicSet_PropGroupMusicPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PegTileMusicSet_PropGroupMusicPair() ;

// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PegTileMusicSet_PropGroupMusicPair(::GlobalNamespace::PropGroup  propGroup, int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field propGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field Index, offset: 0x4, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair, propGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair, Index) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PegTileMusicSet::PropGroupMusicPair, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileMusicSet
class CORDL_TYPE PegTileMusicSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using PropGroupMusicPair = ::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair;

/// @brief Field mappings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mappings, put=__cordl_internal_set_mappings)) ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>  mappings;

/// @brief Field musicGroup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroup, put=__cordl_internal_set_musicGroup)) ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

/// @brief Method FindMusicGroupAndIndex, addr 0x180406580, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MusicGroup> FindMusicGroupAndIndex(::GlobalNamespace::PropGroup  propGroup, ::by_ref<int32_t>  index) ;

static inline ::GlobalNamespace::PegTileMusicSet* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair> const& __cordl_internal_get_mappings() const;

constexpr ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>& __cordl_internal_get_mappings() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get_musicGroup() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get_musicGroup() ;

constexpr void __cordl_internal_set_mappings(::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>  value) ;

constexpr void __cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileMusicSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileMusicSet(PegTileMusicSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileMusicSet(PegTileMusicSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5091};

/// @brief Field musicGroup, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ___musicGroup;

/// @brief Field mappings, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>  ___mappings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileMusicSet, ___musicGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicSet, ___mappings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileMusicSet) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
