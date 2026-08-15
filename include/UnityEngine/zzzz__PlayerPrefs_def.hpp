#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_T(::UnityEngine::PlayerPrefs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerPrefs
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
// Declarations
/// @brief Method DeleteKey, addr 0x182277740, size 0xf0, virtual false, abstract: false, final false
static inline void DeleteKey(::StringW  key) ;

/// @brief Method DeleteKey_Injected, addr 0x182277730, size 0x10, virtual false, abstract: false, final false
static inline void DeleteKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key) ;

/// @brief Method GetFloat, addr 0x182277960, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key) ;

/// @brief Method GetFloat, addr 0x182277840, size 0x120, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key, float_t  defaultValue) ;

/// @brief Method GetFloat_Injected, addr 0x182277830, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloat_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, float_t  defaultValue) ;

/// @brief Method GetInt, addr 0x182277980, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key) ;

/// @brief Method GetInt, addr 0x182277990, size 0x120, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key, int32_t  defaultValue) ;

/// @brief Method GetInt_Injected, addr 0x182277970, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, int32_t  defaultValue) ;

/// @brief Method GetString, addr 0x182277ac0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key) ;

/// @brief Method GetString, addr 0x182277ad0, size 0x210, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

/// @brief Method GetString_Injected, addr 0x182277ab0, size 0x10, virtual false, abstract: false, final false
static inline void GetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method HasKey, addr 0x182277cf0, size 0x110, virtual false, abstract: false, final false
static inline bool HasKey(::StringW  key) ;

/// @brief Method HasKey_Injected, addr 0x182277ce0, size 0x10, virtual false, abstract: false, final false
static inline bool HasKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key) ;

/// @brief Method Save, addr 0x182277e00, size 0x10, virtual false, abstract: false, final false
static inline void Save() ;

/// @brief Method SetFloat, addr 0x182277e10, size 0x60, virtual false, abstract: false, final false
static inline void SetFloat(::StringW  key, float_t  value) ;

/// @brief Method SetInt, addr 0x182277e70, size 0x60, virtual false, abstract: false, final false
static inline void SetInt(::StringW  key, int32_t  value) ;

/// @brief Method SetString, addr 0x182277ed0, size 0x60, virtual false, abstract: false, final false
static inline void SetString(::StringW  key, ::StringW  value) ;

/// @brief Method TrySetFloat, addr 0x182277f40, size 0x120, virtual false, abstract: false, final false
static inline bool TrySetFloat(::StringW  key, float_t  value) ;

/// @brief Method TrySetFloat_Injected, addr 0x182277f30, size 0x10, virtual false, abstract: false, final false
static inline bool TrySetFloat_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, float_t  value) ;

/// @brief Method TrySetInt, addr 0x182278070, size 0x120, virtual false, abstract: false, final false
static inline bool TrySetInt(::StringW  key, int32_t  value) ;

/// @brief Method TrySetInt_Injected, addr 0x182278060, size 0x10, virtual false, abstract: false, final false
static inline bool TrySetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, int32_t  value) ;

/// @brief Method TrySetSetString, addr 0x1822781a0, size 0x1d0, virtual false, abstract: false, final false
static inline bool TrySetSetString(::StringW  key, ::StringW  value) ;

/// @brief Method TrySetSetString_Injected, addr 0x182278190, size 0x10, virtual false, abstract: false, final false
static inline bool TrySetSetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefs(PlayerPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefs(PlayerPrefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerPrefs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
