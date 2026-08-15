#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformStorage.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformStorage_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__DirectoryFileInfo_def.hpp"
#include "Shipmate/Porting/zzzz__EStorageType_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::DeleteFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::FileExists)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage.LoadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::LoadData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac98f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage.SaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)(::StringW, ::ArrayW<uint8_t>, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::SaveData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage.ListFilesInDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)(::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::ListFilesInDirectory)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac9870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformStorage::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformStorage::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformStorage::DeleteFile(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Shipmate::Porting::Mocked::MockedPlatformStorage::FileExists(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> Shipmate::Porting::Mocked::MockedPlatformStorage::LoadData(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>>>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformStorage::SaveData(::StringW  aFileName, ::ArrayW<uint8_t>  aData, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aFileName, aData, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> Shipmate::Porting::Mocked::MockedPlatformStorage::ListFilesInDirectory(::StringW  aDirectory, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>>>(this, ___internal_method, aDirectory, aStorageType);
}
inline void Shipmate::Porting::Mocked::MockedPlatformStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformStorage* Shipmate::Porting::Mocked::MockedPlatformStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformStorage*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformStorage::MockedPlatformStorage()   {
}
