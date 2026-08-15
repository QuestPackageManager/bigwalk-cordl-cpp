#pragma once
// IWYU pragma private; include "GlobalNamespace/ListenerMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListenerMover)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ListenerMover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListenerMover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListenerMover*, "", "ListenerMover");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListenerMover
class CORDL_TYPE ListenerMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Priority, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

/// @brief Field _allMovers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allMovers, put=setStaticF__allMovers)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ListenerMover>>*  _allMovers;

static inline ::GlobalNamespace::ListenerMover* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d3a50, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d3ab0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1803d3b10, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ListenerMover>>* getStaticF__allMovers() ;

static inline void setStaticF__allMovers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ListenerMover>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListenerMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListenerMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListenerMover(ListenerMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListenerMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListenerMover(ListenerMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4844};

/// @brief Field Priority, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListenerMover, ___Priority) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListenerMover) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
