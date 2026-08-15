#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PropHomeBlock)
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHomeBlock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHomeBlock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHomeBlock*, "", "PropHomeBlock");
// Dependencies PropHome, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHomeBlock
class CORDL_TYPE PropHomeBlock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field homes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_homes, put=__cordl_internal_set_homes)) ::ArrayW<::UnityW<::GlobalNamespace::PropHome>>  homes;

/// @brief Field isFull, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFull, put=__cordl_internal_set_isFull)) bool  isFull;

/// @brief Field isFullDirectControlSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_isFullDirectControlSystem, put=__cordl_internal_set_isFullDirectControlSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  isFullDirectControlSystem;

/// @brief Method AreAllHomesFull, addr 0x1804116e0, size 0x90, virtual false, abstract: false, final false
inline bool AreAllHomesFull() ;

/// @brief Method Awake, addr 0x180411770, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PropHomeBlock* New_ctor() ;

/// @brief Method OnPinChange, addr 0x1804118c0, size 0x70, virtual false, abstract: false, final false
inline void OnPinChange(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter) ;

/// @brief Method SetFull, addr 0x180411930, size 0x70, virtual false, abstract: false, final false
inline void SetFull(bool  isFull) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHome>> const& __cordl_internal_get_homes() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHome>>& __cordl_internal_get_homes() ;

constexpr bool const& __cordl_internal_get_isFull() const;

constexpr bool& __cordl_internal_get_isFull() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_isFullDirectControlSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_isFullDirectControlSystem() ;

constexpr void __cordl_internal_set_homes(::ArrayW<::UnityW<::GlobalNamespace::PropHome>>  value) ;

constexpr void __cordl_internal_set_isFull(bool  value) ;

constexpr void __cordl_internal_set_isFullDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHomeBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHomeBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHomeBlock(PropHomeBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHomeBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHomeBlock(PropHomeBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5110};

/// @brief Field homes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropHome>>  ___homes;

/// @brief Field isFullDirectControlSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___isFullDirectControlSystem;

/// @brief Field isFull, offset: 0x30, size: 0x1, def value: None
 bool  ___isFull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHomeBlock, ___homes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeBlock, ___isFullDirectControlSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHomeBlock, ___isFull) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHomeBlock) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
