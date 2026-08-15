#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UnityFilterBase)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterBase*, "", "UnityFilterBase");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterBase
class CORDL_TYPE UnityFilterBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Method ApplyDebugBypass, addr 0x1804a6210, size 0xe0, virtual false, abstract: false, final false
inline void ApplyDebugBypass() ;

static inline ::GlobalNamespace::UnityFilterBase* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804a62f0, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804a6360, size 0x90, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetFilter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateValues() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Filter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

/// @brief Method set_Filter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterBase(UnityFilterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterBase(UnityFilterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityFilterBase) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
