#pragma once
// IWYU pragma private; include "Steamworks/StoreAuthURLResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoreAuthURLResponse_t)
// Forward declare root types
namespace Steamworks {
struct StoreAuthURLResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::StoreAuthURLResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::StoreAuthURLResponse_t, "Steamworks", "StoreAuthURLResponse_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.StoreAuthURLResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE StoreAuthURLResponse_t {
public:
// Declarations
 __declspec(property(get=get_m_szURL, put=set_m_szURL)) ::StringW  m_szURL;

/// @brief Method get_m_szURL, addr 0x18054f850, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_szURL() ;

/// @brief Method set_m_szURL, addr 0x1805a7720, size 0x90, virtual false, abstract: false, final false
inline void set_m_szURL(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StoreAuthURLResponse_t() ;

// Ctor Parameters [CppParam { name: "m_szURL_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr StoreAuthURLResponse_t(::ArrayW<uint8_t>  m_szURL_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xa5)};

/// @brief Field m_szURL_, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_szURL_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::StoreAuthURLResponse_t, m_szURL_) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::StoreAuthURLResponse_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
