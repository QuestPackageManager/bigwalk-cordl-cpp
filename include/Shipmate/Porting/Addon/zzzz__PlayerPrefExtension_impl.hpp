#pragma once
// IWYU pragma private; include "Shipmate/Porting/Addon/PlayerPrefExtension.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/Addon/zzzz__PlayerPrefExtension_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Shipmate/Porting/Addon/zzzz__PlayerPrefExtension_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Shipmate/Porting/zzzz__IPlatformAddon_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac4770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::PlayerPrefExtension__PreparePrefs_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3::PlayerPrefExtension__PreparePrefs_d__3()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::PlayerPrefExtension__SavePlayerPrefTask_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5::PlayerPrefExtension__SavePlayerPrefTask_d__5()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension.PreparePrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::Shipmate::Porting::Addon::PlayerPrefExtension::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension::PreparePrefs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"PreparePrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension::Save)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension.SavePlayerPrefTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::Shipmate::Porting::Addon::PlayerPrefExtension::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension::SavePlayerPrefTask)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"SavePlayerPrefTask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::PlayerPrefExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::PlayerPrefExtension::*)()>(&::Shipmate::Porting::Addon::PlayerPrefExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::AbstractPlatformStorage*& Shipmate::Porting::Addon::PlayerPrefExtension::__cordl_internal_get_storage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storage;
}
constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& Shipmate::Porting::Addon::PlayerPrefExtension::__cordl_internal_get_storage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storage;
}
constexpr void Shipmate::Porting::Addon::PlayerPrefExtension::__cordl_internal_set_storage(::Shipmate::Porting::AbstractPlatformStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storage = value;
}
template<typename T>
inline void Shipmate::Porting::Addon::PlayerPrefExtension::Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                    {"Initialize", {::i2c::class_of<T>()}, {::i2c::type_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aManager);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Shipmate::Porting::Addon::PlayerPrefExtension::PreparePrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"PreparePrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void Shipmate::Porting::Addon::PlayerPrefExtension::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Shipmate::Porting::Addon::PlayerPrefExtension::SavePlayerPrefTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"SavePlayerPrefTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void Shipmate::Porting::Addon::PlayerPrefExtension::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::Addon::PlayerPrefExtension::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::PlayerPrefExtension*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Addon::PlayerPrefExtension* Shipmate::Porting::Addon::PlayerPrefExtension::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Addon::PlayerPrefExtension*>());
}
/// @brief Convert operator to "::Shipmate::Porting::IPlatformAddon"
constexpr  Shipmate::Porting::Addon::PlayerPrefExtension::operator ::Shipmate::Porting::IPlatformAddon*() noexcept {
return static_cast<::Shipmate::Porting::IPlatformAddon*>(static_cast<void*>(this));
}
/// @brief Convert to "::Shipmate::Porting::IPlatformAddon"
constexpr ::Shipmate::Porting::IPlatformAddon* Shipmate::Porting::Addon::PlayerPrefExtension::i___Shipmate__Porting__IPlatformAddon() noexcept {
return static_cast<::Shipmate::Porting::IPlatformAddon*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Shipmate::Porting::Addon::PlayerPrefExtension::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Shipmate::Porting::Addon::PlayerPrefExtension::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::PlayerPrefExtension::PlayerPrefExtension()   {
}
