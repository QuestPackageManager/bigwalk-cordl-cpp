#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectHeadset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PeckEffectHeadset)
namespace GlobalNamespace {
class ListenerMover;
}
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectHeadset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectHeadset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectHeadset*, "", "PeckEffectHeadset");
// Dependencies Mirror.NetworkBehaviour, PeckPlayerReference, PeckSystemReference
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectHeadset
class CORDL_TYPE PeckEffectHeadset : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field listenerMover, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerMover, put=__cordl_internal_set_listenerMover)) ::UnityW<::GlobalNamespace::ListenerMover>  listenerMover;

/// @brief Field localPlayerIsListening, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerIsListening, put=__cordl_internal_set_localPlayerIsListening)) bool  localPlayerIsListening;

/// @brief Field peckSystem, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Field playerReference, offset 0x90, size 0x18 
 __declspec(property(get=__cordl_internal_get_playerReference, put=__cordl_internal_set_playerReference)) ::GlobalNamespace::PeckPlayerReference  playerReference;

/// @brief Field token, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::StringW  token;

/// @brief Method Awake, addr 0x180449840, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PeckEffectHeadset* New_ctor() ;

/// @brief Method Peck, addr 0x1804498f0, size 0x200, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::ListenerMover> const& __cordl_internal_get_listenerMover() const;

constexpr ::UnityW<::GlobalNamespace::ListenerMover>& __cordl_internal_get_listenerMover() ;

constexpr bool const& __cordl_internal_get_localPlayerIsListening() const;

constexpr bool& __cordl_internal_get_localPlayerIsListening() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr ::GlobalNamespace::PeckPlayerReference const& __cordl_internal_get_playerReference() const;

constexpr ::GlobalNamespace::PeckPlayerReference& __cordl_internal_get_playerReference() ;

constexpr ::StringW const& __cordl_internal_get_token() const;

constexpr ::StringW& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set_listenerMover(::UnityW<::GlobalNamespace::ListenerMover>  value) ;

constexpr void __cordl_internal_set_localPlayerIsListening(bool  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value) ;

constexpr void __cordl_internal_set_token(::StringW  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectHeadset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectHeadset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectHeadset(PeckEffectHeadset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectHeadset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectHeadset(PeckEffectHeadset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5384};

/// @brief Field peckSystem, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field playerReference, offset: 0x90, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  ___playerReference;

/// @brief Field listenerMover, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ListenerMover>  ___listenerMover;

/// @brief Field token, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___token;

/// @brief Field localPlayerIsListening, offset: 0xb8, size: 0x1, def value: None
 bool  ___localPlayerIsListening;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectHeadset, ___peckSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectHeadset, ___playerReference) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectHeadset, ___listenerMover) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectHeadset, ___token) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectHeadset, ___localPlayerIsListening) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectHeadset) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
