#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyBlank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KeyBlankCover_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyBlank)
namespace GlobalNamespace {
class Prop;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Operation;
}
namespace Mirror {
template<typename T>
class SyncList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class KeyBlank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KeyBlank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyBlank*, "", "KeyBlank");
// Dependencies KeyBlankCover, Mirror.NetworkBehaviour, PropGroup
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyBlank
class CORDL_TYPE KeyBlank : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field covers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_covers, put=__cordl_internal_set_covers)) ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>  covers;

/// @brief Field cuts, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cuts, put=__cordl_internal_set_cuts)) ::Mirror::SyncList_1<bool>*  cuts;

/// @brief Field finishedPropGroup, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_finishedPropGroup, put=__cordl_internal_set_finishedPropGroup)) ::GlobalNamespace::PropGroup  finishedPropGroup;

/// @brief Field prop, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field startFinished, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_startFinished, put=__cordl_internal_set_startFinished)) bool  startFinished;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::KeyBlank* New_ctor() ;

/// @brief Method OnBite, addr 0x18040a030, size 0xa0, virtual false, abstract: false, final false
inline void OnBite(int32_t  stationIndex) ;

/// @brief Method OnCutsUpdated, addr 0x18040a0d0, size 0x50, virtual false, abstract: false, final false
inline void OnCutsUpdated(::Mirror::SyncList_1_Operation<bool>  op, int32_t  index, bool  oldValue, bool  newValue) ;

/// @brief Method OnPinUpdated, addr 0x18040a120, size 0xd0, virtual false, abstract: false, final false
inline void OnPinUpdated() ;

/// @brief Method OnStartClient, addr 0x18040a1f0, size 0x2f0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method RefreshPropGroup, addr 0x18040a4e0, size 0xd0, virtual false, abstract: false, final false
inline void RefreshPropGroup() ;

/// @brief Method ServerCutSegment, addr 0x18040a5b0, size 0x30, virtual false, abstract: false, final false
inline void ServerCutSegment(int32_t  index) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>> const& __cordl_internal_get_covers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>& __cordl_internal_get_covers() ;

constexpr ::Mirror::SyncList_1<bool>* const& __cordl_internal_get_cuts() const;

constexpr ::Mirror::SyncList_1<bool>*& __cordl_internal_get_cuts() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_finishedPropGroup() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_finishedPropGroup() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr bool const& __cordl_internal_get_startFinished() const;

constexpr bool& __cordl_internal_get_startFinished() ;

constexpr void __cordl_internal_set_covers(::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>  value) ;

constexpr void __cordl_internal_set_cuts(::Mirror::SyncList_1<bool>*  value) ;

constexpr void __cordl_internal_set_finishedPropGroup(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_startFinished(bool  value) ;

/// @brief Method .ctor, addr 0x18040a5e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyBlank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyBlank", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyBlank(KeyBlank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyBlank", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyBlank(KeyBlank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5146};

/// @brief Field cuts, offset: 0x68, size: 0x8, def value: None
 ::Mirror::SyncList_1<bool>*  ___cuts;

/// @brief Field covers, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>  ___covers;

/// @brief Field prop, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

/// @brief Field finishedPropGroup, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___finishedPropGroup;

/// @brief Field startFinished, offset: 0x84, size: 0x1, def value: None
 bool  ___startFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyBlank, ___cuts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyBlank, ___covers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyBlank, ___prop) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyBlank, ___finishedPropGroup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyBlank, ___startFinished) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyBlank) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
