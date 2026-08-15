#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerInventory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerInventory)
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
class SteamGameServerInventory;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerInventory*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerInventory*, "Steamworks", "SteamGameServerInventory");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerInventory
class CORDL_TYPE SteamGameServerInventory : public ::System::Object {
public:
// Declarations
/// @brief Method AddPromoItem, addr 0x180590280, size 0xe0, virtual false, abstract: false, final false
static inline bool AddPromoItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  itemDef) ;

/// @brief Method AddPromoItems, addr 0x180590360, size 0x100, virtual false, abstract: false, final false
static inline bool AddPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, uint32_t  unArrayLength) ;

/// @brief Method CheckResultSteamID, addr 0x180590460, size 0xe0, virtual false, abstract: false, final false
static inline bool CheckResultSteamID(::Steamworks::SteamInventoryResult_t  resultHandle, ::Steamworks::CSteamID  steamIDExpected) ;

/// @brief Method ConsumeItem, addr 0x180590540, size 0xf0, virtual false, abstract: false, final false
static inline bool ConsumeItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemConsume, uint32_t  unQuantity) ;

/// @brief Method DeserializeResult, addr 0x180590630, size 0x110, virtual false, abstract: false, final false
static inline bool DeserializeResult(::by_ref<::Steamworks::SteamInventoryResult_t>  pOutResultHandle, ::ArrayW<uint8_t>  pBuffer, uint32_t  unBufferSize, bool  bRESERVED_MUST_BE_FALSE) ;

/// @brief Method DestroyResult, addr 0x180590740, size 0xd0, virtual false, abstract: false, final false
static inline void DestroyResult(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method ExchangeItems, addr 0x180590810, size 0x160, virtual false, abstract: false, final false
static inline bool ExchangeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayGenerate, ::ArrayW<uint32_t>  punArrayGenerateQuantity, uint32_t  unArrayGenerateLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayDestroy, ::ArrayW<uint32_t>  punArrayDestroyQuantity, uint32_t  unArrayDestroyLength) ;

/// @brief Method GenerateItems, addr 0x180590970, size 0x120, virtual false, abstract: false, final false
static inline bool GenerateItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method GetAllItems, addr 0x180590a90, size 0xe0, virtual false, abstract: false, final false
static inline bool GetAllItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method GetEligiblePromoItemDefinitionIDs, addr 0x180590b70, size 0x120, virtual false, abstract: false, final false
static inline bool GetEligiblePromoItemDefinitionIDs(::Steamworks::CSteamID  steamID, ::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method GetItemDefinitionIDs, addr 0x180590c90, size 0x110, virtual false, abstract: false, final false
static inline bool GetItemDefinitionIDs(::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method GetItemDefinitionProperty, addr 0x180590da0, size 0x230, virtual false, abstract: false, final false
static inline bool GetItemDefinitionProperty(::Steamworks::SteamItemDef_t  iDefinition, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method GetItemPrice, addr 0x180590fd0, size 0xf0, virtual false, abstract: false, final false
static inline bool GetItemPrice(::Steamworks::SteamItemDef_t  iDefinition, ::by_ref<uint64_t>  pCurrentPrice, ::by_ref<uint64_t>  pBasePrice) ;

/// @brief Method GetItemsByID, addr 0x1805910c0, size 0x100, virtual false, abstract: false, final false
static inline bool GetItemsByID(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pInstanceIDs, uint32_t  unCountInstanceIDs) ;

/// @brief Method GetItemsWithPrices, addr 0x1805911c0, size 0x190, virtual false, abstract: false, final false
static inline bool GetItemsWithPrices(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint64_t>  pCurrentPrices, ::ArrayW<uint64_t>  pBasePrices, uint32_t  unArrayLength) ;

/// @brief Method GetNumItemsWithPrices, addr 0x180591350, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetNumItemsWithPrices() ;

/// @brief Method GetResultItemProperty, addr 0x180591420, size 0x240, virtual false, abstract: false, final false
static inline bool GetResultItemProperty(::Steamworks::SteamInventoryResult_t  resultHandle, uint32_t  unItemIndex, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method GetResultItems, addr 0x180591660, size 0x120, virtual false, abstract: false, final false
static inline bool GetResultItems(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<::Steamworks::SteamItemDetails_t>  pOutItemsArray, ::by_ref<uint32_t>  punOutItemsArraySize) ;

/// @brief Method GetResultStatus, addr 0x180591780, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetResultStatus(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method GetResultTimestamp, addr 0x180591850, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetResultTimestamp(::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method GrantPromoItems, addr 0x180591920, size 0xe0, virtual false, abstract: false, final false
static inline bool GrantPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method InspectItem, addr 0x180591a00, size 0x1e0, virtual false, abstract: false, final false
static inline bool InspectItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::StringW  pchItemToken) ;

/// @brief Method LoadItemDefinitions, addr 0x180591be0, size 0xd0, virtual false, abstract: false, final false
static inline bool LoadItemDefinitions() ;

/// @brief Method RemoveProperty, addr 0x180591cb0, size 0x1e0, virtual false, abstract: false, final false
static inline bool RemoveProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName) ;

/// @brief Method RequestEligiblePromoItemDefinitionsIDs, addr 0x180591e90, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(::Steamworks::CSteamID  steamID) ;

/// @brief Method RequestPrices, addr 0x180591f70, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestPrices() ;

/// @brief Method SendItemDropHeartbeat, addr 0x180592040, size 0xd0, virtual false, abstract: false, final false
static inline void SendItemDropHeartbeat() ;

/// @brief Method SerializeResult, addr 0x180592110, size 0x100, virtual false, abstract: false, final false
static inline bool SerializeResult(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<uint8_t>  pOutBuffer, ::by_ref<uint32_t>  punOutBufferSize) ;

/// @brief Method SetProperty, addr 0x1805928e0, size 0x200, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, bool  bValue) ;

/// @brief Method SetProperty, addr 0x1805926e0, size 0x200, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, float_t  flValue) ;

/// @brief Method SetProperty, addr 0x1805924e0, size 0x200, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, int64_t  nValue) ;

/// @brief Method SetProperty, addr 0x180592210, size 0x2d0, virtual false, abstract: false, final false
static inline bool SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, ::StringW  pchPropertyValue) ;

/// @brief Method StartPurchase, addr 0x180592ae0, size 0x110, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StartPurchase(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method StartUpdateProperties, addr 0x180592bf0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamInventoryUpdateHandle_t StartUpdateProperties() ;

/// @brief Method SubmitUpdateProperties, addr 0x180592cc0, size 0xe0, virtual false, abstract: false, final false
static inline bool SubmitUpdateProperties(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method TradeItems, addr 0x180592da0, size 0x170, virtual false, abstract: false, final false
static inline bool TradeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::CSteamID  steamIDTradePartner, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGive, ::ArrayW<uint32_t>  pArrayGiveQuantity, uint32_t  nArrayGiveLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGet, ::ArrayW<uint32_t>  pArrayGetQuantity, uint32_t  nArrayGetLength) ;

/// @brief Method TransferItemQuantity, addr 0x180592f10, size 0x110, virtual false, abstract: false, final false
static inline bool TransferItemQuantity(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemIdSource, uint32_t  unQuantity, ::Steamworks::SteamItemInstanceID_t  itemIdDest) ;

/// @brief Method TriggerItemDrop, addr 0x180593020, size 0xe0, virtual false, abstract: false, final false
static inline bool TriggerItemDrop(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  dropListDefinition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerInventory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerInventory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerInventory(SteamGameServerInventory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerInventory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerInventory(SteamGameServerInventory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerInventory) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
