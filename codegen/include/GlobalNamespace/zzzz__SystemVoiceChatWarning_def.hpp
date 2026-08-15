#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemVoiceChatWarning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SystemVoiceChatWarning)
namespace GlobalNamespace {
class LocalizedText;
}
// Forward declare root types
namespace GlobalNamespace {
class SystemVoiceChatWarning;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SystemVoiceChatWarning*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SystemVoiceChatWarning*, "", "SystemVoiceChatWarning");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SystemVoiceChatWarning
class CORDL_TYPE SystemVoiceChatWarning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ps5LocKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps5LocKey, put=__cordl_internal_set_ps5LocKey)) ::StringW  ps5LocKey;

/// @brief Field switchLocKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_switchLocKey, put=__cordl_internal_set_switchLocKey)) ::StringW  switchLocKey;

/// @brief Field warningText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningText, put=__cordl_internal_set_warningText)) ::UnityW<::GlobalNamespace::LocalizedText>  warningText;

static inline ::GlobalNamespace::SystemVoiceChatWarning* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::StringW const& __cordl_internal_get_ps5LocKey() const;

constexpr ::StringW& __cordl_internal_get_ps5LocKey() ;

constexpr ::StringW const& __cordl_internal_get_switchLocKey() const;

constexpr ::StringW& __cordl_internal_get_switchLocKey() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_warningText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_warningText() ;

constexpr void __cordl_internal_set_ps5LocKey(::StringW  value) ;

constexpr void __cordl_internal_set_switchLocKey(::StringW  value) ;

constexpr void __cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVoiceChatWarning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVoiceChatWarning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVoiceChatWarning(SystemVoiceChatWarning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVoiceChatWarning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVoiceChatWarning(SystemVoiceChatWarning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5254};

/// @brief Field warningText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___warningText;

/// @brief Field ps5LocKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ps5LocKey;

/// @brief Field switchLocKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___switchLocKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SystemVoiceChatWarning, ___warningText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SystemVoiceChatWarning, ___ps5LocKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SystemVoiceChatWarning, ___switchLocKey) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SystemVoiceChatWarning) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
