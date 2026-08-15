#pragma once
// IWYU pragma private; include "GlobalNamespace/MuteWarning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MuteWarning)
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MuteWarning;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MuteWarning*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MuteWarning*, "", "MuteWarning");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MuteWarning
class CORDL_TYPE MuteWarning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field localizedText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedText, put=__cordl_internal_set_localizedText)) ::UnityW<::GlobalNamespace::LocalizedText>  localizedText;

/// @brief Field warningParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningParent, put=__cordl_internal_set_warningParent)) ::UnityW<::UnityEngine::Transform>  warningParent;

static inline ::GlobalNamespace::MuteWarning* New_ctor() ;

/// @brief Method OnDisable, addr 0x180425a10, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180425a40, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x180425a50, size 0xd0, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Update, addr 0x180425a40, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_localizedText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_localizedText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_warningParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_warningParent() ;

constexpr void __cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_warningParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MuteWarning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MuteWarning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MuteWarning(MuteWarning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MuteWarning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MuteWarning(MuteWarning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5235};

/// @brief Field warningParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___warningParent;

/// @brief Field localizedText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___localizedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MuteWarning, ___warningParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MuteWarning, ___localizedText) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MuteWarning) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
