#pragma once
// IWYU pragma private; include "Steamworks/AppProofOfPurchaseKeyResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppProofOfPurchaseKeyResponse_t)
// Forward declare root types
namespace Steamworks {
struct AppProofOfPurchaseKeyResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::AppProofOfPurchaseKeyResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::AppProofOfPurchaseKeyResponse_t, "Steamworks", "AppProofOfPurchaseKeyResponse_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.AppProofOfPurchaseKeyResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE AppProofOfPurchaseKeyResponse_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchKey, put=set_m_rgchKey)) ::StringW  m_rgchKey;

/// @brief Method get_m_rgchKey, addr 0x18054afb0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchKey() ;

/// @brief Method set_m_rgchKey, addr 0x18054b030, size 0x260, virtual false, abstract: false, final false
inline void set_m_rgchKey(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AppProofOfPurchaseKeyResponse_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_cchKeyLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_rgchKey_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr AppProofOfPurchaseKeyResponse_t(::Steamworks::EResult  m_eResult, uint32_t  m_nAppID, uint32_t  m_cchKeyLength, ::ArrayW<uint8_t>  m_rgchKey_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x3fd)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nAppID, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_nAppID;

/// @brief Field m_cchKeyLength, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_cchKeyLength;

/// @brief Field m_rgchKey_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchKey_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::AppProofOfPurchaseKeyResponse_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::AppProofOfPurchaseKeyResponse_t, m_nAppID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::AppProofOfPurchaseKeyResponse_t, m_cchKeyLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::AppProofOfPurchaseKeyResponse_t, m_rgchKey_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::AppProofOfPurchaseKeyResponse_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
