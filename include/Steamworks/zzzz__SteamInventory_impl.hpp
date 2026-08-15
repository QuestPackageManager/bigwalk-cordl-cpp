#pragma once
// IWYU pragma private; include "Steamworks/SteamInventory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamInventory_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamInventoryResult_t_def.hpp"
#include "Steamworks/zzzz__SteamInventoryUpdateHandle_t_def.hpp"
#include "Steamworks/zzzz__SteamItemDef_t_def.hpp"
#include "Steamworks/zzzz__SteamItemDetails_t_def.hpp"
#include "Steamworks/zzzz__SteamItemInstanceID_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamInventory.GetResultStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventory::GetResultStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultStatus", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetResultItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::ArrayW<::Steamworks::SteamItemDetails_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::GetResultItems)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b0a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultItems", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDetails_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetResultItemProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, uint32_t, ::StringW, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::GetResultItemProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805b0920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultItemProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetResultTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventory::GetResultTimestamp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultTimestamp", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.CheckResultSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamInventory::CheckResultSteamID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b0270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"CheckResultSteamID", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.DestroyResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventory::DestroyResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b0390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"DestroyResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetAllItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamInventory::GetAllItems)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b04e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetAllItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetItemsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, uint32_t)>(&::Steamworks::SteamInventory::GetItemsByID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemsByID", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SerializeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::ArrayW<uint8_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::SerializeResult)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SerializeResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.DeserializeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<uint8_t>, uint32_t, bool)>(&::Steamworks::SteamInventory::DeserializeResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"DeserializeResult", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GenerateItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamInventory::GenerateItems)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b0470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GenerateItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GrantPromoItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamInventory::GrantPromoItems)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GrantPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.AddPromoItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemDef_t)>(&::Steamworks::SteamInventory::AddPromoItem)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b01c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"AddPromoItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.AddPromoItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, uint32_t)>(&::Steamworks::SteamInventory::AddPromoItems)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b0210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"AddPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.ConsumeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemInstanceID_t, uint32_t)>(&::Steamworks::SteamInventory::ConsumeItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b02c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"ConsumeItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.ExchangeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamInventory::ExchangeItems)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b03d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"ExchangeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.TransferItemQuantity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemInstanceID_t, uint32_t, ::Steamworks::SteamItemInstanceID_t)>(&::Steamworks::SteamInventory::TransferItemQuantity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TransferItemQuantity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SendItemDropHeartbeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamInventory::SendItemDropHeartbeat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b0e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SendItemDropHeartbeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.TriggerItemDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::SteamItemDef_t)>(&::Steamworks::SteamInventory::TriggerItemDrop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b1590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TriggerItemDrop", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.TradeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::Steamworks::CSteamID, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::Steamworks::SteamItemInstanceID_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamInventory::TradeItems)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TradeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.LoadItemDefinitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamInventory::LoadItemDefinitions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"LoadItemDefinitions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetItemDefinitionIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::GetItemDefinitionIDs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b05a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemDefinitionIDs", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetItemDefinitionProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamItemDef_t, ::StringW, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::GetItemDefinitionProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805b0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemDefinitionProperty", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.RequestEligiblePromoItemDefinitionsIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamInventory::RequestEligiblePromoItemDefinitionsIDs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b0dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RequestEligiblePromoItemDefinitionsIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetEligiblePromoItemDefinitionIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::ArrayW<::Steamworks::SteamItemDef_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamInventory::GetEligiblePromoItemDefinitionIDs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetEligiblePromoItemDefinitionIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.StartPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint32_t>, uint32_t)>(&::Steamworks::SteamInventory::StartPurchase)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b13a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.RequestPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamInventory::RequestPrices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b0e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RequestPrices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetNumItemsWithPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamInventory::GetNumItemsWithPrices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetNumItemsWithPrices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetItemsWithPrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Steamworks::SteamItemDef_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>, uint32_t)>(&::Steamworks::SteamInventory::GetItemsWithPrices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805b0820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemsWithPrices", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.GetItemPrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamItemDef_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamInventory::GetItemPrice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b0760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemPrice", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.StartUpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamInventoryUpdateHandle_t (*)()>(&::Steamworks::SteamInventory::StartUpdateProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"StartUpdateProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.RemoveProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW)>(&::Steamworks::SteamInventory::RemoveProperty)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RemoveProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, ::StringW)>(&::Steamworks::SteamInventory::SetProperty)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805b1100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, bool)>(&::Steamworks::SteamInventory::SetProperty)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805b0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, int64_t)>(&::Steamworks::SteamInventory::SetProperty)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805b1290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::Steamworks::SteamItemInstanceID_t, ::StringW, float_t)>(&::Steamworks::SteamInventory::SetProperty)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805b0fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.SubmitUpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryUpdateHandle_t, ::by_ref<::Steamworks::SteamInventoryResult_t>)>(&::Steamworks::SteamInventory::SubmitUpdateProperties)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SubmitUpdateProperties", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventory.InspectItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamInventoryResult_t>, ::StringW)>(&::Steamworks::SteamInventory::InspectItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"InspectItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::EResult Steamworks::SteamInventory::GetResultStatus(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultStatus", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamInventory::GetResultItems(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<::Steamworks::SteamItemDetails_t>  pOutItemsArray, ::by_ref<uint32_t>  punOutItemsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultItems", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDetails_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, pOutItemsArray, punOutItemsArraySize);
}
inline bool Steamworks::SteamInventory::GetResultItemProperty(::Steamworks::SteamInventoryResult_t  resultHandle, uint32_t  unItemIndex, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultItemProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}
inline uint32_t Steamworks::SteamInventory::GetResultTimestamp(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetResultTimestamp", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamInventory::CheckResultSteamID(::Steamworks::SteamInventoryResult_t  resultHandle, ::Steamworks::CSteamID  steamIDExpected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"CheckResultSteamID", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, steamIDExpected);
}
inline void Steamworks::SteamInventory::DestroyResult(::Steamworks::SteamInventoryResult_t  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"DestroyResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resultHandle);
}
inline bool Steamworks::SteamInventory::GetAllItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetAllItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle);
}
inline bool Steamworks::SteamInventory::GetItemsByID(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pInstanceIDs, uint32_t  unCountInstanceIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemsByID", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}
inline bool Steamworks::SteamInventory::SerializeResult(::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<uint8_t>  pOutBuffer, ::by_ref<uint32_t>  punOutBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SerializeResult", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, resultHandle, pOutBuffer, punOutBufferSize);
}
inline bool Steamworks::SteamInventory::DeserializeResult(::by_ref<::Steamworks::SteamInventoryResult_t>  pOutResultHandle, ::ArrayW<uint8_t>  pBuffer, uint32_t  unBufferSize, bool  bRESERVED_MUST_BE_FALSE)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"DeserializeResult", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}
inline bool Steamworks::SteamInventory::GenerateItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GenerateItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}
inline bool Steamworks::SteamInventory::GrantPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GrantPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle);
}
inline bool Steamworks::SteamInventory::AddPromoItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  itemDef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"AddPromoItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemDef);
}
inline bool Steamworks::SteamInventory::AddPromoItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"AddPromoItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayItemDefs, unArrayLength);
}
inline bool Steamworks::SteamInventory::ConsumeItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemConsume, uint32_t  unQuantity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"ConsumeItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemConsume, unQuantity);
}
inline bool Steamworks::SteamInventory::ExchangeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::ArrayW<::Steamworks::SteamItemDef_t>  pArrayGenerate, ::ArrayW<uint32_t>  punArrayGenerateQuantity, uint32_t  unArrayGenerateLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayDestroy, ::ArrayW<uint32_t>  punArrayDestroyQuantity, uint32_t  unArrayDestroyLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"ExchangeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}
inline bool Steamworks::SteamInventory::TransferItemQuantity(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemIdSource, uint32_t  unQuantity, ::Steamworks::SteamItemInstanceID_t  itemIdDest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TransferItemQuantity", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}
inline void Steamworks::SteamInventory::SendItemDropHeartbeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SendItemDropHeartbeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamInventory::TriggerItemDrop(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  dropListDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TriggerItemDrop", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::SteamItemDef_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, dropListDefinition);
}
inline bool Steamworks::SteamInventory::TradeItems(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::CSteamID  steamIDTradePartner, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGive, ::ArrayW<uint32_t>  pArrayGiveQuantity, uint32_t  nArrayGiveLength, ::ArrayW<::Steamworks::SteamItemInstanceID_t>  pArrayGet, ::ArrayW<uint32_t>  pArrayGetQuantity, uint32_t  nArrayGetLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"TradeItems", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemInstanceID_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}
inline bool Steamworks::SteamInventory::LoadItemDefinitions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"LoadItemDefinitions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamInventory::GetItemDefinitionIDs(::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemDefinitionIDs", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pItemDefIDs, punItemDefIDsArraySize);
}
inline bool Steamworks::SteamInventory::GetItemDefinitionProperty(::Steamworks::SteamItemDef_t  iDefinition, ::StringW  pchPropertyName, ::by_ref<::StringW>  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemDefinitionProperty", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamInventory::RequestEligiblePromoItemDefinitionsIDs(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RequestEligiblePromoItemDefinitionsIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamID);
}
inline bool Steamworks::SteamInventory::GetEligiblePromoItemDefinitionIDs(::Steamworks::CSteamID  steamID, ::ArrayW<::Steamworks::SteamItemDef_t>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetEligiblePromoItemDefinitionIDs", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamID, pItemDefIDs, punItemDefIDsArraySize);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamInventory::StartPurchase(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint32_t>  punArrayQuantity, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"StartPurchase", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pArrayItemDefs, punArrayQuantity, unArrayLength);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamInventory::RequestPrices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RequestPrices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamInventory::GetNumItemsWithPrices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetNumItemsWithPrices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamInventory::GetItemsWithPrices(::ArrayW<::Steamworks::SteamItemDef_t>  pArrayItemDefs, ::ArrayW<uint64_t>  pCurrentPrices, ::ArrayW<uint64_t>  pBasePrices, uint32_t  unArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemsWithPrices", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamItemDef_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
}
inline bool Steamworks::SteamInventory::GetItemPrice(::Steamworks::SteamItemDef_t  iDefinition, ::by_ref<uint64_t>  pCurrentPrice, ::by_ref<uint64_t>  pBasePrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"GetItemPrice", {}, {::i2c::type_of<::Steamworks::SteamItemDef_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iDefinition, pCurrentPrice, pBasePrice);
}
inline ::Steamworks::SteamInventoryUpdateHandle_t Steamworks::SteamInventory::StartUpdateProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"StartUpdateProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamInventoryUpdateHandle_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamInventory::RemoveProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"RemoveProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName);
}
inline bool Steamworks::SteamInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, ::StringW  pchPropertyValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, pchPropertyValue);
}
inline bool Steamworks::SteamInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, bValue);
}
inline bool Steamworks::SteamInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, int64_t  nValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, nValue);
}
inline bool Steamworks::SteamInventory::SetProperty(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::StringW  pchPropertyName, float_t  flValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SetProperty", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::Steamworks::SteamItemInstanceID_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, nItemID, pchPropertyName, flValue);
}
inline bool Steamworks::SteamInventory::SubmitUpdateProperties(::Steamworks::SteamInventoryUpdateHandle_t  handle, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"SubmitUpdateProperties", {}, {::i2c::type_of<::Steamworks::SteamInventoryUpdateHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pResultHandle);
}
inline bool Steamworks::SteamInventory::InspectItem(::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::StringW  pchItemToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventory*>(),
                        {"InspectItem", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamInventoryResult_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pResultHandle, pchItemToken);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventory::SteamInventory()   {
}
