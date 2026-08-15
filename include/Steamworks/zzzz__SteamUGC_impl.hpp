#pragma once
// IWYU pragma private; include "Steamworks/SteamUGC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamUGC_def.hpp"
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
//  Writing Method size for method: ::Steamworks::SteamUGC.CreateQueryUserUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::AccountID_t, ::Steamworks::EUserUGCList, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::EUserUGCListSortOrder, ::Steamworks::AppId_t, ::Steamworks::AppId_t, uint32_t)>(&::Steamworks::SteamUGC::CreateQueryUserUGCRequest)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805bb2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryUserUGCRequest", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUserUGCList>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::EUserUGCListSortOrder>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.CreateQueryAllUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::EUGCQuery, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::AppId_t, ::Steamworks::AppId_t, uint32_t)>(&::Steamworks::SteamUGC::CreateQueryAllUGCRequest)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.CreateQueryAllUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::Steamworks::EUGCQuery, ::Steamworks::EUGCMatchingUGCType, ::Steamworks::AppId_t, ::Steamworks::AppId_t, ::StringW)>(&::Steamworks::SteamUGC::CreateQueryAllUGCRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805bb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.CreateQueryUGCDetailsRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamUGC::CreateQueryUGCDetailsRequest)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bb2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryUGCDetailsRequest", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SendQueryUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::SteamUGC::SendQueryUGCRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SendQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::Steamworks::SteamUGCDetails_t>)>(&::Steamworks::SteamUGC::GetQueryUGCResult)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bbc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCResult", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamUGCDetails_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCNumTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCNumTags)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCTag)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805bbe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCTagDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCTagDisplayName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805bbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCTagDisplayName", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCPreviewURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCPreviewURL)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805bbbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCPreviewURL", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCMetadata)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805bba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805bb780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCStatistic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::Steamworks::EItemStatistic, ::by_ref<uint64_t>)>(&::Steamworks::SteamUGC::GetQueryUGCStatistic)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805bbcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCStatistic", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EItemStatistic>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCNumAdditionalPreviews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCNumAdditionalPreviews)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCAdditionalPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::Steamworks::EItemPreviewType>)>(&::Steamworks::SteamUGC::GetQueryUGCAdditionalPreview)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805bb640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCAdditionalPreview", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EItemPreviewType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCNumKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCNumKeyValueTags)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, ::by_ref<::StringW>, uint32_t, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCKeyValueTag)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805bb7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetQueryUGCKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, ::StringW, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUGC::GetQueryUGCKeyValueTag)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805bb920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.ReleaseQueryUGCRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::SteamUGC::ReleaseQueryUGCRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"ReleaseQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddRequiredTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamUGC::AddRequiredTag)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805baef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddRequiredTagGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamUGC::AddRequiredTagGroup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredTagGroup", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddExcludedTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamUGC::AddExcludedTag)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ba850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddExcludedTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnOnlyIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnOnlyIDs)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnOnlyIDs", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnKeyValueTags)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnLongDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnLongDescription)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnLongDescription", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnMetadata)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnChildren)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnAdditionalPreviews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnAdditionalPreviews)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnTotalOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetReturnTotalOnly)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnTotalOnly", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetReturnPlaytimeStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::SetReturnPlaytimeStats)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bcdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnPlaytimeStats", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetLanguage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetAllowCachedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::SetAllowCachedResponse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetAllowCachedResponse", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetCloudFileNameFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetCloudFileNameFilter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetCloudFileNameFilter", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetMatchAnyTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, bool)>(&::Steamworks::SteamUGC::SetMatchAnyTag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bcb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetMatchAnyTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetSearchText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetSearchText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetSearchText", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetRankedByTrendDays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t)>(&::Steamworks::SteamUGC::SetRankedByTrendDays)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bcbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetRankedByTrendDays", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetTimeCreatedDateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t)>(&::Steamworks::SteamUGC::SetTimeCreatedDateRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bcf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetTimeCreatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetTimeUpdatedDateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t)>(&::Steamworks::SteamUGC::SetTimeUpdatedDateRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bcfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetTimeUpdatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddRequiredKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::StringW, ::StringW)>(&::Steamworks::SteamUGC::AddRequiredKeyValueTag)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805bacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RequestUGCDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, uint32_t)>(&::Steamworks::SteamUGC::RequestUGCDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RequestUGCDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.CreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::EWorkshopFileType)>(&::Steamworks::SteamUGC::CreateItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bb0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateItem", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.StartItemUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCUpdateHandle_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::StartItemUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bd0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StartItemUpdate", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemTitle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemTitle", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemDescription)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemDescription", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemUpdateLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemUpdateLanguage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemUpdateLanguage", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemMetadata)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemMetadata", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::Steamworks::ERemoteStoragePublishedFileVisibility)>(&::Steamworks::SteamUGC::SetItemVisibility)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemVisibility", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamUGC::SetItemTags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805bc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemContent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemContent", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetItemPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SetItemPreview)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetAllowLegacyUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, bool)>(&::Steamworks::SteamUGC::SetAllowLegacyUpload)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bc2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetAllowLegacyUpload", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveAllItemKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t)>(&::Steamworks::SteamUGC::RemoveAllItemKeyValueTags)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveAllItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveItemKeyValueTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::RemoveItemKeyValueTags)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bc100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddItemKeyValueTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW, ::StringW)>(&::Steamworks::SteamUGC::AddItemKeyValueTag)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805ba940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddItemPreviewFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW, ::Steamworks::EItemPreviewType)>(&::Steamworks::SteamUGC::AddItemPreviewFile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805baac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EItemPreviewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddItemPreviewVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::AddItemPreviewVideo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805babc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.UpdateItemPreviewFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t, ::StringW)>(&::Steamworks::SteamUGC::UpdateItemPreviewFile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bd360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UpdateItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.UpdateItemPreviewVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t, ::StringW)>(&::Steamworks::SteamUGC::UpdateItemPreviewVideo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805bd460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UpdateItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveItemPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCUpdateHandle_t, uint32_t)>(&::Steamworks::SteamUGC::RemoveItemPreview)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SubmitItemUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCUpdateHandle_t, ::StringW)>(&::Steamworks::SteamUGC::SubmitItemUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805bd1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SubmitItemUpdate", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetItemUpdateProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EItemUpdateStatus (*)(::Steamworks::UGCUpdateHandle_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamUGC::GetItemUpdateProgress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bb5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemUpdateProgress", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SetUserItemVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, bool)>(&::Steamworks::SteamUGC::SetUserItemVote)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bd030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetUserItemVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::GetUserItemVote)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddItemToFavorites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::AddItemToFavorites)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemToFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveItemFromFavorites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::AppId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::RemoveItemFromFavorites)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemFromFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SubscribeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::SubscribeItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.UnsubscribeItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::UnsubscribeItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bd320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UnsubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetNumSubscribedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUGC::GetNumSubscribedItems)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bb610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetNumSubscribedItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetSubscribedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamUGC::GetSubscribedItems)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bbf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetSubscribedItems", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::GetItemState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bb570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemState", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetItemInstallInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::by_ref<uint64_t>, ::by_ref<::StringW>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamUGC::GetItemInstallInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805bb4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemInstallInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetItemDownloadInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamUGC::GetItemDownloadInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805bb450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemDownloadInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.DownloadItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, bool)>(&::Steamworks::SteamUGC::DownloadItem)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bb3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"DownloadItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.BInitWorkshopForGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::DepotId_t, ::StringW)>(&::Steamworks::SteamUGC::BInitWorkshopForGameServer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bafe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"BInitWorkshopForGameServer", {}, {::i2c::type_of<::Steamworks::DepotId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.SuspendDownloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamUGC::SuspendDownloads)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bd2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SuspendDownloads", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.StartPlaytimeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamUGC::StartPlaytimeTracking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StartPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.StopPlaytimeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::ArrayW<::Steamworks::PublishedFileId_t>, uint32_t)>(&::Steamworks::SteamUGC::StopPlaytimeTracking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bd170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StopPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.StopPlaytimeTrackingForAllItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUGC::StopPlaytimeTrackingForAllItems)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bd140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StopPlaytimeTrackingForAllItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::AddDependency)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ba800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::RemoveDependency)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805bc070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.AddAppDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamUGC::AddAppDependency)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ba7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.RemoveAppDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamUGC::RemoveAppDependency)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bc030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetAppDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::GetAppDependencies)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetAppDependencies", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.DeleteItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamUGC::DeleteItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805bb380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"DeleteItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.ShowWorkshopEULA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUGC::ShowWorkshopEULA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bd080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"ShowWorkshopEULA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGC.GetWorkshopEULAStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)()>(&::Steamworks::SteamUGC::GetWorkshopEULAStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetWorkshopEULAStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamUGC::CreateQueryUserUGCRequest(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUserUGCList  eListType, ::Steamworks::EUGCMatchingUGCType  eMatchingUGCType, ::Steamworks::EUserUGCListSortOrder  eSortOrder, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryUserUGCRequest", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUserUGCList>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::EUserUGCListSortOrder>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamUGC::CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamUGC::CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, ::StringW  pchCursor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryAllUGCRequest", {}, {::i2c::type_of<::Steamworks::EUGCQuery>(), ::i2c::type_of<::Steamworks::EUGCMatchingUGCType>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::SteamUGC::CreateQueryUGCDetailsRequest(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateQueryUGCDetailsRequest", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::SendQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SendQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamUGC::GetQueryUGCResult(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::Steamworks::SteamUGCDetails_t>  pDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCResult", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamUGCDetails_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pDetails);
}
inline uint32_t Steamworks::SteamUGC::GetQueryUGCNumTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamUGC::GetQueryUGCTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, indexTag, pchValue, cchValueSize);
}
inline bool Steamworks::SteamUGC::GetQueryUGCTagDisplayName(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCTagDisplayName", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, indexTag, pchValue, cchValueSize);
}
inline bool Steamworks::SteamUGC::GetQueryUGCPreviewURL(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchURL, uint32_t  cchURLSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCPreviewURL", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchURL, cchURLSize);
}
inline bool Steamworks::SteamUGC::GetQueryUGCMetadata(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchMetadata, uint32_t  cchMetadatasize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchMetadata, cchMetadatasize);
}
inline bool Steamworks::SteamUGC::GetQueryUGCChildren(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pvecPublishedFileID, cMaxEntries);
}
inline bool Steamworks::SteamUGC::GetQueryUGCStatistic(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::EItemStatistic  eStatType, ::by_ref<uint64_t>  pStatValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCStatistic", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EItemStatistic>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, eStatType, pStatValue);
}
inline uint32_t Steamworks::SteamUGC::GetQueryUGCNumAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamUGC::GetQueryUGCAdditionalPreview(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  previewIndex, ::by_ref<::StringW>  pchURLOrVideoID, uint32_t  cchURLSize, ::by_ref<::StringW>  pchOriginalFileName, uint32_t  cchOriginalFileNameSize, ::by_ref<::Steamworks::EItemPreviewType>  pPreviewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCAdditionalPreview", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::EItemPreviewType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}
inline uint32_t Steamworks::SteamUGC::GetQueryUGCNumKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCNumKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, handle, index);
}
inline bool Steamworks::SteamUGC::GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  keyValueTagIndex, ::by_ref<::StringW>  pchKey, uint32_t  cchKeySize, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}
inline bool Steamworks::SteamUGC::GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::StringW  pchKey, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetQueryUGCKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pchKey, pchValue, cchValueSize);
}
inline bool Steamworks::SteamUGC::ReleaseQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"ReleaseQueryUGCRequest", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamUGC::AddRequiredTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagName);
}
inline bool Steamworks::SteamUGC::AddRequiredTagGroup(::Steamworks::UGCQueryHandle_t  handle, ::System::Collections::Generic::IList_1<::StringW>*  pTagGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredTagGroup", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagGroups);
}
inline bool Steamworks::SteamUGC::AddExcludedTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddExcludedTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pTagName);
}
inline bool Steamworks::SteamUGC::SetReturnOnlyIDs(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnOnlyIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnOnlyIDs", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnOnlyIDs);
}
inline bool Steamworks::SteamUGC::SetReturnKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnKeyValueTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnKeyValueTags);
}
inline bool Steamworks::SteamUGC::SetReturnLongDescription(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnLongDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnLongDescription", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnLongDescription);
}
inline bool Steamworks::SteamUGC::SetReturnMetadata(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnMetadata", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnMetadata);
}
inline bool Steamworks::SteamUGC::SetReturnChildren(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnChildren", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnChildren);
}
inline bool Steamworks::SteamUGC::SetReturnAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnAdditionalPreviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnAdditionalPreviews", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnAdditionalPreviews);
}
inline bool Steamworks::SteamUGC::SetReturnTotalOnly(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnTotalOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnTotalOnly", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bReturnTotalOnly);
}
inline bool Steamworks::SteamUGC::SetReturnPlaytimeStats(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetReturnPlaytimeStats", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unDays);
}
inline bool Steamworks::SteamUGC::SetLanguage(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pchLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchLanguage);
}
inline bool Steamworks::SteamUGC::SetAllowCachedResponse(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetAllowCachedResponse", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unMaxAgeSeconds);
}
inline bool Steamworks::SteamUGC::SetCloudFileNameFilter(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pMatchCloudFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetCloudFileNameFilter", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pMatchCloudFileName);
}
inline bool Steamworks::SteamUGC::SetMatchAnyTag(::Steamworks::UGCQueryHandle_t  handle, bool  bMatchAnyTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetMatchAnyTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bMatchAnyTag);
}
inline bool Steamworks::SteamUGC::SetSearchText(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pSearchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetSearchText", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pSearchText);
}
inline bool Steamworks::SteamUGC::SetRankedByTrendDays(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetRankedByTrendDays", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, unDays);
}
inline bool Steamworks::SteamUGC::SetTimeCreatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetTimeCreatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, rtStart, rtEnd);
}
inline bool Steamworks::SteamUGC::SetTimeUpdatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetTimeUpdatedDateRange", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, rtStart, rtEnd);
}
inline bool Steamworks::SteamUGC::AddRequiredKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pKey, ::StringW  pValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddRequiredKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pKey, pValue);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::RequestUGCDetails(::Steamworks::PublishedFileId_t  nPublishedFileID, uint32_t  unMaxAgeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RequestUGCDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, unMaxAgeSeconds);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::CreateItem(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::EWorkshopFileType  eFileType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"CreateItem", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nConsumerAppId, eFileType);
}
inline ::Steamworks::UGCUpdateHandle_t Steamworks::SteamUGC::StartItemUpdate(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StartItemUpdate", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCUpdateHandle_t>(nullptr, ___internal_method, nConsumerAppId, nPublishedFileID);
}
inline bool Steamworks::SteamUGC::SetItemTitle(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchTitle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemTitle", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchTitle);
}
inline bool Steamworks::SteamUGC::SetItemDescription(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemDescription", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchDescription);
}
inline bool Steamworks::SteamUGC::SetItemUpdateLanguage(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemUpdateLanguage", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchLanguage);
}
inline bool Steamworks::SteamUGC::SetItemMetadata(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchMetaData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemMetadata", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchMetaData);
}
inline bool Steamworks::SteamUGC::SetItemVisibility(::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemVisibility", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, eVisibility);
}
inline bool Steamworks::SteamUGC::SetItemTags(::Steamworks::UGCUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pTags);
}
inline bool Steamworks::SteamUGC::SetItemContent(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszContentFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemContent", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszContentFolder);
}
inline bool Steamworks::SteamUGC::SetItemPreview(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszPreviewFile);
}
inline bool Steamworks::SteamUGC::SetAllowLegacyUpload(::Steamworks::UGCUpdateHandle_t  handle, bool  bAllowLegacyUpload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetAllowLegacyUpload", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, bAllowLegacyUpload);
}
inline bool Steamworks::SteamUGC::RemoveAllItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveAllItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Steamworks::SteamUGC::RemoveItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemKeyValueTags", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchKey);
}
inline bool Steamworks::SteamUGC::AddItemKeyValueTag(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemKeyValueTag", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pchKey, pchValue);
}
inline bool Steamworks::SteamUGC::AddItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile, ::Steamworks::EItemPreviewType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::EItemPreviewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszPreviewFile, type);
}
inline bool Steamworks::SteamUGC::AddItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszVideoID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, pszVideoID);
}
inline bool Steamworks::SteamUGC::UpdateItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszPreviewFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UpdateItemPreviewFile", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pszPreviewFile);
}
inline bool Steamworks::SteamUGC::UpdateItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszVideoID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UpdateItemPreviewVideo", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index, pszVideoID);
}
inline bool Steamworks::SteamUGC::RemoveItemPreview(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemPreview", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, index);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::SubmitItemUpdate(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchChangeNote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SubmitItemUpdate", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, handle, pchChangeNote);
}
inline ::Steamworks::EItemUpdateStatus Steamworks::SteamUGC::GetItemUpdateProgress(::Steamworks::UGCUpdateHandle_t  handle, ::by_ref<uint64_t>  punBytesProcessed, ::by_ref<uint64_t>  punBytesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemUpdateProgress", {}, {::i2c::type_of<::Steamworks::UGCUpdateHandle_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EItemUpdateStatus>(nullptr, ___internal_method, handle, punBytesProcessed, punBytesTotal);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::SetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bVoteUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, bVoteUp);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::GetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetUserItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::AddItemToFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddItemToFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nAppId, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::RemoveItemFromFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveItemFromFavorites", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nAppId, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::SubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::UnsubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"UnsubscribeItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline uint32_t Steamworks::SteamUGC::GetNumSubscribedItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetNumSubscribedItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamUGC::GetSubscribedItems(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetSubscribedItems", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pvecPublishedFileID, cMaxEntries);
}
inline uint32_t Steamworks::SteamUGC::GetItemState(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemState", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline bool Steamworks::SteamUGC::GetItemInstallInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punSizeOnDisk, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderSize, ::by_ref<uint32_t>  punTimeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemInstallInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
}
inline bool Steamworks::SteamUGC::GetItemDownloadInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetItemDownloadInfo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}
inline bool Steamworks::SteamUGC::DownloadItem(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bHighPriority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"DownloadItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nPublishedFileID, bHighPriority);
}
inline bool Steamworks::SteamUGC::BInitWorkshopForGameServer(::Steamworks::DepotId_t  unWorkshopDepotID, ::StringW  pszFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"BInitWorkshopForGameServer", {}, {::i2c::type_of<::Steamworks::DepotId_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unWorkshopDepotID, pszFolder);
}
inline void Steamworks::SteamUGC::SuspendDownloads(bool  bSuspend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"SuspendDownloads", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bSuspend);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::StartPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StartPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::StopPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StopPlaytimeTracking", {}, {::i2c::type_of<::ArrayW<::Steamworks::PublishedFileId_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pvecPublishedFileID, unNumPublishedFileIDs);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::StopPlaytimeTrackingForAllItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"StopPlaytimeTrackingForAllItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::AddDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nParentPublishedFileID, nChildPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::RemoveDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nParentPublishedFileID, nChildPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::AddAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"AddAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, nAppID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::RemoveAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"RemoveAppDependency", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID, nAppID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::GetAppDependencies(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetAppDependencies", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::DeleteItem(::Steamworks::PublishedFileId_t  nPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"DeleteItem", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, nPublishedFileID);
}
inline bool Steamworks::SteamUGC::ShowWorkshopEULA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"ShowWorkshopEULA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUGC::GetWorkshopEULAStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGC*>(),
                        {"GetWorkshopEULAStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUGC::SteamUGC()   {
}
