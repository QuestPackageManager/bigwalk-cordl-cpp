#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformAchievements.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_def.hpp"
#include "Shipmate/Porting/zzzz__EPlatformAchievement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements___c::*)()>(&::Shipmate::Porting::AbstractPlatformAchievements___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements___c._GetAchievementById_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformAchievements___c::*)(::Shipmate::Porting::EPlatformAchievement*, int32_t)>(&::Shipmate::Porting::AbstractPlatformAchievements___c::_GetAchievementById_b__12_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac8fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements___c*>(),
                        {"<GetAchievementById>b__12_0", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformAchievements___c::setStaticF___9(::Shipmate::Porting::AbstractPlatformAchievements___c*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::AbstractPlatformAchievements___c*, "<>9", ::Shipmate::Porting::AbstractPlatformAchievements___c*>(std::forward<::Shipmate::Porting::AbstractPlatformAchievements___c*>(value));
}
inline ::Shipmate::Porting::AbstractPlatformAchievements___c* Shipmate::Porting::AbstractPlatformAchievements___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::AbstractPlatformAchievements___c*, "<>9", ::Shipmate::Porting::AbstractPlatformAchievements___c*>();
}
inline void Shipmate::Porting::AbstractPlatformAchievements___c::setStaticF___9__12_0(::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*, "<>9__12_0", ::Shipmate::Porting::AbstractPlatformAchievements___c*>(std::forward<::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*>(value));
}
inline ::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>* Shipmate::Porting::AbstractPlatformAchievements___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*, "<>9__12_0", ::Shipmate::Porting::AbstractPlatformAchievements___c*>();
}
inline void Shipmate::Porting::AbstractPlatformAchievements___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformAchievements___c::_GetAchievementById_b__12_0(::Shipmate::Porting::EPlatformAchievement*  platformAchievement, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements___c*>(),
                        {"<GetAchievementById>b__12_0", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, platformAchievement, id);
}
inline ::Shipmate::Porting::AbstractPlatformAchievements___c* Shipmate::Porting::AbstractPlatformAchievements___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformAchievements___c*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformAchievements___c::AbstractPlatformAchievements___c()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::*)()>(&::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac7080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::AbstractPlatformAchievements__AsyncFetchAchievements_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9::AbstractPlatformAchievements__AsyncFetchAchievements_d__9()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.add_OnAchievementUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*)>(&::Shipmate::Porting::AbstractPlatformAchievements::add_OnAchievementUnlocked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac4be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"add_OnAchievementUnlocked", {}, {::i2c::type_of<::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.remove_OnAchievementUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*)>(&::Shipmate::Porting::AbstractPlatformAchievements::remove_OnAchievementUnlocked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac4c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"remove_OnAchievementUnlocked", {}, {::i2c::type_of<::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)()>(&::Shipmate::Porting::AbstractPlatformAchievements::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.UnlockAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformAchievements::*)(::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::AbstractPlatformAchievements::UnlockAchievement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.SetAchievementProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformAchievements::*)(::Shipmate::Porting::EPlatformAchievement*, int32_t)>(&::Shipmate::Porting::AbstractPlatformAchievements::SetAchievementProgress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.AsyncFetchAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformAchievements::*)()>(&::Shipmate::Porting::AbstractPlatformAchievements::AsyncFetchAchievements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.IsAchievementUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::AbstractPlatformAchievements::*)(::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::AbstractPlatformAchievements::IsAchievementUnlocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac4b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.ClearCachedAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)()>(&::Shipmate::Porting::AbstractPlatformAchievements::ClearCachedAchievements)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"ClearCachedAchievements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.GetAchievementById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::EPlatformAchievement* (::Shipmate::Porting::AbstractPlatformAchievements::*)(int32_t)>(&::Shipmate::Porting::AbstractPlatformAchievements::GetAchievementById)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ac4a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"GetAchievementById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.SendUnlockedAchievementEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)(uint64_t, ::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::AbstractPlatformAchievements::SendUnlockedAchievementEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac4b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"SendUnlockedAchievementEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformAchievements.SetAchievementProgressionLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformAchievements::*)(bool)>(&::Shipmate::Porting::AbstractPlatformAchievements::SetAchievementProgressionLock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"SetAchievementProgressionLock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_OnAchievementUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAchievementUnlocked;
}
constexpr ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>* const& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_OnAchievementUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAchievementUnlocked;
}
constexpr void Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_set_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAchievementUnlocked = value;
}
constexpr bool& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_mAchievementProgressLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAchievementProgressLocked;
}
constexpr bool const& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_mAchievementProgressLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAchievementProgressLocked;
}
constexpr void Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_set_mAchievementProgressLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAchievementProgressLocked = value;
}
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_mUnlockedAchievements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUnlockedAchievements;
}
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* const& Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_get_mUnlockedAchievements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUnlockedAchievements;
}
constexpr void Shipmate::Porting::AbstractPlatformAchievements::__cordl_internal_set_mUnlockedAchievements(::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mUnlockedAchievements = value;
}
inline void Shipmate::Porting::AbstractPlatformAchievements::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformAchievements*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlatformAchievements::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformAchievements*>();
}
inline void Shipmate::Porting::AbstractPlatformAchievements::add_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"add_OnAchievementUnlocked", {}, {::i2c::type_of<::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformAchievements::remove_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"remove_OnAchievementUnlocked", {}, {::i2c::type_of<::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformAchievements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformAchievements::UnlockAchievement(::Shipmate::Porting::EPlatformAchievement*  aAchievement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aAchievement);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformAchievements::SetAchievementProgress(::Shipmate::Porting::EPlatformAchievement*  aAchievement, int32_t  aProgress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aAchievement, aProgress);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformAchievements::AsyncFetchAchievements()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Shipmate::Porting::AbstractPlatformAchievements::IsAchievementUnlocked(::Shipmate::Porting::EPlatformAchievement*  aAchievement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aAchievement);
}
inline void Shipmate::Porting::AbstractPlatformAchievements::ClearCachedAchievements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"ClearCachedAchievements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::EPlatformAchievement* Shipmate::Porting::AbstractPlatformAchievements::GetAchievementById(int32_t  aAchievementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"GetAchievementById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::EPlatformAchievement*>(this, ___internal_method, aAchievementId);
}
inline void Shipmate::Porting::AbstractPlatformAchievements::SendUnlockedAchievementEvent(uint64_t  aUserId, ::Shipmate::Porting::EPlatformAchievement*  aAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"SendUnlockedAchievementEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aUserId, aAchievement);
}
inline void Shipmate::Porting::AbstractPlatformAchievements::SetAchievementProgressionLock(bool  aLock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformAchievements*>(),
                        {"SetAchievementProgressionLock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aLock);
}
inline ::Shipmate::Porting::AbstractPlatformAchievements* Shipmate::Porting::AbstractPlatformAchievements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformAchievements*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformAchievements::AbstractPlatformAchievements()   {
}
