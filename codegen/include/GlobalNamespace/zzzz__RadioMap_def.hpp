#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RadioMap)
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
struct RadioMap_MusicMapEntry;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RadioMap;
}
namespace GlobalNamespace {
struct RadioMap_MusicMapEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadioMap*);
MARK_VAL_T(::GlobalNamespace::RadioMap_MusicMapEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioMap*, "", "RadioMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioMap_MusicMapEntry, "", "RadioMap/MusicMapEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RadioMap/MusicMapEntry
struct CORDL_TYPE RadioMap_MusicMapEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RadioMap_MusicMapEntry() ;

// Ctor Parameters [CppParam { name: "musicGroup", ty: "::UnityW<::GlobalNamespace::MusicGroup>", modifiers: "", def_value: None }, CppParam { name: "miniature", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
constexpr RadioMap_MusicMapEntry(::UnityW<::GlobalNamespace::MusicGroup>  musicGroup, ::UnityW<::UnityEngine::Transform>  miniature) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field musicGroup, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

/// @brief Field miniature, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  miniature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioMap_MusicMapEntry, musicGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMap_MusicMapEntry, miniature) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioMap_MusicMapEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RadioMap::MusicMapEntry, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadioMap
class CORDL_TYPE RadioMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MusicMapEntry = ::GlobalNamespace::RadioMap_MusicMapEntry;

/// @brief Field entries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>  entries;

static inline ::GlobalNamespace::RadioMap* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804082e0, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804083e0, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUnlock, addr 0x180408560, size 0xe0, virtual false, abstract: false, final false
inline void OnUnlock(int32_t  stationIndex) ;

constexpr ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry> const& __cordl_internal_get_entries() const;

constexpr ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>& __cordl_internal_get_entries() ;

constexpr void __cordl_internal_set_entries(::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioMap(RadioMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioMap(RadioMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5070};

/// @brief Field entries, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>  ___entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioMap, ___entries) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioMap) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
