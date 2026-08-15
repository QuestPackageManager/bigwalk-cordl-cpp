#pragma once
// IWYU pragma private; include "Steamworks/SteamRemoteStorage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamRemoteStorage_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__ERemoteStorageFilePathType_def.hpp"
#include "Steamworks/zzzz__ERemoteStorageLocalFileChange_def.hpp"
#include "Steamworks/zzzz__ERemoteStoragePlatform_def.hpp"
#include "Steamworks/zzzz__ERemoteStoragePublishedFileVisibility_def.hpp"
#include "Steamworks/zzzz__EUGCReadAction_def.hpp"
#include "Steamworks/zzzz__EWorkshopEnumerationType_def.hpp"
#include "Steamworks/zzzz__EWorkshopFileAction_def.hpp"
#include "Steamworks/zzzz__EWorkshopFileType_def.hpp"
#include "Steamworks/zzzz__EWorkshopVideoProvider_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileUpdateHandle_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__UGCFileWriteStreamHandle_t_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamRemoteStorage::FileWrite)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamRemoteStorage::FileRead)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamRemoteStorage::FileWriteAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b87f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW, uint32_t, uint32_t)>(&::Steamworks::SteamRemoteStorage::FileReadAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b8510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileReadAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileReadAsyncComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamAPICall_t, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamRemoteStorage::FileReadAsyncComplete)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileReadAsyncComplete", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileForget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FileForget)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b82f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileForget", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FileDelete)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileDelete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileShare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FileShare)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileShare", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.SetSyncPlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Steamworks::ERemoteStoragePlatform)>(&::Steamworks::SteamRemoteStorage::SetSyncPlatforms)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b9920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetSyncPlatforms", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWriteStreamOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCFileWriteStreamHandle_t (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FileWriteStreamOpen)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamOpen", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWriteStreamWriteChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCFileWriteStreamHandle_t, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamRemoteStorage::FileWriteStreamWriteChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b8a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamWriteChunk", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWriteStreamClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCFileWriteStreamHandle_t)>(&::Steamworks::SteamRemoteStorage::FileWriteStreamClose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b8930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamClose", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileWriteStreamCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCFileWriteStreamHandle_t)>(&::Steamworks::SteamRemoteStorage::FileWriteStreamCancel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamCancel", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FileExists)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.FilePersisted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::FilePersisted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b83d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FilePersisted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetFileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::GetFileSize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileSize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetFileTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::GetFileTimestamp)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileTimestamp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetSyncPlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ERemoteStoragePlatform (*)(::StringW)>(&::Steamworks::SteamRemoteStorage::GetSyncPlatforms)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetSyncPlatforms", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetFileCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamRemoteStorage::GetFileCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetFileNameAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::by_ref<int32_t>)>(&::Steamworks::SteamRemoteStorage::GetFileNameAndSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b8c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileNameAndSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetQuota
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Steamworks::SteamRemoteStorage::GetQuota)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetQuota", {}, {::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.IsCloudEnabledForAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamRemoteStorage::IsCloudEnabledForAccount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b91e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"IsCloudEnabledForAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.IsCloudEnabledForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamRemoteStorage::IsCloudEnabledForApp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b9210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"IsCloudEnabledForApp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.SetCloudEnabledForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamRemoteStorage::SetCloudEnabledForApp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetCloudEnabledForApp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UGCDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCHandle_t, uint32_t)>(&::Steamworks::SteamRemoteStorage::UGCDownload)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b9b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCDownload", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetUGCDownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCHandle_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Steamworks::SteamRemoteStorage::GetUGCDownloadProgress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b9140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUGCDownloadProgress", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetUGCDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCHandle_t, ::by_ref<::Steamworks::AppId_t>, ::by_ref<::StringW>, ::by_ref<int32_t>, ::by_ref<::Steamworks::CSteamID>)>(&::Steamworks::SteamRemoteStorage::GetUGCDetails)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805b9090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUGCDetails", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UGCRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::UGCHandle_t, ::ArrayW<uint8_t>, int32_t, uint32_t, ::Steamworks::EUGCReadAction)>(&::Steamworks::SteamRemoteStorage::UGCRead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b9bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCRead", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUGCReadAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetCachedUGCCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamRemoteStorage::GetCachedUGCCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetCachedUGCCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetCachedUGCHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCHandle_t (*)(int32_t)>(&::Steamworks::SteamRemoteStorage::GetCachedUGCHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetCachedUGCHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.PublishWorkshopFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW, ::StringW, ::Steamworks::AppId_t, ::StringW, ::StringW, ::Steamworks::ERemoteStoragePublishedFileVisibility, ::System::Collections::Generic::IList_1<::StringW>*, ::Steamworks::EWorkshopFileType)>(&::Steamworks::SteamRemoteStorage::PublishWorkshopFile)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1805b95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"PublishWorkshopFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.CreatePublishedFileUpdateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::PublishedFileUpdateHandle_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::CreatePublishedFileUpdateRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"CreatePublishedFileUpdateRequest", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::StringW)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileFile)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileFile", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFilePreviewFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::StringW)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFilePreviewFile)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b9e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFilePreviewFile", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::StringW)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileTitle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ba0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileTitle", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::StringW)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileDescription)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileDescription", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::Steamworks::ERemoteStoragePublishedFileVisibility)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileVisibility)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ba1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileVisibility", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileTags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ba050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileTags", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.CommitPublishedFileUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileUpdateHandle_t)>(&::Steamworks::SteamRemoteStorage::CommitPublishedFileUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"CommitPublishedFileUpdate", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetPublishedFileDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, uint32_t)>(&::Steamworks::SteamRemoteStorage::GetPublishedFileDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b8ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetPublishedFileDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.DeletePublishedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::DeletePublishedFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"DeletePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EnumerateUserPublishedFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(uint32_t)>(&::Steamworks::SteamRemoteStorage::EnumerateUserPublishedFiles)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserPublishedFiles", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.SubscribePublishedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::SubscribePublishedFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b9a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SubscribePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EnumerateUserSubscribedFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(uint32_t)>(&::Steamworks::SteamRemoteStorage::EnumerateUserSubscribedFiles)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserSubscribedFiles", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UnsubscribePublishedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::UnsubscribePublishedFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b9c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UnsubscribePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdatePublishedFileSetChangeDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileUpdateHandle_t, ::StringW)>(&::Steamworks::SteamRemoteStorage::UpdatePublishedFileSetChangeDescription)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805b9f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileSetChangeDescription", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetPublishedItemVoteDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::GetPublishedItemVoteDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b8f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetPublishedItemVoteDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UpdateUserPublishedItemVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, bool)>(&::Steamworks::SteamRemoteStorage::UpdateUserPublishedItemVote)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ba200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdateUserPublishedItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetUserPublishedItemVoteDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamRemoteStorage::GetUserPublishedItemVoteDetails)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b91a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUserPublishedItemVoteDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EnumerateUserSharedWorkshopFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::CSteamID, uint32_t, ::System::Collections::Generic::IList_1<::StringW>*, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamRemoteStorage::EnumerateUserSharedWorkshopFiles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805b8040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserSharedWorkshopFiles", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.PublishVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::EWorkshopVideoProvider, ::StringW, ::StringW, ::StringW, ::Steamworks::AppId_t, ::StringW, ::StringW, ::Steamworks::ERemoteStoragePublishedFileVisibility, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamRemoteStorage::PublishVideo)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1805b9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"PublishVideo", {}, {::i2c::type_of<::Steamworks::EWorkshopVideoProvider>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.SetUserPublishedFileAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PublishedFileId_t, ::Steamworks::EWorkshopFileAction)>(&::Steamworks::SteamRemoteStorage::SetUserPublishedFileAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b9a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetUserPublishedFileAction", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EnumeratePublishedFilesByUserAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::EWorkshopFileAction, uint32_t)>(&::Steamworks::SteamRemoteStorage::EnumeratePublishedFilesByUserAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumeratePublishedFilesByUserAction", {}, {::i2c::type_of<::Steamworks::EWorkshopFileAction>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EnumeratePublishedWorkshopFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::EWorkshopEnumerationType, uint32_t, uint32_t, uint32_t, ::System::Collections::Generic::IList_1<::StringW>*, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::SteamRemoteStorage::EnumeratePublishedWorkshopFiles)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumeratePublishedWorkshopFiles", {}, {::i2c::type_of<::Steamworks::EWorkshopEnumerationType>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.UGCDownloadToLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::UGCHandle_t, ::StringW, uint32_t)>(&::Steamworks::SteamRemoteStorage::UGCDownloadToLocation)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCDownloadToLocation", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetLocalFileChangeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Steamworks::SteamRemoteStorage::GetLocalFileChangeCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b8e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetLocalFileChangeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.GetLocalFileChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::by_ref<::Steamworks::ERemoteStorageLocalFileChange>, ::by_ref<::Steamworks::ERemoteStorageFilePathType>)>(&::Steamworks::SteamRemoteStorage::GetLocalFileChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b8e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetLocalFileChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ERemoteStorageLocalFileChange>>(), ::i2c::type_of<::by_ref<::Steamworks::ERemoteStorageFilePathType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.BeginFileWriteBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamRemoteStorage::BeginFileWriteBatch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"BeginFileWriteBatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamRemoteStorage.EndFileWriteBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamRemoteStorage::EndFileWriteBatch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EndFileWriteBatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamRemoteStorage::FileWrite(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile, pvData, cubData);
}
inline int32_t Steamworks::SteamRemoteStorage::FileRead(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchFile, pvData, cubDataToRead);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::FileWriteAsync(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, uint32_t  cubData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchFile, pvData, cubData);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::FileReadAsync(::StringW  pchFile, uint32_t  nOffset, uint32_t  cubToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileReadAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchFile, nOffset, cubToRead);
}
inline bool Steamworks::SteamRemoteStorage::FileReadAsyncComplete(::Steamworks::SteamAPICall_t  hReadCall, ::ArrayW<uint8_t>  pvBuffer, uint32_t  cubToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileReadAsyncComplete", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hReadCall, pvBuffer, cubToRead);
}
inline bool Steamworks::SteamRemoteStorage::FileForget(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileForget", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile);
}
inline bool Steamworks::SteamRemoteStorage::FileDelete(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileDelete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::FileShare(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileShare", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchFile);
}
inline bool Steamworks::SteamRemoteStorage::SetSyncPlatforms(::StringW  pchFile, ::Steamworks::ERemoteStoragePlatform  eRemoteStoragePlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetSyncPlatforms", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile, eRemoteStoragePlatform);
}
inline ::Steamworks::UGCFileWriteStreamHandle_t Steamworks::SteamRemoteStorage::FileWriteStreamOpen(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamOpen", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCFileWriteStreamHandle_t>(nullptr, ___internal_method, pchFile);
}
inline bool Steamworks::SteamRemoteStorage::FileWriteStreamWriteChunk(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle, ::ArrayW<uint8_t>  pvData, int32_t  cubData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamWriteChunk", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, writeHandle, pvData, cubData);
}
inline bool Steamworks::SteamRemoteStorage::FileWriteStreamClose(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamClose", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, writeHandle);
}
inline bool Steamworks::SteamRemoteStorage::FileWriteStreamCancel(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileWriteStreamCancel", {}, {::i2c::type_of<::Steamworks::UGCFileWriteStreamHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, writeHandle);
}
inline bool Steamworks::SteamRemoteStorage::FileExists(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile);
}
inline bool Steamworks::SteamRemoteStorage::FilePersisted(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"FilePersisted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchFile);
}
inline int32_t Steamworks::SteamRemoteStorage::GetFileSize(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileSize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchFile);
}
inline int64_t Steamworks::SteamRemoteStorage::GetFileTimestamp(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileTimestamp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, pchFile);
}
inline ::Steamworks::ERemoteStoragePlatform Steamworks::SteamRemoteStorage::GetSyncPlatforms(::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetSyncPlatforms", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ERemoteStoragePlatform>(nullptr, ___internal_method, pchFile);
}
inline int32_t Steamworks::SteamRemoteStorage::GetFileCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamRemoteStorage::GetFileNameAndSize(int32_t  iFile, ::by_ref<int32_t>  pnFileSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetFileNameAndSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, iFile, pnFileSizeInBytes);
}
inline bool Steamworks::SteamRemoteStorage::GetQuota(::by_ref<uint64_t>  pnTotalBytes, ::by_ref<uint64_t>  puAvailableBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetQuota", {}, {::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pnTotalBytes, puAvailableBytes);
}
inline bool Steamworks::SteamRemoteStorage::IsCloudEnabledForAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"IsCloudEnabledForAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamRemoteStorage::IsCloudEnabledForApp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"IsCloudEnabledForApp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamRemoteStorage::SetCloudEnabledForApp(bool  bEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetCloudEnabledForApp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bEnabled);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::UGCDownload(::Steamworks::UGCHandle_t  hContent, uint32_t  unPriority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCDownload", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hContent, unPriority);
}
inline bool Steamworks::SteamRemoteStorage::GetUGCDownloadProgress(::Steamworks::UGCHandle_t  hContent, ::by_ref<int32_t>  pnBytesDownloaded, ::by_ref<int32_t>  pnBytesExpected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUGCDownloadProgress", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hContent, pnBytesDownloaded, pnBytesExpected);
}
inline bool Steamworks::SteamRemoteStorage::GetUGCDetails(::Steamworks::UGCHandle_t  hContent, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<::StringW>  ppchName, ::by_ref<int32_t>  pnFileSizeInBytes, ::by_ref<::Steamworks::CSteamID>  pSteamIDOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUGCDetails", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::by_ref<::Steamworks::AppId_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
inline int32_t Steamworks::SteamRemoteStorage::UGCRead(::Steamworks::UGCHandle_t  hContent, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead, uint32_t  cOffset, ::Steamworks::EUGCReadAction  eAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCRead", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUGCReadAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hContent, pvData, cubDataToRead, cOffset, eAction);
}
inline int32_t Steamworks::SteamRemoteStorage::GetCachedUGCCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetCachedUGCCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::UGCHandle_t Steamworks::SteamRemoteStorage::GetCachedUGCHandle(int32_t  iCachedContent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetCachedUGCHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCHandle_t>(nullptr, ___internal_method, iCachedContent);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::PublishWorkshopFile(::StringW  pchFile, ::StringW  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::StringW  pchTitle, ::StringW  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::Collections::Generic::IList_1<::StringW>*  pTags, ::Steamworks::EWorkshopFileType  eWorkshopFileType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"PublishWorkshopFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::Steamworks::EWorkshopFileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
inline ::Steamworks::PublishedFileUpdateHandle_t Steamworks::SteamRemoteStorage::CreatePublishedFileUpdateRequest(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"CreatePublishedFileUpdateRequest", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::PublishedFileUpdateHandle_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileFile(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileFile", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pchFile);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFilePreviewFile(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchPreviewFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFilePreviewFile", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pchPreviewFile);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileTitle(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchTitle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileTitle", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pchTitle);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileDescription(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileDescription", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pchDescription);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileVisibility(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileVisibility", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, eVisibility);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileTags(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileTags", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pTags);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::CommitPublishedFileUpdate(::Steamworks::PublishedFileUpdateHandle_t  updateHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"CommitPublishedFileUpdate", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, updateHandle);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::GetPublishedFileDetails(::Steamworks::PublishedFileId_t  unPublishedFileId, uint32_t  unMaxSecondsOld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetPublishedFileDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId, unMaxSecondsOld);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::DeletePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"DeletePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::EnumerateUserPublishedFiles(uint32_t  unStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserPublishedFiles", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unStartIndex);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::SubscribePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SubscribePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::EnumerateUserSubscribedFiles(uint32_t  unStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserSubscribedFiles", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unStartIndex);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::UnsubscribePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UnsubscribePublishedFile", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline bool Steamworks::SteamRemoteStorage::UpdatePublishedFileSetChangeDescription(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchChangeDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdatePublishedFileSetChangeDescription", {}, {::i2c::type_of<::Steamworks::PublishedFileUpdateHandle_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateHandle, pchChangeDescription);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::GetPublishedItemVoteDetails(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetPublishedItemVoteDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::UpdateUserPublishedItemVote(::Steamworks::PublishedFileId_t  unPublishedFileId, bool  bVoteUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UpdateUserPublishedItemVote", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId, bVoteUp);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::GetUserPublishedItemVoteDetails(::Steamworks::PublishedFileId_t  unPublishedFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetUserPublishedItemVoteDetails", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::EnumerateUserSharedWorkshopFiles(::Steamworks::CSteamID  steamId, uint32_t  unStartIndex, ::System::Collections::Generic::IList_1<::StringW>*  pRequiredTags, ::System::Collections::Generic::IList_1<::StringW>*  pExcludedTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumerateUserSharedWorkshopFiles", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::PublishVideo(::Steamworks::EWorkshopVideoProvider  eVideoProvider, ::StringW  pchVideoAccount, ::StringW  pchVideoIdentifier, ::StringW  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::StringW  pchTitle, ::StringW  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::Collections::Generic::IList_1<::StringW>*  pTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"PublishVideo", {}, {::i2c::type_of<::Steamworks::EWorkshopVideoProvider>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Steamworks::ERemoteStoragePublishedFileVisibility>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::SetUserPublishedFileAction(::Steamworks::PublishedFileId_t  unPublishedFileId, ::Steamworks::EWorkshopFileAction  eAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"SetUserPublishedFileAction", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::EWorkshopFileAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unPublishedFileId, eAction);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::EnumeratePublishedFilesByUserAction(::Steamworks::EWorkshopFileAction  eAction, uint32_t  unStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumeratePublishedFilesByUserAction", {}, {::i2c::type_of<::Steamworks::EWorkshopFileAction>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, eAction, unStartIndex);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::EnumeratePublishedWorkshopFiles(::Steamworks::EWorkshopEnumerationType  eEnumerationType, uint32_t  unStartIndex, uint32_t  unCount, uint32_t  unDays, ::System::Collections::Generic::IList_1<::StringW>*  pTags, ::System::Collections::Generic::IList_1<::StringW>*  pUserTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EnumeratePublishedWorkshopFiles", {}, {::i2c::type_of<::Steamworks::EWorkshopEnumerationType>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamRemoteStorage::UGCDownloadToLocation(::Steamworks::UGCHandle_t  hContent, ::StringW  pchLocation, uint32_t  unPriority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"UGCDownloadToLocation", {}, {::i2c::type_of<::Steamworks::UGCHandle_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, hContent, pchLocation, unPriority);
}
inline int32_t Steamworks::SteamRemoteStorage::GetLocalFileChangeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetLocalFileChangeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamRemoteStorage::GetLocalFileChange(int32_t  iFile, ::by_ref<::Steamworks::ERemoteStorageLocalFileChange>  pEChangeType, ::by_ref<::Steamworks::ERemoteStorageFilePathType>  pEFilePathType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"GetLocalFileChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Steamworks::ERemoteStorageLocalFileChange>>(), ::i2c::type_of<::by_ref<::Steamworks::ERemoteStorageFilePathType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, iFile, pEChangeType, pEFilePathType);
}
inline bool Steamworks::SteamRemoteStorage::BeginFileWriteBatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"BeginFileWriteBatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamRemoteStorage::EndFileWriteBatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamRemoteStorage*>(),
                        {"EndFileWriteBatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamRemoteStorage::SteamRemoteStorage()   {
}
