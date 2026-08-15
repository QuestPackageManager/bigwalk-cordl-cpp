#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EcomInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EcomInterface)
namespace Epic::OnlineServices::Ecom {
struct CatalogItem;
}
namespace Epic::OnlineServices::Ecom {
struct CatalogOffer;
}
namespace Epic::OnlineServices::Ecom {
struct CatalogRelease;
}
namespace Epic::OnlineServices::Ecom {
struct CheckoutOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByIdOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByNameAndIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemByIdOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemImageInfoByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemReleaseByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemEntitlementsResultByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemedEntitlementByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferByIdOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferImageInfoByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferItemByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIdOptions;
}
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct Entitlement;
}
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsByNameCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetItemImageInfoCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetItemReleaseCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetLastRedeemEntitlementsResultCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetLastRedeemedEntitlementsCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferImageInfoCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferItemCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct GetTransactionCountOptions;
}
namespace Epic::OnlineServices::Ecom {
struct KeyImageInfo;
}
namespace Epic::OnlineServices::Ecom {
class OnCheckoutCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementTokenCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementsCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOffersCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipBySandboxIdsCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipTokenCallback;
}
namespace Epic::OnlineServices::Ecom {
class OnRedeemEntitlementsCallback;
}
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementTokenOptions;
}
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementsOptions;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOffersOptions;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipBySandboxIdsOptions;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipOptions;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipTokenOptions;
}
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsOptions;
}
namespace Epic::OnlineServices::Ecom {
class Transaction;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
class EcomInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Ecom::EcomInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::EcomInterface*, "Epic.OnlineServices.Ecom", "EcomInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Ecom {
// Is value type: false
// CS Name: Epic.OnlineServices.Ecom.EcomInterface
class CORDL_TYPE EcomInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method Checkout, addr 0x180513850, size 0x270, virtual false, abstract: false, final false
inline void Checkout(::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnCheckoutCallback*  completionDelegate) ;

/// @brief Method CopyEntitlementById, addr 0x180513ac0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyEntitlementById(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement) ;

/// @brief Method CopyEntitlementByIndex, addr 0x180513ba0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement) ;

/// @brief Method CopyEntitlementByNameAndIndex, addr 0x180513c60, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyEntitlementByNameAndIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement) ;

/// @brief Method CopyItemById, addr 0x180513d40, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyItemById(::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>  outItem) ;

/// @brief Method CopyItemImageInfoByIndex, addr 0x180513e20, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyItemImageInfoByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>  outImageInfo) ;

/// @brief Method CopyItemReleaseByIndex, addr 0x180513f00, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyItemReleaseByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogRelease>>  outRelease) ;

/// @brief Method CopyLastRedeemEntitlementsResultByIndex, addr 0x180513fe0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLastRedeemEntitlementsResultByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outEntitlementId) ;

/// @brief Method CopyLastRedeemedEntitlementByIndex, addr 0x1805140c0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLastRedeemedEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outRedeemedEntitlementId) ;

/// @brief Method CopyOfferById, addr 0x1805141a0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyOfferById(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>  outOffer) ;

/// @brief Method CopyOfferByIndex, addr 0x180514280, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyOfferByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>  outOffer) ;

/// @brief Method CopyOfferImageInfoByIndex, addr 0x180514340, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyOfferImageInfoByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>  outImageInfo) ;

/// @brief Method CopyOfferItemByIndex, addr 0x180514420, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyOfferItemByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>  outItem) ;

/// @brief Method CopyTransactionById, addr 0x180514500, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyTransactionById(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions>  options, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>  outTransaction) ;

/// @brief Method CopyTransactionByIndex, addr 0x1805145d0, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyTransactionByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>  outTransaction) ;

/// @brief Method GetEntitlementsByNameCount, addr 0x180514680, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetEntitlementsByNameCount(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>  options) ;

/// @brief Method GetEntitlementsCount, addr 0x180514710, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions>  options) ;

/// @brief Method GetItemImageInfoCount, addr 0x180514780, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetItemImageInfoCount(::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions>  options) ;

/// @brief Method GetItemReleaseCount, addr 0x180514810, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetItemReleaseCount(::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions>  options) ;

/// @brief Method GetLastRedeemEntitlementsResultCount, addr 0x1805148a0, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetLastRedeemEntitlementsResultCount(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>  options) ;

/// @brief Method GetLastRedeemedEntitlementsCount, addr 0x180514920, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetLastRedeemedEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptions>  options) ;

/// @brief Method GetOfferCount, addr 0x180514990, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetOfferCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptions>  options) ;

/// @brief Method GetOfferImageInfoCount, addr 0x180514a00, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetOfferImageInfoCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>  options) ;

/// @brief Method GetOfferItemCount, addr 0x180514a90, size 0x90, virtual false, abstract: false, final false
inline uint32_t GetOfferItemCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptions>  options) ;

/// @brief Method GetTransactionCount, addr 0x180514b20, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetTransactionCount(::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>  options) ;

static inline ::Epic::OnlineServices::Ecom::EcomInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Ecom::EcomInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryEntitlementToken, addr 0x180514b90, size 0x240, virtual false, abstract: false, final false
inline void QueryEntitlementToken(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallback*  completionDelegate) ;

/// @brief Method QueryEntitlements, addr 0x180514dd0, size 0x270, virtual false, abstract: false, final false
inline void QueryEntitlements(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*  completionDelegate) ;

/// @brief Method QueryOffers, addr 0x180515040, size 0x230, virtual false, abstract: false, final false
inline void QueryOffers(::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOffersCallback*  completionDelegate) ;

/// @brief Method QueryOwnership, addr 0x180515710, size 0x260, virtual false, abstract: false, final false
inline void QueryOwnership(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*  completionDelegate) ;

/// @brief Method QueryOwnershipBySandboxIds, addr 0x180515270, size 0x240, virtual false, abstract: false, final false
inline void QueryOwnershipBySandboxIds(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*  completionDelegate) ;

/// @brief Method QueryOwnershipToken, addr 0x1805154b0, size 0x260, virtual false, abstract: false, final false
inline void QueryOwnershipToken(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*  completionDelegate) ;

/// @brief Method RedeemEntitlements, addr 0x180515970, size 0x240, virtual false, abstract: false, final false
inline void RedeemEntitlements(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EcomInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EcomInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EcomInterface(EcomInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EcomInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EcomInterface(EcomInterface const& ) = delete;

/// @brief Field CATALOGITEMID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGITEMID_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field CATALOGITEM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGITEM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CATALOGITEM_ENTITLEMENTENDTIMESTAMP_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGITEM_ENTITLEMENTENDTIMESTAMP_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field CATALOGOFFERID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGOFFERID_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field CATALOGOFFER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGOFFER_API_LATEST{static_cast<int32_t>(0x5)};

/// @brief Field CATALOGOFFER_EFFECTIVEDATETIMESTAMP_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGOFFER_EFFECTIVEDATETIMESTAMP_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field CATALOGOFFER_EXPIRATIONTIMESTAMP_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGOFFER_EXPIRATIONTIMESTAMP_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field CATALOGOFFER_RELEASEDATETIMESTAMP_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGOFFER_RELEASEDATETIMESTAMP_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field CATALOGRELEASE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CATALOGRELEASE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CHECKOUTENTRY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CHECKOUTENTRY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CHECKOUT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CHECKOUT_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field CHECKOUT_MAX_ENTRIES offset 0xffffffff size 0x4
static constexpr int32_t  CHECKOUT_MAX_ENTRIES{static_cast<int32_t>(0xa)};

/// @brief Field COPYENTITLEMENTBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYENTITLEMENTBYID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYENTITLEMENTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYENTITLEMENTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYENTITLEMENTBYNAMEANDINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYENTITLEMENTBYNAMEANDINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYITEMBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYITEMBYID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYITEMIMAGEINFOBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYITEMIMAGEINFOBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYITEMRELEASEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYITEMRELEASEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLASTREDEEMEDENTITLEMENTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLASTREDEEMEDENTITLEMENTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLASTREDEEMENTITLEMENTSRESULTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLASTREDEEMENTITLEMENTSRESULTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYOFFERBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYOFFERBYID_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field COPYOFFERBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYOFFERBYINDEX_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field COPYOFFERIMAGEINFOBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYOFFERIMAGEINFOBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYOFFERITEMBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYOFFERITEMBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYTRANSACTIONBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYTRANSACTIONBYID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYTRANSACTIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYTRANSACTIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ENTITLEMENTID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  ENTITLEMENTID_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field ENTITLEMENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENTITLEMENT_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field ENTITLEMENT_ENDTIMESTAMP_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  ENTITLEMENT_ENDTIMESTAMP_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field GETENTITLEMENTSBYNAMECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETENTITLEMENTSBYNAMECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETENTITLEMENTSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETENTITLEMENTSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETITEMIMAGEINFOCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETITEMIMAGEINFOCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETITEMRELEASECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETITEMRELEASECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLASTREDEEMEDENTITLEMENTSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLASTREDEEMEDENTITLEMENTSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLASTREDEEMENTITLEMENTSRESULTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLASTREDEEMENTITLEMENTSRESULTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETOFFERCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETOFFERCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETOFFERIMAGEINFOCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETOFFERIMAGEINFOCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETOFFERITEMCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETOFFERITEMCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETTRANSACTIONCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETTRANSACTIONCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ITEMOWNERSHIP_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ITEMOWNERSHIP_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field KEYIMAGEINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  KEYIMAGEINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYENTITLEMENTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYENTITLEMENTS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field QUERYENTITLEMENTS_MAX_ENTITLEMENT_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYENTITLEMENTS_MAX_ENTITLEMENT_IDS{static_cast<int32_t>(0x100)};

/// @brief Field QUERYENTITLEMENTTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYENTITLEMENTTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYENTITLEMENTTOKEN_MAX_ENTITLEMENT_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYENTITLEMENTTOKEN_MAX_ENTITLEMENT_IDS{static_cast<int32_t>(0x20)};

/// @brief Field QUERYOFFERS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOFFERS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYOWNERSHIPBYSANDBOXIDSOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIPBYSANDBOXIDSOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYOWNERSHIPTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIPTOKEN_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYOWNERSHIPTOKEN_MAX_CATALOGITEM_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIPTOKEN_MAX_CATALOGITEM_IDS{static_cast<int32_t>(0x20)};

/// @brief Field QUERYOWNERSHIP_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIP_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYOWNERSHIP_MAX_CATALOG_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIP_MAX_CATALOG_IDS{static_cast<int32_t>(0x190)};

/// @brief Field QUERYOWNERSHIP_MAX_SANDBOX_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOWNERSHIP_MAX_SANDBOX_IDS{static_cast<int32_t>(0xa)};

/// @brief Field REDEEMENTITLEMENTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REDEEMENTITLEMENTS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field REDEEMENTITLEMENTS_MAX_IDS offset 0xffffffff size 0x4
static constexpr int32_t  REDEEMENTITLEMENTS_MAX_IDS{static_cast<int32_t>(0x20)};

/// @brief Field TRANSACTIONID_MAXIMUM_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  TRANSACTIONID_MAXIMUM_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field TRANSACTIONID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  TRANSACTIONID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field TRANSACTION_COPYENTITLEMENTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  TRANSACTION_COPYENTITLEMENTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field TRANSACTION_GETENTITLEMENTSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  TRANSACTION_GETENTITLEMENTSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Ecom::EcomInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
