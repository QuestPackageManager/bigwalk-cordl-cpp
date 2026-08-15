#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectDebug)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectDebug;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectDebug*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectDebug*, "", "PeckEffectDebug");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectDebug
class CORDL_TYPE PeckEffectDebug : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field causeInfiniteLoop, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_causeInfiniteLoop, put=__cordl_internal_set_causeInfiniteLoop)) bool  causeInfiniteLoop;

/// @brief Field logVerbose, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x1804495f0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallRecursive, addr 0x180449690, size 0x10, virtual false, abstract: false, final false
inline void CallRecursive() ;

static inline ::GlobalNamespace::PeckEffectDebug* New_ctor() ;

/// @brief Method Peck, addr 0x1804496a0, size 0x80, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_causeInfiniteLoop() const;

constexpr bool& __cordl_internal_get_causeInfiniteLoop() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_causeInfiniteLoop(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectDebug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectDebug(PeckEffectDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectDebug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectDebug(PeckEffectDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5382};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field causeInfiniteLoop, offset: 0x48, size: 0x1, def value: None
 bool  ___causeInfiniteLoop;

/// @brief Field logVerbose, offset: 0x49, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectDebug, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectDebug, ___causeInfiniteLoop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectDebug, ___logVerbose) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectDebug) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
