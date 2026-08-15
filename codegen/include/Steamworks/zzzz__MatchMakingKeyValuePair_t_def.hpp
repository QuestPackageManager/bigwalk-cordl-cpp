#pragma once
// IWYU pragma private; include "Steamworks/MatchMakingKeyValuePair_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchMakingKeyValuePair_t)
// Forward declare root types
namespace Steamworks {
struct MatchMakingKeyValuePair_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MatchMakingKeyValuePair_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MatchMakingKeyValuePair_t, "Steamworks", "MatchMakingKeyValuePair_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MatchMakingKeyValuePair_t
struct CORDL_TYPE MatchMakingKeyValuePair_t {
public:
// Declarations
/// @brief Method .ctor, addr 0x180397590, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  strKey, ::StringW  strValue) ;

// Ctor Parameters []
// @brief default ctor
constexpr MatchMakingKeyValuePair_t() ;

// Ctor Parameters [CppParam { name: "m_szKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_szValue", ty: "::StringW", modifiers: "", def_value: None }]
constexpr MatchMakingKeyValuePair_t(::StringW  m_szKey, ::StringW  m_szValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_szKey, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_szKey;

/// @brief Field m_szValue, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_szValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::MatchMakingKeyValuePair_t, m_szKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::MatchMakingKeyValuePair_t, m_szValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MatchMakingKeyValuePair_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
