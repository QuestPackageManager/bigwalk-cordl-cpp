#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/TitleStorageInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageInterface_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__CopyFileMetadataAtIndexOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__CopyFileMetadataByFilenameOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__DeleteCacheOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileMetadata_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__GetFileMetadataCountOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnDeleteCacheCompleteCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileListCompleteCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__QueryFileListOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__QueryFileOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileOptions_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageFileTransferRequest_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)()>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.CopyFileMetadataAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::CopyFileMetadataAtIndex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804e19f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"CopyFileMetadataAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.CopyFileMetadataByFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::CopyFileMetadataByFilename)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804e1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"CopyFileMetadataByFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.DeleteCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptions>, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::DeleteCache)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804e1c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"DeleteCache", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.GetFileMetadataCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::GetFileMetadataCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804e1ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"GetFileMetadataCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.QueryFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptions>, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::QueryFile)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"QueryFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.QueryFileList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::QueryFileList)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804e1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"QueryFileList", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::TitleStorageInterface.ReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* (::Epic::OnlineServices::TitleStorage::TitleStorageInterface::*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>, ::System::Object*, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*)>(&::Epic::OnlineServices::TitleStorage::TitleStorageInterface::ReadFile)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1804e24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"ReadFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::TitleStorageInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::TitleStorageInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageInterface::CopyFileMetadataAtIndex(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>  outMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"CopyFileMetadataAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outMetadata);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageInterface::CopyFileMetadataByFilename(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>  outMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"CopyFileMetadataByFilename", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outMetadata);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::TitleStorage::TitleStorageInterface::DeleteCache(::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"DeleteCache", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, clientData, completionCallback);
}
inline uint32_t Epic::OnlineServices::TitleStorage::TitleStorageInterface::GetFileMetadataCount(::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"GetFileMetadataCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::TitleStorage::TitleStorageInterface::QueryFile(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"QueryFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionCallback);
}
inline void Epic::OnlineServices::TitleStorage::TitleStorageInterface::QueryFileList(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"QueryFileList", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionCallback);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* Epic::OnlineServices::TitleStorage::TitleStorageInterface::ReadFile(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*  completionCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(),
                        {"ReadFile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*>(this, ___internal_method, options, clientData, completionCallback);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* Epic::OnlineServices::TitleStorage::TitleStorageInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>());
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* Epic::OnlineServices::TitleStorage::TitleStorageInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::TitleStorageInterface::TitleStorageInterface()   {
}
