#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/PlayerDataStorageInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageInterface_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__CopyFileMetadataAtIndexOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__CopyFileMetadataByFilenameOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DeleteCacheOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DeleteFileOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DuplicateFileOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__FileMetadata_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__GetFileMetadataCountOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteCacheCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDuplicateFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileListCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnReadFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__QueryFileListOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__QueryFileOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)()>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.CopyFileMetadataAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::CopyFileMetadataAtIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804fd240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"CopyFileMetadataAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.CopyFileMetadataByFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::CopyFileMetadataByFilename)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804fd300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"CopyFileMetadataByFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.DeleteCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DeleteCache)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804fd3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DeleteCache", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DeleteFile)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804fd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.DuplicateFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DuplicateFile)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804fd810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DuplicateFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.GetFileMetadataCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions>, ::by_ref<int32_t>)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::GetFileMetadataCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804fda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"GetFileMetadataCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.QueryFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::QueryFile)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804fdce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"QueryFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.QueryFileList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::QueryFileList)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804fdae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"QueryFileList", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.ReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::ReadFile)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804fdf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"ReadFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface.WriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* (::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>, ::System::Object*, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*)>(&::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::WriteFile)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804fe1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"WriteFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::CopyFileMetadataAtIndex(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions>  copyFileMetadataOptions, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>  outMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"CopyFileMetadataAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, copyFileMetadataOptions, outMetadata);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::CopyFileMetadataByFilename(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions>  copyFileMetadataOptions, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>  outMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"CopyFileMetadataByFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, copyFileMetadataOptions, outMetadata);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DeleteCache(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DeleteCache", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, clientData, completionCallback);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DeleteFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions>  deleteOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deleteOptions, clientData, completionCallback);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::DuplicateFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>  duplicateOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"DuplicateFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duplicateOptions, clientData, completionCallback);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::GetFileMetadataCount(::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions>  getFileMetadataCountOptions, ::by_ref<int32_t>  outFileMetadataCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"GetFileMetadataCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, getFileMetadataCountOptions, outFileMetadataCount);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::QueryFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions>  queryFileOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"QueryFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queryFileOptions, clientData, completionCallback);
}
inline void Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::QueryFileList(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>  queryFileListOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"QueryFileList", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queryFileListOptions, clientData, completionCallback);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::ReadFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions>  readOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"ReadFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(this, ___internal_method, readOptions, clientData, completionCallback);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::WriteFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>  writeOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(),
                        {"WriteFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*>(this, ___internal_method, writeOptions, clientData, completionCallback);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>());
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface::PlayerDataStorageInterface()   {
}
