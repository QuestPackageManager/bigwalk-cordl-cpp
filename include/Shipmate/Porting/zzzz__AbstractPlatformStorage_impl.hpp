#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformStorage.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Shipmate/Porting/zzzz__DirectoryFileInfo_def.hpp"
#include "Shipmate/Porting/zzzz__EStorageType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::*)()>(&::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181ac78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::AbstractPlatformStorage__DeleteFile_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aFileName = aFileName;
this->__4__this = __4__this;
this->aSubFolder = aSubFolder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2::AbstractPlatformStorage__DeleteFile_d__2()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::*)()>(&::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ac7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::AbstractPlatformStorage__FileExists_d__1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aFileName = aFileName;
this->__4__this = __4__this;
this->aSubFolder = aSubFolder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1::AbstractPlatformStorage__FileExists_d__1()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::*)()>(&::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ac8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::AbstractPlatformStorage__LoadData_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<uint8_t>>  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aFileName = aFileName;
this->__4__this = __4__this;
this->aSubFolder = aSubFolder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4::AbstractPlatformStorage__LoadData_d__4()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::*)()>(&::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181ac8cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "aData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::AbstractPlatformStorage__SaveData_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder, ::ArrayW<uint8_t>  aData) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aFileName = aFileName;
this->__4__this = __4__this;
this->aSubFolder = aSubFolder;
this->aData = aData;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5::AbstractPlatformStorage__SaveData_d__5()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Shipmate::Porting::AbstractPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::AbstractPlatformStorage::FileExists)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ac59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::AbstractPlatformStorage::DeleteFile)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ac5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.ListFilesInDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> (::Shipmate::Porting::AbstractPlatformStorage::*)(::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::AbstractPlatformStorage::ListFilesInDirectory)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x181ac5aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.LoadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> (::Shipmate::Porting::AbstractPlatformStorage::*)(::StringW, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::AbstractPlatformStorage::LoadData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ac5f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.SaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformStorage::*)(::StringW, ::ArrayW<uint8_t>, ::StringW, ::Shipmate::Porting::EStorageType)>(&::Shipmate::Porting::AbstractPlatformStorage::SaveData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ac5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage.get_BaseAppStoragePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::AbstractPlatformStorage::*)()>(&::Shipmate::Porting::AbstractPlatformStorage::get_BaseAppStoragePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformStorage::*)()>(&::Shipmate::Porting::AbstractPlatformStorage::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformStorage::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformStorage*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlatformStorage::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformStorage*>();
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Shipmate::Porting::AbstractPlatformStorage::FileExists(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformStorage::DeleteFile(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> Shipmate::Porting::AbstractPlatformStorage::ListFilesInDirectory(::StringW  aDirectory, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>>>(this, ___internal_method, aDirectory, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> Shipmate::Porting::AbstractPlatformStorage::LoadData(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>>>(this, ___internal_method, aFileName, aSubFolder, aStorageType);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformStorage::SaveData(::StringW  aFileName, ::ArrayW<uint8_t>  aData, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aFileName, aData, aSubFolder, aStorageType);
}
inline ::StringW Shipmate::Porting::AbstractPlatformStorage::get_BaseAppStoragePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformStorage* Shipmate::Porting::AbstractPlatformStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformStorage*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformStorage::AbstractPlatformStorage()   {
}
