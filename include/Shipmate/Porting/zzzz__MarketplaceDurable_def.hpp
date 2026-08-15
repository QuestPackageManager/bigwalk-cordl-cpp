#pragma once
// IWYU pragma private; include "Shipmate/Porting/MarketplaceDurable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarketplaceDurable)
// Forward declare root types
namespace Shipmate::Porting {
class MarketplaceDurable;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::MarketplaceDurable*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::MarketplaceDurable*, "Shipmate.Porting", "MarketplaceDurable");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.MarketplaceDurable
class CORDL_TYPE MarketplaceDurable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ProductName)) ::StringW  ProductName;

 __declspec(property(get=get_SteamStoreId)) uint32_t  SteamStoreId;

 __declspec(property(get=get_XboxStoreId)) ::StringW  XboxStoreId;

/// @brief Field mProductName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mProductName, put=__cordl_internal_set_mProductName)) ::StringW  mProductName;

/// @brief Field mSteamStoreId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mSteamStoreId, put=__cordl_internal_set_mSteamStoreId)) uint32_t  mSteamStoreId;

/// @brief Field mXboxStoreId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mXboxStoreId, put=__cordl_internal_set_mXboxStoreId)) ::StringW  mXboxStoreId;

static inline ::Shipmate::Porting::MarketplaceDurable* New_ctor(::StringW  aProductName, ::StringW  aXboxStoreId, uint32_t  aSteamStoreId) ;

constexpr ::StringW const& __cordl_internal_get_mProductName() const;

constexpr ::StringW& __cordl_internal_get_mProductName() ;

constexpr uint32_t const& __cordl_internal_get_mSteamStoreId() const;

constexpr uint32_t& __cordl_internal_get_mSteamStoreId() ;

constexpr ::StringW const& __cordl_internal_get_mXboxStoreId() const;

constexpr ::StringW& __cordl_internal_get_mXboxStoreId() ;

constexpr void __cordl_internal_set_mProductName(::StringW  value) ;

constexpr void __cordl_internal_set_mSteamStoreId(uint32_t  value) ;

constexpr void __cordl_internal_set_mXboxStoreId(::StringW  value) ;

/// @brief Method .ctor, addr 0x18167ab70, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  aProductName, ::StringW  aXboxStoreId, uint32_t  aSteamStoreId) ;

/// @brief Method get_ProductName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ProductName() ;

/// @brief Method get_SteamStoreId, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SteamStoreId() ;

/// @brief Method get_XboxStoreId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_XboxStoreId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarketplaceDurable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarketplaceDurable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarketplaceDurable(MarketplaceDurable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarketplaceDurable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarketplaceDurable(MarketplaceDurable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20619};

/// @brief Field mProductName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mProductName;

/// @brief Field mXboxStoreId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mXboxStoreId;

/// @brief Field mSteamStoreId, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___mSteamStoreId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::MarketplaceDurable, ___mProductName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::MarketplaceDurable, ___mXboxStoreId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::MarketplaceDurable, ___mSteamStoreId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::MarketplaceDurable) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
