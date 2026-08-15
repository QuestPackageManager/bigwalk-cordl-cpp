#pragma once
// IWYU pragma private; include "Steamworks/SteamInventory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventory)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct SteamInventoryResult_t;
}
namespace Steamworks {
struct SteamInventoryUpdateHandle_t;
}
namespace Steamworks {
struct SteamItemDef_t;
}
namespace Steamworks {
struct SteamItemDetails_t;
}
namespace Steamworks {
struct SteamItemInstanceID_t;
}
// Forward declare root types
namespace Steamworks {
class SteamInventory;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamInventory*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventory*, "Steamworks", "SteamInventory");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamInventory
class CORDL_TYPE SteamInventory : public ::System::Object {
public:
// Declarations
/// @brief Method AddPromoItem, addr 0x1805b01c0, size 0x50, virtual false, abstract: false, final false
static inline bool AddPromoItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  itemDef) ;

/// @brief Method AddPromoItems, addr 0x1805b0210, size 0x60, virtual false, abstract: false, final false
static inline bool AddPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, uint32_t  unArrayLength) ;

/// @brief Method CheckResultSteamID, addr 0x1805b0270, size 0x50, virtual false, abstract: false, final false
static inline bool CheckResultSteamID(::Steamworks::SteamInventoryResult_t  resultHandle, ::Steamworks::CSteamID  steamIDExpected) ;

/// @brief Method ConsumeItem, addr 0x1805b02c0, size 0x60, virtual false, abstract: false, final false
static inline bool ConsumeItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemConsume, uint32_t  unQuantity) ;

/// @brief Method DeserializeResult, addr 0x1805b0320, size 0x70, virtual false, abstract: false, final false
static inline bool DeserializeResult(::by_ref<::Steamworks::SteamInventoryResult_t>  pOutResultHandle, ::ArrayW<uint8_t>  pBuffer, uint32_t  unBufferSize, bool  bRESERVED_MUST_BE_FALSE) ;

/// @brief Method DestroyResult, addr 0x1805b0390, size 0x40, virtual false, abstract: false, final false
static inline void DestroyResult(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method ExchangeItems, addr 0x1805b03d0, size 0xa0, virtual false, abstract: false, final false
static inline bool ExchangeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayGenerate, ::ArrayW<uint32_t>  punArrayGenerateQuantity, uint32_t  unArrayGenerateLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayDestroy, ::ArrayW<uint32_t>  punArrayDestroyQuantity, uint32_t  unArrayDestroyLength) ;

/// @brief Method GenerateItems, addr 0x1805b0470, size 0x70, virtual false, abstract: false, final false
static inline bool GenerateItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method GetAllItems, addr 0x1805b04e0, size 0x40, virtual false, abstract: false, final false
static inline bool GetAllItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method GetEligiblePromoItemDefinitionIDs, addr 0x1805b0520, size 0x80, virtual false, abstract: false, final false
static inline bool GetEligiblePromoItemDefinitionIDs(::Steamworks::CSteamID  steamID, ::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method GetItemDefinitionIDs, addr 0x1805b05a0, size 0x70, virtual false, abstract: false, final false
static inline bool GetItemDefinitionIDs(::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method GetItemDefinitionProperty, addr 0x1805b0610, size 0x150, virtual false, abstract: false, final false
static inline bool GetItemDefinitionProperty(::Steamworks::SteamItemDef_t  iDefinition, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method GetItemPrice, addr 0x1805b0760, size 0x60, virtual false, abstract: false, final false
static inline bool GetItemPrice(::Steamworks::SteamItemDef_t  iDefinition, ::by_ref<uint64_t>  pCurrentPrice, ::by_ref<uint64_t>  pBasePrice) ;

/// @brief Method GetItemsByID, addr 0x1805b07c0, size 0x60, virtual false, abstract: false, final false
static inline bool GetItemsByID(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pInstanceIDs, uint32_t  unCountInstanceIDs) ;

/// @brief Method GetItemsWithPrices, addr 0x1805b0820, size 0xd0, virtual false, abstract: false, final false
static inline bool GetItemsWithPrices(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint64_t>  pCurrentPrices, ::ArrayW<uint64_t>  pBasePrices, uint32_t  unArrayLength) ;

/// @brief Method GetNumItemsWithPrices, addr 0x1805b08f0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetNumItemsWithPrices() ;

/// @brief Method GetResultItemProperty, addr 0x1805b0920, size 0x150, virtual false, abstract: false, final false
static inline bool GetResultItemProperty(::Steamworks::SteamInventoryResult_t  resultHandle, uint32_t  unItemIndex, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method GetResultItems, addr 0x1805b0a70, size 0x80, virtual false, abstract: false, final false
static inline bool GetResultItems(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<::Steamworks::SteamItemDetails_t>  pOutItemsArray, ::by_ref<uint32_t>  punOutItemsArraySize) ;

/// @brief Method GetResultStatus, addr 0x1805b0af0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetResultStatus(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method GetResultTimestamp, addr 0x1805b0b30, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetResultTimestamp(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method GrantPromoItems, addr 0x1805b0b70, size 0x40, virtual false, abstract: false, final false
static inline bool GrantPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method InspectItem, addr 0x1805b0bb0, size 0xf0, virtual false, abstract: false, final false
static inline bool InspectItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::StringW  pchItemToken) ;

/// @brief Method LoadItemDefinitions, addr 0x1805b0ca0, size 0x30, virtual false, abstract: false, final false
static inline bool LoadItemDefinitions() ;

/// @brief Method RemoveProperty, addr 0x1805b0cd0, size 0x100, virtual false, abstract: false, final false
static inline bool RemoveProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName) ;

/// @brief Method RequestEligiblePromoItemDefinitionsIDs, addr 0x1805b0dd0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(::Steamworks::CSteamID  steamID) ;

/// @brief Method RequestPrices, addr 0x1805b0e10, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestPrices() ;

/// @brief Method SendItemDropHeartbeat, addr 0x1805b0e40, size 0x30, virtual false, abstract: false, final false
static inline void SendItemDropHeartbeat() ;

/// @brief Method SerializeResult, addr 0x1805b0e70, size 0x60, virtual false, abstract: false, final false
static inline bool SerializeResult(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<uint8_t>  pOutBuffer, ::by_ref<uint32_t>  punOutBufferSize) ;

/// @brief Method SetProperty, addr 0x1805b0ed0, size 0x110, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, bool  bValue) ;

/// @brief Method SetProperty, addr 0x1805b0fe0, size 0x120, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, float_t  flValue) ;

/// @brief Method SetProperty, addr 0x1805b1290, size 0x110, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, int64_t  nValue) ;

/// @brief Method SetProperty, addr 0x1805b1100, size 0x190, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, ::StringW  pchPropertyValue) ;

/// @brief Method StartPurchase, addr 0x1805b13a0, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StartPurchase(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method StartUpdateProperties, addr 0x1805b1400, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamInventoryUpdateHandle_t StartUpdateProperties() ;

/// @brief Method SubmitUpdateProperties, addr 0x1805b1430, size 0x50, virtual false, abstract: false, final false
static inline bool SubmitUpdateProperties(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method TradeItems, addr 0x1805b1480, size 0xa0, virtual false, abstract: false, final false
static inline bool TradeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::CSteamID  steamIDTradePartner, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGive, ::ArrayW<uint32_t>  pArrayGiveQuantity, uint32_t  nArrayGiveLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGet, ::ArrayW<uint32_t>  pArrayGetQuantity, uint32_t  nArrayGetLength) ;

/// @brief Method TransferItemQuantity, addr 0x1805b1520, size 0x70, virtual false, abstract: false, final false
static inline bool TransferItemQuantity(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemIdSource, uint32_t  unQuantity, ::Steamworks::SteamItemInstanceID_t  itemIdDest) ;

/// @brief Method TriggerItemDrop, addr 0x1805b1590, size 0x50, virtual false, abstract: false, final false
static inline bool TriggerItemDrop(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  dropListDefinition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamInventory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamInventory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamInventory(SteamInventory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamInventory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamInventory(SteamInventory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamInventory) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
