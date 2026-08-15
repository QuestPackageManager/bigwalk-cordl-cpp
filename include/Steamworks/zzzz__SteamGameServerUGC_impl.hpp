#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerUGC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerUGC_def.hpp"
#include "Steamworks/zzzz__AccountID_t_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__DepotId_t_def.hpp"
#include "Steamworks/zzzz__EItemPreviewType_def.hpp"
#include "Steamworks/zzzz__EItemStatistic_def.hpp"
#include "Steamworks/zzzz__EItemUpdateStatus_def.hpp"
#include "Steamworks/zzzz__ERemoteStoragePublishedFileVisibility_def.hpp"
#include "Steamworks/zzzz__EUGCMatchingUGCType_def.hpp"
#include "Steamworks/zzzz__EUGCQuery_def.hpp"
#include "Steamworks/zzzz__EUserUGCListSortOrder_def.hpp"
#include "Steamworks/zzzz__EUserUGCList_def.hpp"
#include "Steamworks/zzzz__EWorkshopFileType_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamUGCDetails_t_def.hpp"
#include "Steamworks/zzzz__UGCQueryHandle_t_def.hpp"
#include "Steamworks/zzzz__UGCUpdateHandle_t_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.CreateQueryUserUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::AccountID_t, ::Steamworks::EUserUGCList, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::EUserUGCListSortOrder, ::Steamworks::AppId_t, ::Steamworks::AppId_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::CreateQueryUserUGCRequest)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18059c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryUserUGCRequest", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUserUGCList>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::EUserUGCListSortOrder>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.CreateQueryAllUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::EUGCQuery, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::AppId_t, ::Steamworks::AppId_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::CreateQueryAllUGCRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18059c550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.CreateQueryAllUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::EUGCQuery, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::AppId_t, ::Steamworks::AppId_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::CreateQueryAllUGCRequest)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18059c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.CreateQueryUGCDetailsRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamGameServerUGC::CreateQueryUGCDetailsRequest)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryUGCDetailsRequest", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SendQueryUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::SteamGameServerUGC::SendQueryUGCRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SendQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::Steamworks::SteamUGCDetails_t>)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCResult)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18059de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCResult", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamUGCDetails_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCNumTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCNumTags)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCTag)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18059e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCTagDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCTagDisplayName)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18059e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCTagDisplayName", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCPreviewURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCPreviewURL)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18059dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCPreviewURL", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCMetadata)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18059d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCChildren)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18059d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCStatistic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::Steamworks::EItemStatistic, ::by_ref<uint64_t>)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCStatistic)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18059df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCStatistic", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EItemStatistic>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCNumAdditionalPreviews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCNumAdditionalPreviews)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCAdditionalPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::Steamworks::EItemPreviewType>)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCAdditionalPreview)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18059d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCAdditionalPreview", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EItemPreviewType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCNumKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCNumKeyValueTags)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCKeyValueTag)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetQueryUGCKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::StringW, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetQueryUGCKeyValueTag)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18059d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.ReleaseQueryUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::SteamGameServerUGC::ReleaseQueryUGCRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059e5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"ReleaseQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddRequiredTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::AddRequiredTag)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddRequiredTagGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamGameServerUGC::AddRequiredTagGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18059bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredTagGroup", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddExcludedTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::AddExcludedTag)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddExcludedTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnOnlyIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnOnlyIDs)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnOnlyIDs", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnKeyValueTags)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnLongDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnLongDescription)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnLongDescription", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnMetadata)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnChildren)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnAdditionalPreviews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnAdditionalPreviews)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnTotalOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetReturnTotalOnly)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnTotalOnly", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetReturnPlaytimeStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::SetReturnPlaytimeStats)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnPlaytimeStats", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetLanguage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetAllowCachedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::SetAllowCachedResponse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059eed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetAllowCachedResponse", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetCloudFileNameFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetCloudFileNameFilter)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetCloudFileNameFilter", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetMatchAnyTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetMatchAnyTag)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetMatchAnyTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetSearchText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetSearchText)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805a0ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetSearchText", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetRankedByTrendDays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::SetRankedByTrendDays)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetRankedByTrendDays", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetTimeCreatedDateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::SetTimeCreatedDateRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetTimeCreatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetTimeUpdatedDateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::SetTimeUpdatedDateRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetTimeUpdatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddRequiredKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerUGC::AddRequiredKeyValueTag)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18059bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RequestUGCDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::RequestUGCDetails)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RequestUGCDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.CreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::EWorkshopFileType)>(&::Steamworks::SteamGameServerUGC::CreateItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateItem", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.StartItemUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCUpdateHandle_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::StartItemUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a1050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StartItemUpdate", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemTitle)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemTitle", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemDescription)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemDescription", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemUpdateLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemUpdateLanguage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemUpdateLanguage", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemMetadata)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059f640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemMetadata", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::Steamworks::ERemoteStoragePublishedFileVisibility)>(&::Steamworks::SteamGameServerUGC::SetItemVisibility)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemVisibility", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamGameServerUGC::SetItemTags)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18059fa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemContent)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemContent", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetItemPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SetItemPreview)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetAllowLegacyUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, bool)>(&::Steamworks::SteamGameServerUGC::SetAllowLegacyUpload)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059efb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetAllowLegacyUpload", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveAllItemKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t)>(&::Steamworks::SteamGameServerUGC::RemoveAllItemKeyValueTags)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveAllItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveItemKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::RemoveItemKeyValueTags)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059ea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddItemKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerUGC::AddItemKeyValueTag)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18059b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddItemPreviewFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW, ::Steamworks::EItemPreviewType)>(&::Steamworks::SteamGameServerUGC::AddItemPreviewFile)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EItemPreviewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddItemPreviewVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::AddItemPreviewVideo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.UpdateItemPreviewFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::UpdateItemPreviewFile)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805a1870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UpdateItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.UpdateItemPreviewVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::UpdateItemPreviewVideo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805a1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UpdateItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveItemPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t)>(&::Steamworks::SteamGameServerUGC::RemoveItemPreview)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SubmitItemUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::SubmitItemUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805a13f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SubmitItemUpdate", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetItemUpdateProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EItemUpdateStatus (*)(::Steamworks::UGCUpdateHandle_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamGameServerUGC::GetItemUpdateProgress)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemUpdateProgress", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SetUserItemVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, bool)>(&::Steamworks::SteamGameServerUGC::SetUserItemVote)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetUserItemVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::GetUserItemVote)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddItemToFavorites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::AddItemToFavorites)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemToFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveItemFromFavorites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::RemoveItemFromFavorites)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemFromFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SubscribeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::SubscribeItem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a15e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.UnsubscribeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::UnsubscribeItem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805a1790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UnsubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetNumSubscribedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUGC::GetNumSubscribedItems)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18059d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetNumSubscribedItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetSubscribedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamGameServerUGC::GetSubscribedItems)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetSubscribedItems", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::GetItemState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18059cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemState", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetItemInstallInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::by_ref<uint64_t>, ::by_ref<::StringW>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerUGC::GetItemInstallInfo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18059ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemInstallInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetItemDownloadInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamGameServerUGC::GetItemDownloadInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemDownloadInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.DownloadItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, bool)>(&::Steamworks::SteamGameServerUGC::DownloadItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"DownloadItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.BInitWorkshopForGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::DepotId_t, ::StringW)>(&::Steamworks::SteamGameServerUGC::BInitWorkshopForGameServer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18059c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"BInitWorkshopForGameServer", {}, {::i2c::type_of<::Steamworks::DepotId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.SuspendDownloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServerUGC::SuspendDownloads)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SuspendDownloads", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.StartPlaytimeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamGameServerUGC::StartPlaytimeTracking)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StartPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.StopPlaytimeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamGameServerUGC::StopPlaytimeTracking)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a1300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StopPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.StopPlaytimeTrackingForAllItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamGameServerUGC::StopPlaytimeTrackingForAllItems)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a1230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StopPlaytimeTrackingForAllItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::AddDependency)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::RemoveDependency)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.AddAppDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamGameServerUGC::AddAppDependency)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059b1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.RemoveAppDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamGameServerUGC::RemoveAppDependency)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18059e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetAppDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::GetAppDependencies)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetAppDependencies", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.DeleteItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamGameServerUGC::DeleteItem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18059caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"DeleteItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.ShowWorkshopEULA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUGC::ShowWorkshopEULA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805a0f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"ShowWorkshopEULA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUGC.GetWorkshopEULAStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamGameServerUGC::GetWorkshopEULAStatus)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18059e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetWorkshopEULAStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamGameServerUGC::CreateQueryUserUGCRequest(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUserUGCList  eListType, ::Steamworks::EUGCMatchingUGCType  eMatchingUGCType, ::Steamworks::EUserUGCListSortOrder  eSortOrder, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryUserUGCRequest", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUserUGCList>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::EUserUGCListSortOrder>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamGameServerUGC::CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamGameServerUGC::CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, ::StringW  pchCursor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamGameServerUGC::CreateQueryUGCDetailsRequest(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateQueryUGCDetailsRequest", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::SendQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SendQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCResult(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::Steamworks::SteamUGCDetails_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCResult", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamUGCDetails_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pDetails);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetQueryUGCNumTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, indexTag, pchValue, cchValueSize);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCTagDisplayName(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCTagDisplayName", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, indexTag, pchValue, cchValueSize);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCPreviewURL(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchURL, uint32_t  cchURLSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCPreviewURL", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchURL, cchURLSize);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCMetadata(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchMetadata, uint32_t  cchMetadatasize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchMetadata, cchMetadatasize);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCChildren(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pvecPublishedFileID, cMaxEntries);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCStatistic(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::EItemStatistic  eStatType, ::by_ref<uint64_t>  pStatValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCStatistic", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EItemStatistic>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, eStatType, pStatValue);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetQueryUGCNumAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCAdditionalPreview(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  previewIndex, ::by_ref<::StringW>  pchURLOrVideoID, uint32_t  cchURLSize, ::by_ref<::StringW>  pchOriginalFileName, uint32_t  cchOriginalFileNameSize, ::by_ref<::Steamworks::EItemPreviewType>  pPreviewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCAdditionalPreview", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EItemPreviewType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetQueryUGCNumKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCNumKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  keyValueTagIndex, ::by_ref<::StringW>  pchKey, uint32_t  cchKeySize, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}
inline bool Steamworks::SteamGameServerUGC::GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::StringW  pchKey, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchKey, pchValue, cchValueSize);
}
inline bool Steamworks::SteamGameServerUGC::ReleaseQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"ReleaseQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamGameServerUGC::AddRequiredTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagName);
}
inline bool Steamworks::SteamGameServerUGC::AddRequiredTagGroup(::Steamworks::UGCQueryHandle_t  handle, ::System::Collections::Generic::IList_1<::StringW>*  pTagGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredTagGroup", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagGroups);
}
inline bool Steamworks::SteamGameServerUGC::AddExcludedTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddExcludedTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagName);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnOnlyIDs(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnOnlyIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnOnlyIDs", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnOnlyIDs);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnKeyValueTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnKeyValueTags);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnLongDescription(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnLongDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnLongDescription", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnLongDescription);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnMetadata(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnMetadata);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnChildren(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnChildren);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnAdditionalPreviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnAdditionalPreviews);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnTotalOnly(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnTotalOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnTotalOnly", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnTotalOnly);
}
inline bool Steamworks::SteamGameServerUGC::SetReturnPlaytimeStats(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetReturnPlaytimeStats", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unDays);
}
inline bool Steamworks::SteamGameServerUGC::SetLanguage(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pchLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchLanguage);
}
inline bool Steamworks::SteamGameServerUGC::SetAllowCachedResponse(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetAllowCachedResponse", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unMaxAgeSeconds);
}
inline bool Steamworks::SteamGameServerUGC::SetCloudFileNameFilter(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pMatchCloudFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetCloudFileNameFilter", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pMatchCloudFileName);
}
inline bool Steamworks::SteamGameServerUGC::SetMatchAnyTag(::Steamworks::UGCQueryHandle_t  handle, bool  bMatchAnyTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetMatchAnyTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bMatchAnyTag);
}
inline bool Steamworks::SteamGameServerUGC::SetSearchText(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pSearchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetSearchText", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pSearchText);
}
inline bool Steamworks::SteamGameServerUGC::SetRankedByTrendDays(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetRankedByTrendDays", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unDays);
}
inline bool Steamworks::SteamGameServerUGC::SetTimeCreatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetTimeCreatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, rtStart, rtEnd);
}
inline bool Steamworks::SteamGameServerUGC::SetTimeUpdatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetTimeUpdatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, rtStart, rtEnd);
}
inline bool Steamworks::SteamGameServerUGC::AddRequiredKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pKey, ::StringW  pValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddRequiredKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pKey, pValue);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::RequestUGCDetails(::Steamworks::PublishedFileId_t  nPublishedFileID, uint32_t  unMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RequestUGCDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, unMaxAgeSeconds);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::CreateItem(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::EWorkshopFileType  eFileType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"CreateItem", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nConsumerAppId, eFileType);
}
inline ::Steamworks::UGCUpdateHandle_t Steamworks::SteamGameServerUGC::StartItemUpdate(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StartItemUpdate", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCUpdateHandle_t>(nullptr, ___internal_method, nConsumerAppId, nPublishedFileID);
}
inline bool Steamworks::SteamGameServerUGC::SetItemTitle(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchTitle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemTitle", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchTitle);
}
inline bool Steamworks::SteamGameServerUGC::SetItemDescription(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemDescription", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchDescription);
}
inline bool Steamworks::SteamGameServerUGC::SetItemUpdateLanguage(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemUpdateLanguage", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchLanguage);
}
inline bool Steamworks::SteamGameServerUGC::SetItemMetadata(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchMetaData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemMetadata", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchMetaData);
}
inline bool Steamworks::SteamGameServerUGC::SetItemVisibility(::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemVisibility", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, eVisibility);
}
inline bool Steamworks::SteamGameServerUGC::SetItemTags(::Steamworks::UGCUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pTags);
}
inline bool Steamworks::SteamGameServerUGC::SetItemContent(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszContentFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemContent", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszContentFolder);
}
inline bool Steamworks::SteamGameServerUGC::SetItemPreview(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszPreviewFile);
}
inline bool Steamworks::SteamGameServerUGC::SetAllowLegacyUpload(::Steamworks::UGCUpdateHandle_t  handle, bool  bAllowLegacyUpload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetAllowLegacyUpload", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bAllowLegacyUpload);
}
inline bool Steamworks::SteamGameServerUGC::RemoveAllItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveAllItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamGameServerUGC::RemoveItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchKey);
}
inline bool Steamworks::SteamGameServerUGC::AddItemKeyValueTag(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchKey, pchValue);
}
inline bool Steamworks::SteamGameServerUGC::AddItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile, ::Steamworks::EItemPreviewType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EItemPreviewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszPreviewFile, type);
}
inline bool Steamworks::SteamGameServerUGC::AddItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszVideoID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszVideoID);
}
inline bool Steamworks::SteamGameServerUGC::UpdateItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszPreviewFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UpdateItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pszPreviewFile);
}
inline bool Steamworks::SteamGameServerUGC::UpdateItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszVideoID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UpdateItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pszVideoID);
}
inline bool Steamworks::SteamGameServerUGC::RemoveItemPreview(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::SubmitItemUpdate(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchChangeNote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SubmitItemUpdate", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, handle, pchChangeNote);
}
inline ::Steamworks::EItemUpdateStatus Steamworks::SteamGameServerUGC::GetItemUpdateProgress(::Steamworks::UGCUpdateHandle_t  handle, ::by_ref<uint64_t>  punBytesProcessed, ::by_ref<uint64_t>  punBytesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemUpdateProgress", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EItemUpdateStatus>(nullptr, ___internal_method, handle, punBytesProcessed, punBytesTotal);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::SetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bVoteUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, bVoteUp);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::GetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::AddItemToFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddItemToFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nAppId, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::RemoveItemFromFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveItemFromFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nAppId, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::SubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::UnsubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"UnsubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetNumSubscribedItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetNumSubscribedItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetSubscribedItems(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetSubscribedItems", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pvecPublishedFileID, cMaxEntries);
}
inline uint32_t Steamworks::SteamGameServerUGC::GetItemState(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemState", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline bool Steamworks::SteamGameServerUGC::GetItemInstallInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punSizeOnDisk, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderSize, ::by_ref<uint32_t>  punTimeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemInstallInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
}
inline bool Steamworks::SteamGameServerUGC::GetItemDownloadInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetItemDownloadInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}
inline bool Steamworks::SteamGameServerUGC::DownloadItem(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bHighPriority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"DownloadItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, bHighPriority);
}
inline bool Steamworks::SteamGameServerUGC::BInitWorkshopForGameServer(::Steamworks::DepotId_t  unWorkshopDepotID, ::StringW  pszFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"BInitWorkshopForGameServer", {}, {::i2c::type_of<::Steamworks::DepotId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unWorkshopDepotID, pszFolder);
}
inline void Steamworks::SteamGameServerUGC::SuspendDownloads(bool  bSuspend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"SuspendDownloads", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bSuspend);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::StartPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StartPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::StopPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StopPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::StopPlaytimeTrackingForAllItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"StopPlaytimeTrackingForAllItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::AddDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nParentPublishedFileID, nChildPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::RemoveDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nParentPublishedFileID, nChildPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::AddAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"AddAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, nAppID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::RemoveAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"RemoveAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, nAppID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::GetAppDependencies(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetAppDependencies", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::DeleteItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"DeleteItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline bool Steamworks::SteamGameServerUGC::ShowWorkshopEULA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"ShowWorkshopEULA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUGC::GetWorkshopEULAStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUGC*>(),
                        {"GetWorkshopEULAStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerUGC::SteamGameServerUGC()   {
}
