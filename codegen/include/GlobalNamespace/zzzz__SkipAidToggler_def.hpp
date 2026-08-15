#pragma once
// IWYU pragma private; include "GlobalNamespace/SkipAidToggler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SkipAidToggler)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SkipAidToggler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkipAidToggler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkipAidToggler*, "", "SkipAidToggler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkipAidToggler
class CORDL_TYPE SkipAidToggler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field skipAidsActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_skipAidsActive, put=setStaticF_skipAidsActive)) bool  skipAidsActive;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method Awake, addr 0x180408c70, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SkipAidToggler* New_ctor() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_skipAidsActive() ;

static inline void setStaticF_skipAidsActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipAidToggler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipAidToggler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipAidToggler(SkipAidToggler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipAidToggler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipAidToggler(SkipAidToggler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5072};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field logVerbose, offset: 0x28, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkipAidToggler, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkipAidToggler, ___logVerbose) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkipAidToggler) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
