#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/FileSystemUtility.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__FileSystemUtility_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__FileSystemUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0._WriteFile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::_WriteFile_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180549d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*>(),
                        {"<WriteFile>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_filePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_filePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_set_filePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filePath = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_set_content(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___content = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_createDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createDirectory;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_get_createDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createDirectory;
}
constexpr void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::__cordl_internal_set_createDirectory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createDirectory = value;
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::_WriteFile_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*>(),
                        {"<WriteFile>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0::FileSystemUtility___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180547640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::FileSystemUtility__DirectoryExistsAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13::FileSystemUtility__DirectoryExistsAsync_d__13()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180547910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDirectory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::FileSystemUtility__ExistsInternalAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, bool  isDirectory, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->isDirectory = isDirectory;
this->path = path;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15::FileSystemUtility__ExistsInternalAsync_d__15()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180547a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::FileSystemUtility__FileExistsAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14::FileSystemUtility__FileExistsAsync_d__14()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x180547c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileStream_5__2", ty: "::System::IO::FileStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_reader_5__3", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap5", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::FileSystemUtility__ReadAllTextAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  path, ::System::IO::FileStream*  _fileStream_5__2, ::System::IO::StreamReader*  _reader_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::StringW  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->path = path;
this->_fileStream_5__2 = _fileStream_5__2;
this->_reader_5__3 = _reader_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1::FileSystemUtility__ReadAllTextAsync_d__1()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180548990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::FileSystemUtility__TryReadAllTextAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>  __t__builder, ::StringW  filePath, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->filePath = filePath;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0::FileSystemUtility__TryReadAllTextAsync_d__0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18054a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804428d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "createDirectory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_writer_5__2", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::FileSystemUtility__WriteFileAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, bool  createDirectory, ::StringW  content, ::System::IO::StreamWriter*  _writer_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->filePath = filePath;
this->createDirectory = createDirectory;
this->content = content;
this->_writer_5__2 = _writer_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8::FileSystemUtility__WriteFileAsync_d__8()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.TryReadAllTextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::TryReadAllTextAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180540410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"TryReadAllTextAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.ReadAllTextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ReadAllTextAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805401f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ReadAllTextAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.ReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ReadAllText)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805402a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.GetFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFileSystemEntries)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18053fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.CombinePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::CombinePaths)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"CombinePaths", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFullPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180540000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFileName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.WriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::WriteFile)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180540590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"WriteFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.WriteFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::StringW, ::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::WriteFileAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805404b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"WriteFileAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::DirectoryInfo*)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::CreateDirectory)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::System::IO::DirectoryInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.DirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::DirectoryExists)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18053fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::FileExists)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18053ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.ExistsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ExistsInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18053ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ExistsInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.DirectoryExistsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::DirectoryExistsAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053fdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"DirectoryExistsAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.FileExistsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::FileExistsAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"FileExistsAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.ExistsInternalAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ExistsInternalAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18053fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ExistsInternalAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.GetProjectPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetProjectPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180540030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetProjectPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility.NormalizePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::NormalizePath)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180540180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"NormalizePath", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::TryReadAllTextAsync(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"TryReadAllTextAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>*>(nullptr, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ReadAllTextAsync(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ReadAllTextAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method, path);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ReadAllText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFileSystemEntries(::StringW  path, ::StringW  pattern, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, pattern, recursive);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::CombinePaths(::ArrayW<::StringW>  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"CombinePaths", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetFileName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::WriteFile(::StringW  filePath, ::StringW  content, bool  createDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"WriteFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filePath, content, createDirectory);
}
inline ::System::Threading::Tasks::Task* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::WriteFileAsync(::StringW  filePath, ::StringW  content, bool  createDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"WriteFileAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, filePath, content, createDirectory);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::CreateDirectory(::System::IO::DirectoryInfo*  dInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::System::IO::DirectoryInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dInfo);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::DirectoryExists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::FileExists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ExistsInternal(::StringW  path, bool  isDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ExistsInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, isDirectory);
}
inline ::System::Threading::Tasks::Task_1<bool>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::DirectoryExistsAsync(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"DirectoryExistsAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, path);
}
inline ::System::Threading::Tasks::Task_1<bool>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::FileExistsAsync(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"FileExistsAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, path);
}
inline ::System::Threading::Tasks::Task_1<bool>* PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::ExistsInternalAsync(::StringW  path, bool  isDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"ExistsInternalAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, path, isDirectory);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::GetProjectPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"GetProjectPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::NormalizePath(::by_ref<::StringW>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*>(),
                        {"NormalizePath", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility::FileSystemUtility()   {
}
