#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerInventory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerInventory_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamInventoryResult_t_def.hpp"
#include "Steamworks/zzzz__SteamInventoryUpdateHandle_t_def.hpp"
#include "Steamworks/zzzz__SteamItemDef_t_def.hpp"
#include "Steamworks/zzzz__SteamItemDetails_t_def.hpp"
#include "Steamworks/zzzz__SteamItemInstanceID_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetResultStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamGameServerInventory::GetResultStatus)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180591780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultStatus", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetResultItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::ArrayW<::Steamworks::SteamItemDetails_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::GetResultItems)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180591660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultItems", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDetails_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetResultItemProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, uint32_t, ::StringW, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::GetResultItemProperty)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180591420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultItemProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetResultTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamGameServerInventory::GetResultTimestamp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180591850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultTimestamp", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.CheckResultSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerInventory::CheckResultSteamID)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180590460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"CheckResultSteamID", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.DestroyResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamGameServerInventory::DestroyResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180590740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"DestroyResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetAllItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamGameServerInventory::GetAllItems)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180590a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetAllItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetItemsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::GetItemsByID)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805910c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemsByID", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SerializeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::ArrayW<uint8_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::SerializeResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180592110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SerializeResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.DeserializeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<uint8_t>, uint32_t, bool)>(&::Steamworks::SteamGameServerInventory::DeserializeResult)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180590630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"DeserializeResult", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GenerateItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::GenerateItems)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180590970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GenerateItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GrantPromoItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamGameServerInventory::GrantPromoItems)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180591920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GrantPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.AddPromoItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemDef_t)>(&::Steamworks::SteamGameServerInventory::AddPromoItem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180590280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"AddPromoItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.AddPromoItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::AddPromoItems)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180590360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"AddPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.ConsumeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemInstanceID_t, uint32_t)>(&::Steamworks::SteamGameServerInventory::ConsumeItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180590540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"ConsumeItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.ExchangeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::ExchangeItems)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180590810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"ExchangeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.TransferItemQuantity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemInstanceID_t, uint32_t, ::Steamworks::SteamItemInstanceID_t)>(&::Steamworks::SteamGameServerInventory::TransferItemQuantity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180592f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TransferItemQuantity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SendItemDropHeartbeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServerInventory::SendItemDropHeartbeat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180592040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SendItemDropHeartbeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.TriggerItemDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemDef_t)>(&::Steamworks::SteamGameServerInventory::TriggerItemDrop)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180593020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TriggerItemDrop", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.TradeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::CSteamID, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::TradeItems)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180592da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TradeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.LoadItemDefinitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerInventory::LoadItemDefinitions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180591be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"LoadItemDefinitions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetItemDefinitionIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::GetItemDefinitionIDs)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180590c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemDefinitionIDs", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetItemDefinitionProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamItemDef_t, ::StringW, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::GetItemDefinitionProperty)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180590da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemDefinitionProperty", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.RequestEligiblePromoItemDefinitionsIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerInventory::RequestEligiblePromoItemDefinitionsIDs)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180591e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RequestEligiblePromoItemDefinitionsIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetEligiblePromoItemDefinitionIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::ArrayW<::Steamworks::SteamItemDef_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerInventory::GetEligiblePromoItemDefinitionIDs)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180590b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetEligiblePromoItemDefinitionIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.StartPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::StartPurchase)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180592ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.RequestPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamGameServerInventory::RequestPrices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180591f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RequestPrices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetNumItemsWithPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerInventory::GetNumItemsWithPrices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180591350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetNumItemsWithPrices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetItemsWithPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>, uint32_t)>(&::Steamworks::SteamGameServerInventory::GetItemsWithPrices)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805911c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemsWithPrices", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.GetItemPrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamItemDef_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamGameServerInventory::GetItemPrice)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180590fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemPrice", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.StartUpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamInventoryUpdateHandle_t (*)()>(&::Steamworks::SteamGameServerInventory::StartUpdateProperties)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180592bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"StartUpdateProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.RemoveProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW)>(&::Steamworks::SteamGameServerInventory::RemoveProperty)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180591cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RemoveProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerInventory::SetProperty)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180592210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, bool)>(&::Steamworks::SteamGameServerInventory::SetProperty)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805928e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, int64_t)>(&::Steamworks::SteamGameServerInventory::SetProperty)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805924e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, float_t)>(&::Steamworks::SteamGameServerInventory::SetProperty)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805926e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.SubmitUpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamGameServerInventory::SubmitUpdateProperties)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180592cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SubmitUpdateProperties", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerInventory.InspectItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::StringW)>(&::Steamworks::SteamGameServerInventory::InspectItem)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180591a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"InspectItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::EResult Steamworks::SteamGameServerInventory::GetResultStatus(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultStatus", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamGameServerInventory::GetResultItems(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<::Steamworks::SteamItemDetails_t>  pOutItemsArray, ::by_ref<uint32_t>  punOutItemsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultItems", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDetails_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, pOutItemsArray, punOutItemsArraySize);
}
inline bool Steamworks::SteamGameServerInventory::GetResultItemProperty(::Steamworks::SteamInventoryResult_t  resultHandle, uint32_t  unItemIndex, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultItemProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}
inline uint32_t Steamworks::SteamGameServerInventory::GetResultTimestamp(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetResultTimestamp", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamGameServerInventory::CheckResultSteamID(::Steamworks::SteamInventoryResult_t  resultHandle, ::Steamworks::CSteamID  steamIDExpected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"CheckResultSteamID", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, steamIDExpected);
}
inline void Steamworks::SteamGameServerInventory::DestroyResult(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"DestroyResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamGameServerInventory::GetAllItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetAllItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle);
}
inline bool Steamworks::SteamGameServerInventory::GetItemsByID(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pInstanceIDs, uint32_t  unCountInstanceIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemsByID", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}
inline bool Steamworks::SteamGameServerInventory::SerializeResult(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<uint8_t>  pOutBuffer, ::by_ref<uint32_t>  punOutBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SerializeResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, pOutBuffer, punOutBufferSize);
}
inline bool Steamworks::SteamGameServerInventory::DeserializeResult(::by_ref<::Steamworks::SteamInventoryResult_t>  pOutResultHandle, ::ArrayW<uint8_t>  pBuffer, uint32_t  unBufferSize, bool  bRESERVED_MUST_BE_FALSE)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"DeserializeResult", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}
inline bool Steamworks::SteamGameServerInventory::GenerateItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GenerateItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}
inline bool Steamworks::SteamGameServerInventory::GrantPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GrantPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle);
}
inline bool Steamworks::SteamGameServerInventory::AddPromoItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  itemDef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"AddPromoItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemDef);
}
inline bool Steamworks::SteamGameServerInventory::AddPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"AddPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayItemDefs, unArrayLength);
}
inline bool Steamworks::SteamGameServerInventory::ConsumeItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemConsume, uint32_t  unQuantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"ConsumeItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemConsume, unQuantity);
}
inline bool Steamworks::SteamGameServerInventory::ExchangeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayGenerate, ::ArrayW<uint32_t>  punArrayGenerateQuantity, uint32_t  unArrayGenerateLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayDestroy, ::ArrayW<uint32_t>  punArrayDestroyQuantity, uint32_t  unArrayDestroyLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"ExchangeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}
inline bool Steamworks::SteamGameServerInventory::TransferItemQuantity(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemIdSource, uint32_t  unQuantity, ::Steamworks::SteamItemInstanceID_t  itemIdDest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TransferItemQuantity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}
inline void Steamworks::SteamGameServerInventory::SendItemDropHeartbeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SendItemDropHeartbeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerInventory::TriggerItemDrop(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  dropListDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TriggerItemDrop", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, dropListDefinition);
}
inline bool Steamworks::SteamGameServerInventory::TradeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::CSteamID  steamIDTradePartner, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGive, ::ArrayW<uint32_t>  pArrayGiveQuantity, uint32_t  nArrayGiveLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGet, ::ArrayW<uint32_t>  pArrayGetQuantity, uint32_t  nArrayGetLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"TradeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}
inline bool Steamworks::SteamGameServerInventory::LoadItemDefinitions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"LoadItemDefinitions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerInventory::GetItemDefinitionIDs(::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemDefinitionIDs", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pItemDefIDs, punItemDefIDsArraySize);
}
inline bool Steamworks::SteamGameServerInventory::GetItemDefinitionProperty(::Steamworks::SteamItemDef_t  iDefinition, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemDefinitionProperty", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerInventory::RequestEligiblePromoItemDefinitionsIDs(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RequestEligiblePromoItemDefinitionsIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamID);
}
inline bool Steamworks::SteamGameServerInventory::GetEligiblePromoItemDefinitionIDs(::Steamworks::CSteamID  steamID, ::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetEligiblePromoItemDefinitionIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamID, pItemDefIDs, punItemDefIDsArraySize);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerInventory::StartPurchase(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pArrayItemDefs, punArrayQuantity, unArrayLength);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerInventory::RequestPrices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RequestPrices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamGameServerInventory::GetNumItemsWithPrices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetNumItemsWithPrices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerInventory::GetItemsWithPrices(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint64_t>  pCurrentPrices, ::ArrayW<uint64_t>  pBasePrices, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemsWithPrices", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
}
inline bool Steamworks::SteamGameServerInventory::GetItemPrice(::Steamworks::SteamItemDef_t  iDefinition, ::by_ref<uint64_t>  pCurrentPrice, ::by_ref<uint64_t>  pBasePrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"GetItemPrice", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iDefinition, pCurrentPrice, pBasePrice);
}
inline ::Steamworks::SteamInventoryUpdateHandle_t Steamworks::SteamGameServerInventory::StartUpdateProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"StartUpdateProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamInventoryUpdateHandle_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerInventory::RemoveProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"RemoveProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName);
}
inline bool Steamworks::SteamGameServerInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, ::StringW  pchPropertyValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, pchPropertyValue);
}
inline bool Steamworks::SteamGameServerInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, bValue);
}
inline bool Steamworks::SteamGameServerInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, int64_t  nValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, nValue);
}
inline bool Steamworks::SteamGameServerInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, float_t  flValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, flValue);
}
inline bool Steamworks::SteamGameServerInventory::SubmitUpdateProperties(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"SubmitUpdateProperties", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pResultHandle);
}
inline bool Steamworks::SteamGameServerInventory::InspectItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::StringW  pchItemToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerInventory*>(),
                        {"InspectItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pchItemToken);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerInventory::SteamGameServerInventory()   {
}
